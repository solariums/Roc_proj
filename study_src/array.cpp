#include<iostream>
#include<string>
using namespace std;

int main(){
    const size_t array_size = 10;
    int ia[array_size];
    int ar[] = {1,45,3,5,0};
    for(size_t ix=0; ix!= array_size; ++ix){
                cout << "元素当前值是:" << ia[ix]<<endl;
        if(ar[ix]){
            ia[ix]= ar[ix];
        }else{
            ia[ix]=555;
        }
        cout << ":" << ia[ix]<<endl;
    }
    return 0;
}
