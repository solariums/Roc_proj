#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;

using std::string;
using std::vector;

int main()
{
	vector<string> vecStr;
	string strTemp;

	while(cin>>strTemp){
		vecStr.push_back(strTemp);
		//cin.clear();
		//cin.sync();
	}

	for(vector<string>::size_type i=0;i!=vecStr.size();++i)
		{
			if(!(i%8))
				{
					cout<<endl;
				}
			for(string::size_type j=0;j!=vecStr[i].size();++j)
				{
					if(islower(vecStr[i][j]))
						{
							vecStr[i][j] =toupper(vecStr[i][j]);
						}
				}
			cout<<vecStr[i] <<endl;
		}
	return 0;
}
