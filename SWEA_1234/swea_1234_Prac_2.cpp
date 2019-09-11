#include <iostream>
#include <stack>

using namespace std;

int main(){

    for (int t_case = 0; t_case < 10; t_case++)
    {
        int n, n_data;
        stack<int> s, t;

        cin >> n;
        scanf("%1d", n_data);

        s.push(n_data);


        for (int i = 0; i < n; i++)
        {
            scanf("%1d",n_data);

            if (!s.empty() && s.top() == n_data)
            {
                s.pop();
            }
            else
            {
                s.push(n_data);
            }
            
            
        }
        while (!s.empty())
        {
            t.push(s.top());
            s.pop();
        }
        
        cout << "#" << t_case +1 << " ";

        while (!t.empty())
        {
            cout << t.top();
            t.pop();
        }
        
        cout << endl;
        

    }
}