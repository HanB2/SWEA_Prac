#include <iostream>

using namespace std;

int main(){

    int T;

    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
       int S,E,M;

       cin >> S >> E >> M;


       for (int Year_S = S; Year_S <= 254040; Year_S+=365)
       {
           if (((Year_S - E)%24 ==0) && ((Year_S - M)%29) ==0)
           {
              
              cout <<"#" <<t_case+1 <<" " <<Year_S<<'\n';
              break;
           }
           

       }
    }
}