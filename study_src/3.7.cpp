#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1,s2;
    cout<< "PLS enter tow words:"<<endl;
    cin>>s1>>s2;
    cout<<"s1==" <<s1<<"\ns2=="<<s2<<endl;
    if(s1==s2)
        cout<<"s1==s2\n"<<endl;
    else
        if(s1<s2)
            cout<<"s1<s2"<<endl;
        else
            cout<<"s1>s2"<<endl;

    if(s1.size() == s2.size())
        cout<< "s1 and s2 have the same lenth"<<endl;
    else
        if(s1.size() > s2.size())
            cout<< "s1 if  lenger"<<endl;
        else
            cout<<"s2 is lenger"<<endl;
    
        
}
