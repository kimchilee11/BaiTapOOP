#include<string.h>
#include"Date.h"
#include"PhongKS.h"

class PhongBT : public PhongKS
{
private:
    double DonGia;
public:
    void GiaPhong();
    void TinhTien();
    PhongBT& operator=(const PhongBT&);
    friend const ostream& operator<<( ostream&,const PhongBT&);
    PhongBT();
    ~PhongBT();
};