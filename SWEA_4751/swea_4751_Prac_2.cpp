#include <iostream>
#include <string>
//#include <string.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
       string Contents ;
       string Type_1 = ".";
       string Type_2 = ".";
       string Type_3 = "#";

       cin >> Contents;

       for (int i = 0; i < Contents.length(); i++)
       {
           Type_1 = Type_1 + ".#..";
           Type_2 = Type_2 + "#.#.";
           Type_3 = Type_3 + "." + Contents[i] + ".#";
       }

       cout << Type_1 << endl;
       cout << Type_2 << endl;
       cout << Type_3 << endl;
       cout << Type_2 << endl;
       cout << Type_1 << endl;

    }
}