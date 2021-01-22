
#include"PhongKS.h"

PhongKS::PhongKS()
{
        // this->MaP = "";   
        // this->TinhTrang = false;
}

PhongKS::PhongKS(string MaP, int SoN, bool TT, Date NgayNP, Date NgayTP, double GiaP)
        : MaP(MaP), SoNguoi(SoNguoi), TinhTrang(TT), NgayNP(NgayNP), NgayTP(NgayTP), GiaPh(GiaP)
{

}

PhongKS::~PhongKS()
{

}

istream& operator>>( istream& cin, PhongKS& ph)
{
        while(1)
        {
                rewind(stdin);
                cout << "Nhap Ma Phong : ";
                getline(cin,ph.MaP);
                cout << "|||" << ph.getMaPh() << "||";
                int i =ph.getMaPh() ;
                if( 
                        i >= 10000 && i <= 10009 ||
                        i >= 20000 && i <= 20009 ||
                        i >= 30000 && i <= 30009 ||
                        i >= 40000 && i <= 40009 ||
                        i >= 50000 && i <= 50009 
                 )
                break;
                else cout << "\n-Ma Phong Khong Hop Le !!!";
        }
        cout << "Nhap So Nguoi : ";
        cin >> ph.SoNguoi;
        cout <<  "Nhap Tinh Trang : (Ban chon 0 hoac 1 )";
        cout << "\n   0. False ";
        cout << "\n   1. True";
        cout << endl;
        cin >>ph.TinhTrang;
        cout << "Nhap ngay, thang, nam nhap phong : ";
        ph.NgayNP.input();
        if(ph.TinhTrang == 0)
        {
                cout << "Nhap ngay, thang, nam tra phong : ";
                ph.NgayTP.input();
        }
        return cin ;
}

void PhongKS::input()
{
        while(1)
        {
                rewind(stdin);
                cout << "Nhap Ma Phong : ";
                getline(cin,this->MaP);
                int i =this->getMaPh() ;
                if( 
                        i >= 10000  && i <= 59999 
                 )
                break;
                else cout << "\n-Ma Phong Khong Hop Le !!!";
        }
        int j;
        while (1)
        {
                try
                {
                        cout << "Nhap So Nguoi : ";
                        cin >> this->SoNguoi;   
                        if(this->SoNguoi>4 || this->SoNguoi <1) throw 7;
                        j=1;
                }
                catch(int i)
                {
                        cout << "So nguoi toi da la 4 !!!!!!!!\n";
                        continue;
                }
                if(j !=2)break;
        }
        cout <<  "Nhap Tinh Trang : (Ban chon 0 hoac 1 )";
        cout << "\n   0. False ";
        cout << "\n   1. True";
        cout << endl;
        cin >>this->TinhTrang;
        cout << "Nhap ngay, thang, nam nhap phong : ";
        this->NgayNP.input();
        if(this->TinhTrang == 0)
        {
                while (1)
                {
                cout << "Nhap ngay, thang, nam tra phong : ";
                this->NgayTP.input();
                        if(   this->NgayTP.GET_Month() > this->NgayNP.GET_Month() && this->NgayTP.GET_Year() >= this->NgayNP.GET_Year() 

                        ||this->NgayTP.GET_Day() >= this->NgayNP.GET_Day() &&  this->NgayTP.GET_Month() >= this->NgayNP.GET_Month() && this->NgayTP.GET_Year() >= this->NgayNP.GET_Year() 
                        ||this->NgayTP.GET_Day() > this->NgayNP.GET_Day() &&  this->NgayTP.GET_Month() > this->NgayNP.GET_Month() && this->NgayTP.GET_Year() >= this->NgayNP.GET_Year() 
                        || this->NgayTP.GET_Year() > this->NgayNP.GET_Year() 
                           ) 
                        {
                                break;
                        }    
                        else
                        {
                                cout << " Ngay Tra Phong phai co gia tri bang ngay hien tai tro len !!!! \n";
                                continue;
                        }
                        
                }
                
                    

        }
}



const ostream& operator<<(ostream& o, const  PhongKS& ph)
{
        o << "\n- Ma Phong : ";
        o << ph.MaP;

        o << "\n- So Nguoi : ";
        o << ph.SoNguoi;
        o << "\n- Tinh Trang : ";
        if( ph.TinhTrang==1) 
             o << "True" ;
             else o << "False";
        o << "\n- Ngay Nhan Phong : ";
        o << ph.NgayNP;
        o << "\n- Ngay Tra Phong : ";
        o << ph.NgayTP;
        o << "\n- Gia Tien : ";
        o << ph.GiaPh;
        return o;
}

int PhongKS::getMaPh()
{
    int MaPh = stoi(this->MaP);
    return MaPh;
}