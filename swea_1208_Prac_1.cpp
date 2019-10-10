#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    for (int t_case = 0; t_case < 10; t_case++)
    {
        int dmp;
        int result =0;

        vector<int> Rect;

        cin >> dmp;

        for (int i = 0; i < 100; i++)
        {
            int height;

            cin >> height;

            Rect.push_back(height);
        }

        for (int i = 0; i < dmp; i++)
        {
            (*max_element(Rect.begin(), Rect.end()))--;
            (*min_element(Rect.begin(), Rect.end()))++;

        }

        result =  (*max_element(Rect.begin(), Rect.end())) - (*min_element(Rect.begin(), Rect.end()));

        cout << "#" << t_case+1 << " "<< result << '\n';
    }
}
