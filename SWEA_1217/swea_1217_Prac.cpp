#include <iostream>

using namespace std;

int a,b;


int Cal(int cur){

    if (cur == 1)
    {
        return a;
    }
    return(a*Cal(cur-1));
}


int main(){
    int T;
    int t_case;
    T =10;

    while (T--)
    {
        cin >> t_case;
        cin >> a >> b;

        cout << "#" << t_case << " " << Cal(b) << endl;
    }
}
