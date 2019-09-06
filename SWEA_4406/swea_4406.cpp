#include <iostream>
#include <string.h>

using namespace std;


int main(){

    int T;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        char input[51];
        cin >> input;

        int Length = strlen(input);
        cout << "#" << t_case+1<<" ";


        for (int i = 0; i < Length; i++)
        {
            if (input[i] == 'a'||input[i] == 'e'||input[i] == 'i'||input[i] == 'o'||input[i] == 'u')
            {
                continue;

            }
            else
            {
                cout << input[i];
            }
            
        }
        cout << endl;

    }
}

