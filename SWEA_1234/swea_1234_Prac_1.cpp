#include <iostream>
#include <stack>
using namespace std;

int main(){
    for(int t_case = 0; t_case < 10; t_case++){
        int n, tmp;
        stack<int> s, t;

        scanf("%d", &n);
        scanf("%1d", &tmp);
        s.push(tmp);
        
        for(int i = 1; i < n; i++){
            scanf("%1d", &tmp);
            if(!s.empty() && s.top() == tmp){
                s.pop();
            } else {
                s.push(tmp);
            }
        }
        while(!s.empty()){
            t.push(s.top());
            s.pop();
        }

         cout << "#" <<t_case+1 <<" ";
       
        while(!t.empty()){
            printf("%d", t.top());
            t.pop();
        }
        cout << endl;
    }
  
}
