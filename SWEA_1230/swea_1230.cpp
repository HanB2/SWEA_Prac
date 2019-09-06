#include <iostream>
#include <list>
using namespace std;

int main(){

    int N;
    int order_N;
    list <int> key;

    for (int t_case = 0; t_case < 10; t_case++)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            key.push_back(x);
        }
        cin >> order_N;
        for (int j = 0; j < order_N; j++)
        {
            char a;
            cin >> a;
            if (a =='I')
            {
                int x,y;
                list<int> ss;
                cin >> x >> y;
                for (int i = 0; i < y; i++)
                {
                    int s;
                    cin >> s;
                    ss.push_back(s);
                }
                
                list <int>::iterator iter;
                iter = key.begin();
                while (x >0)
                {
                    iter++;
                    x--;
                }
                key.splice(iter,ss);
                
            }

            else if (a == 'D')
            {
                int x,y;
                cin >> x >> y;
                list <int>::iterator iter;
                iter = key.begin();
                while (x>0)
                {
                   
                   iter++;
                   x--;
                }
                for (int i = 0; i < y; i++)
                {
                    key.erase(iter++);
                }
                
                
            }
            else if (a == 'A')
            {
                int y,s;
                cin >> y;
                for (int i = 0; i < y; i++)
                {
                    int s;
                    cin >> s;
                    key.push_back(s);
                }
                
            }
            
            
            
        }
        cout << "#" << t_case +1 <<' ';
        for (int i = 0; i < 10; i++)
        {
            cout << key.front() << " ";
            key.pop_front();
        }
        
        cout << endl;
        key.clear();
        
    }
}