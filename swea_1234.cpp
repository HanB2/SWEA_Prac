#include <iostream>
#include <stack>

using namespace std;

int main(){
    for (int t_case = 0; t_case < 10; t_case++)
    {
        int Num;
        int Num_data;
        stack<int> s, t;

        cin >> Num;
        //cin >> Num_data;
      
        scanf("%1d", &Num_data);

        s.push(Num_data);

        for (int i = 0; i < Num; i++)
        {
            scanf("%1d", &Num_data);

            if (!s.empty() && s.top() == Num_data)
            {
                s.pop();
            }
            else
            {
                s.push(Num_data);
            }
            
            
        }
        while (!s.empty())
        {
            t.push(s.top());
            s.pop();
        }
        
        cout << "#" <<t_case+1 <<" ";

        while (!t.empty())
        {
            cout << t.top();
            t.pop();
        }
        cout << endl;

    }
}
