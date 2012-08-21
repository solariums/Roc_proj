#include <iostream>
#include <string>

using namespace std;
int main(){
    int i,j;
    cout<<"please enter tow numbers:"<<endl;
    cin>>i>>j;
    int result=1;
    for(int cnt=0;cnt!=j;++cnt){
        result *= i;
    }
    cout<< i <<"raised to the power of "
        <<j<<"\t"
        <<result<<endl;
    string s3("sun");
    string s2(s3);
    string s4(5,'c');

    cout<<"s3=="<<s3<<"\n"
        <<"s2=="<<s2<<"\n"
        <<"s4=="<<s4<<endl;
}
