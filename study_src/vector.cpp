#include<iostream>
#include<vector>
 using namespace std;
int main()
{
    string word;
    vector<string> text;
    while(cin>>word){
        text.push_back(word);
    }
    for(string::size_type index=0; index != text.size(); ++index){
        cout<<text[index]<<endl;
    }
    return 0;
}
