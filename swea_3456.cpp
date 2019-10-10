#include <iostream>

using namespace std;

int main(){
    int T,a,b,c;

    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        cin >> a >> b >> c;

        cout << "#" << t_case +1 << " " << ((a==b)? c : (a==c)? b:a) << '\n';

    }
}