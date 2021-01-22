#include"PhongVIP.h"
#include<string>

PhongVIP::PhongVIP()
{

}

PhongVIP::~PhongVIP()
{

}

PhongVIP& PhongVIP::operator=(const PhongVIP& v)
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

void PhongVIP::TinhTien()
{
    enum DonGia 
    {
        T1 = 700,
        T2 = 650,
        T3 = 600,
        T4 = 550,
        T5 = 500,
    };
    int t = this->getMaPh()/10000;
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
    float iii =static_cast<float>(this->SoNguoi)/10;
    this->PhuThu = iii;
    this->GiaPh = DG*(this->SoNguoi ) + this->PhuThu*DG;
    this->DonGia = DG;
}

const ostream& operator<<( ostream& o,const PhongVIP& PV)
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
    o << "\n- Don Gia Phong Vip : " << PV.DonGia << " 000 dong";
    return o;
}