#include<iostream>
#include<string>
#include<bitset>

using namespace std;

int main(){
    string strval("0011");
    bitset<10> bitvec(strval);
    cout << "strval:::"<<strval<<endl;
    cout <<"bitvec：：："<<bitvec<<endl;
    cout<< " bitvec的长度是:"<< bitvec.size()<<endl;
    cout<< " bitvec含有1？:"<< bitvec.any()<<endl;
    cout<< " bitvec含有多少个1？:"<< bitvec.count()<<endl;
    for(int index=0; index != bitvec.size(); ++index){
        cout << "修改前各bit位的值" << bitvec[index] <<endl;
        if(bitvec[index]){
            bitvec.flip(index);
        }
    }

    cout<< " 处理之后bitvec中1有？:"<< bitvec.any()<<endl;
    cout<< " 处理之后bitvec中0有？:"<< bitvec.none()<<endl;
    cout <<"bitvec：：："<<bitvec<<endl;
    bitset<64> ibit(1010101);

    cout <<"ibit >>>>"<< ibit<<endl;
}

