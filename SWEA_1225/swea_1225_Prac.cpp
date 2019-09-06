#include <iostream>
#include <queue>
using namespace std;

int main(){
   queue<int> q;
    int num;

    for (int t_case = 0; t_case < 10; t_case++)
    {
        int tc;
        cin >> tc;

        for (int i = 0; i < 8; i++)
        {
            cin >> num;
            q.push(num);
        }
        
        int cnt =0;
             while (!(q.back()==0))
    {
        num = q.front() - (++cnt);
        q.pop();

        if (num <0)
        {
            num =0;
        }
        q.push(num);

        if (cnt == 5)
        {
            cnt =0;
        } //cycle 이 5를 기준으로 돈다.
        
        
    }
        
            cout << "#" << tc << " ";
            while (!q.empty())
            {
                cout << q.front()<<" ";
                q.pop();
                
            }
        cout << endl;
    }
}