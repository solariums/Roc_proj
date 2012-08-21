/*
 *author :rocsun
 * date: 2012-07-17
*/
#include <iostream>
int main(){
    int i=1024, i2=2048;
    int &r=i,r2=i2;
    std::cout<<"i="<<i<<"\n"
             <<"i2="<<i2<<"\n"
             <<"r="<<&r<<"\n"
             <<"r2="<<r2<<std::endl;
    int j=42;
    const int &z=42;
    const int &z2 = z+1;
    std::cout<< "j=="<<j<<"\n"
             <<"&z=="<<&z<<"\n"
             <<"&z2=="<<&z2<<std::endl;
    
}
