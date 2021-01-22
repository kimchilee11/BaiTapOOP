
// #include<iostream>
#include<string.h>
#include"Date.h"
// using namespace std;
#include"PhongKS.h"

class PhongVIP : public PhongKS
{
private:
    double DonGia;
    float PhuThu;
public:
    void TinhTien();
    PhongVIP& operator=(const PhongVIP&);
    friend const ostream& operator<<( ostream&,const PhongVIP&);
    PhongVIP();
    ~PhongVIP();
};