#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    for (int t_case = 0; t_case < 10; t_case++)
    {
        int dmp;
        int result =0;

        vector<int> Rectagle;
        cin >> dmp;

        for (int i = 0; i < 100; i++)
        {
            int height;

            cin >> height;

            Rectagle.push_back(height);

        }

        for (int i = 0; i < dmp; i++)
        {
         (*max_element(Rectagle.begin(),Rectagle.end()))--;
         (*min_element(Rectagle.begin(),Rectagle.end()))++;

        }

        result = (*max_element(Rectagle.begin(),Rectagle.end())) -(*min_element(Rectagle.begin(),Rectagle.end()));

        cout << "#" << t_case+1 << " " << result << '\n';
        
    }   
}