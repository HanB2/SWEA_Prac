#include <iostream>

using namespace std;

int main(){
    int T;

    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        int a,b,c;
        int result;
        cin >> a >> b >> c;

        cout << "#" << t_case+1 << " ";
        
        if (a>b)
        {
           result = c/b;
        }
        else
        {
            result = c/a;
        }
        
        cout << result << '\n';

    }
}