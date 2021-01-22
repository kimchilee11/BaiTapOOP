#pragma once 
#include<iostream>
#include<string>
#include"Date.h"
using namespace std;

class PhongKS
{
protected:
    string MaP;
    int SoNguoi;
    bool TinhTrang;
    Date NgayNP;
    Date NgayTP;
    double GiaPh;
public:
    PhongKS(string, int , bool, Date, Date, double );
    PhongKS();
    friend istream& operator>>( istream&, PhongKS&);
    int getMaPh();
    void input();
    friend const ostream&  operator<<( ostream&,const PhongKS&);
    ~PhongKS();
};
