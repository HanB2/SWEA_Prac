#include <iostream>

using namespace std;


int main(){
    int T;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {

        int money;
        cin >> money;
        cout << "#" << t_case +1 << endl;

        cout << money / 50000 << " ";
        money = money % 50000;

        cout << money/ 10000 << " ";
        money = money % 10000;

        cout << money/ 5000 << " ";
        money = money % 5000;

        cout << money/ 1000 << " ";
        money = money % 1000;

        cout << money/ 500 << " ";
        money = money % 500;

        cout << money/ 100 << " ";
        money = money % 100;
        
        cout << money/ 50 << " ";
        money = money % 50;

        cout << money/ 10 << "endl";
        money = money % 10;
    }
}
