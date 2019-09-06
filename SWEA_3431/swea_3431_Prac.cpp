#include <iostream>

using namespace std;

int main(){
    int T,L,U,X;

    cin >> T;
    for (int t_case = 0; t_case < T; t_case++)
    {
        cin >> L >> U >> X;
        cout << "#" << t_case +1 <<" ";

        if (X < L)
        {
            cout << L-X << endl;
        }
        else if (X > U)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}

