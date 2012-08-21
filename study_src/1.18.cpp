#include <iostream>
int main()
{
	int b,c;
	std::cout<< "Pls input two numbers:"<<std::endl;
	std::cin>>b>>c;
	int upper,lower;
	if(b>c){
		upper=b;
		lower=c;
	}else{
		upper=c;
		lower=b;
	}
	int i;
	int j=0;
	for(i=lower;i<upper;i++){
		j++;
		if(j%10==0){
			std::cout<<"\n"<<std::endl;
		}
		std::cout<<i<<" ";
	}
}
