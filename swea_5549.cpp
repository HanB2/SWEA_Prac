#include <iostream>
#include <string>

using namespace std;

int main(){

    int T;
    cin >> T;
    
    string str; //100자리 수. 데이터 크기 잡을만한 게 없네. 그냥 string 으로 받아서 변환하자.

    for (int t_case = 0; t_case < T; t_case++)
    {
        cin >> str;

        cout <<"#" <<t_case+1 <<" ";

        if ((str.back()-'0')%2)
        {
            cout <<"Odd"<<'\n';
        
        }
        else
        {
            cout <<"Even" <<'\n';
        }
        
        

    }
    

}