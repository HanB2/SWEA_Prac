#include <iostream>

using namespace std;

int a,b;


int Cal(int now){

    if (now == 1)
    {
        return a;
    }
    return(a*Cal(now-1));
}



int main(){
        
        int T;
        T =10;
        
        int t_case;


        while (T--)
        {
            cin >> t_case;
            cin >> a >> b;


            cout << "#" << t_case << " " <<Cal(b) << endl;
        }
}


