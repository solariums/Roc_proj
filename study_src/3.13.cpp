#include<iostream>
#include<vector>
using namespace std;
int main(){
    int val;
    vector<int> num;
    cout<<"Please input some number(CTRL+Z) for end: "<<endl;
    while(cin>>val){
        num.push_back(val);
    }
    if(num.size() == 0){
        cout<<"the vector is empty"<<endl;
        return -1;
    }

    cout << "Sum of each pair of adjacent elements in the vector:"
         << endl;
    for(vector<int>::size_type ix=0;ix<num.size()-1;ix+=2){
        cout<<num[ix] + num[ix+1]<<"\t";
        if(ix%6==0){
            cout<<endl;
        }
    }
    if(num.size()%2 != 0){
        cout << endl
             << "The last element is not been summed "
             << "and its value is "
             << num[num.size()-1] << endl;

    }
            return 0;
}
