#include"PhongKS.h"
#include"PhongVIP.h"
#include"PhongBT.h"
#include"QLphong.cpp"

int main ()
{
    // Date phV;
    //     try
    //     {
    //         phV.input();
    //     }
    //     catch( int )
    //     {
    //         cout << "Ngay phai >=1 : ";
    //         system("pause");
    //     }
        
        QLphong<PhongVIP> QLPhongVip ;
        QLphong<PhongBT> QLPhongBT ;
        int LoaiPhong,choose;
        cout << "\nMoi ban chon loai phong : ";
        cout << "\n1. PhongVip. ";
        cout << "\n2. PhongBT. "<< endl;
        cin >> LoaiPhong;
    do
    {

        cout << "\n------------------MENU-------------------";
        cout << "\n 1. Them thong tin 1 phong vao day phong. ";
        cout << "\n 2. Xoa thong tin 1 phong trong day phong. ";
        cout << "\n 3. Cap nhap thong tin 1 phong trong day phong. ";
        cout << "\n 4. Sap xep phong trong day phong. ";
        cout << "\n 5. Hien thi thong tin tat ca cac phong. ";
        cout << "\n 6. Xoa tat ca thong tin. ";
        cout << "\n 7. Chen thong tin phong vao vi tri i. ";
        cout << "\n 8. Tim kiem bai bao theo Ma Phong. ";
        cout << "\n 9. Tong so phong la. ";
        cout << endl;
        cin >> choose ;
        switch (choose)
        {
        case 1:
            {
                if(LoaiPhong==1)
                {
                    PhongVIP PhongVip;
                    PhongVip.input();
                    PhongVip.TinhTien();
                    QLPhongVip.Insert(PhongVip,QLPhongVip.GetLength());
                }
                else    
                {
                    PhongBT PhongBT;
                    PhongBT.input();
                    PhongBT.TinhTien();
                    QLPhongBT.Insert(PhongBT,QLPhongBT.GetLength());
                }
                
            }
            // while(true)
            break;
        case 2:
            cout << "Nhap phan tu ban can xoa : ";
            int i ;
            cin >> i;
            if(LoaiPhong==1)
            {
                QLPhongVip.Remove(i-1);
            }
            break;
        case 3:
            if (LoaiPhong ==1)
            {
                cout << "Nhap phan tu ban muon update :";
                cin >> i;
                PhongVIP PhongV;
                PhongV.input();
                PhongV.TinhTien();
                QLPhongVip.update(i-1,PhongV);
            }
            else
            {
                cout << "Nhap phan tu ban muon update :";
                cin >> i;
                PhongVIP PhongV;
                PhongV.input();
                PhongV.TinhTien();
                QLPhongVip.update(i-1,PhongV);
                
            }
            break;
            
        case 4:
                if(LoaiPhong ==1)
                {
                    QLPhongVip.SapXep();
                    cout << QLPhongVip;
                }
                else
                {
                    QLPhongBT.SapXep();
                    cout << QLPhongBT;
                }
                break;
        case 5:
            if(LoaiPhong ==1)
            {
                cout << QLPhongVip;
            }
                else cout << QLPhongBT;
                break;
        case 6:
                if(LoaiPhong ==1)
                {
                    QLPhongVip.Delete();
                }
                else
                {
                    QLPhongBT.Delete();
                }
                break;
        case 7:
                cout << "Nhap vi tri i can chen :";
                cin >> i;
                if(LoaiPhong== 1)
                {
                    PhongVIP PhongV;
                    PhongV.input();
                    PhongV.TinhTien();
                    QLPhongVip.Insert(PhongV,i-1);
                }
                else
                {
                    PhongBT PhongB;
                    PhongB.input();
                    PhongB.TinhTien();
                    QLPhongBT.Insert(PhongB,i-1);
                }
                 break;
        case 8:
                if(LoaiPhong ==1)
                {
                    cout << "Nhap phan tu i can tim :";
                    cin >> i;
                    cout << "Day la phan tu thu i :";
                    cout << QLPhongVip.search(i-1);
                }
                else
                {
                    cout << "Nhap phan tu i can tim :";
                    cin >> i;
                    cout << "Day la phan tu thu " << i << " : ";
                    cout << QLPhongBT.search(i-1);
                    
                }
                break;
            case 9: 
                if(LoaiPhong==1)
                {
                    cout << "\nTong so phong co la : "<<QLPhongVip.GetLength() ;
                }
                else
                {
                    cout << "\nTong so phong co la : "<<QLPhongBT.GetLength() ;
                }
                break;
        default:
            cout << "\n So Khong Ton Tai. Moi Ban Nhap Lai : \n";
        }
        cout << "Ban co muon thoat ko ? (Chon 1 hoac 2 )";
        cout << "\n   1. Co ";
        cout << "\n   2. Khong \n";
        int bien ;
        cin >> bien;
        if (bien==1)
        {
            break;
        }
        
    }
    while (1);
    // if(LoaiPhong ==1)
    // cout << QLPhongVip;
    // else cout << QLPhongBT;
    return 0;
}