#include <iostream>

using namespace std;

int N,M;
int Uni;
int twinHorn;

// N = Uni + 2 * TwinHorn 
// M = Uni + TwinHorn
// N -M = TwinHorn
int HowMany(){

   twinHorn = N-M;
   Uni = M - twinHorn;
}

int main(){

    int T;
    cin >> T;


    for (int t_case = 0; t_case < T; t_case++)
    {
        Uni =0; twinHorn =0;

        cin >>N >> M;
        
        HowMany();
        cout << "#" << t_case+1 << " " << Uni << " " << twinHorn <<'\n';

    }
}