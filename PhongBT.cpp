#include"PhongBT.h"
#include<string>

PhongBT::PhongBT()
{

}

PhongBT::~PhongBT()
{

}

PhongBT& PhongBT::operator=(const PhongBT& v)
{
    cout << "==";
    this->DonGia = v.DonGia;
    this->GiaPh = v.GiaPh;
    this->MaP = v.MaP;
    this->NgayNP = v.NgayNP;
    this->NgayTP = v.NgayTP;
    this->TinhTrang = v.TinhTrang;
    this->SoNguoi = v.SoNguoi;
    return *this;
}

void PhongBT::TinhTien()
{
    enum DonGia 
    {
        T1 = 500,
        T2 = 450,
        T3 = 400,
        T4 = 350,
        T5 = 300,
    };
    int t = this->getMaPh()/1000;
    cout << "//";
    double DG ;
    if (t == 1)
        DG = T1;
    else if (t == 2)
        DG = T2;
    else if (t == 3)
        DG = T3;
    else if (t == 4)
        DG = T4;
    else if (t == 5)
        DG = T5;
    this->GiaPh = DG*(this->SoNguoi ) + 4*DG;
    this->DonGia = DG;

}


const ostream& operator<<( ostream& o,const PhongBT& PV)
{
    o << "\n- Ma Phong : ";
    o << PV.MaP;
    o << "\n- So Nguoi : ";
    o << PV.SoNguoi;
    o << "\n- Tinh Trang : ";
    if( PV.TinhTrang==1) 
            o << "True" ;
            else o << "False";
    o << "\n- Ngay Nhan Phong : ";
    o << PV.NgayNP;
    o << "\n- Ngay Tra Phong : ";
    o << PV.NgayTP;
    o << "\n- Gia Tien : ";
    o << PV.GiaPh<< " 000 dong";
    o << "\n- Don Gia Phong Vip : " << PV.DonGia<< " 000 dong";
    return o;
}