#include<iostream>
#include<string>

using namespace std;
int main(){
    string s("hello world!!!");
    string::size_type unct_num=0;
    for(string::size_type index=0;index != s.size(); ++index){
        if(ispunct(s[index])){
            unct_num++;
        }else{
            s[index]=toupper(s[index]);
        }
        
    }
    cout<<"there total unct is:"<<unct_num<<endl;
    cout<<"toupper result is :"<< s<<endl;
    return 0;
}
