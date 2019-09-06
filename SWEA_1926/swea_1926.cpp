#include <iostream>

using namespace std;

int N;

int count369(int n){
    int count =0;
    while (true)
    {
        int digit = n% 10;
        if (digit == 3 || digit == 6 || digit == 9)
        {
            count ++;
        }
        n/= 10;
        if (n== 0)
        {
            break;
        }        
    }
    return count;
}

int main(){
    
   
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        int count = count369(i);
        if (count == 0)
        {
            cout << i <<" " ;
            continue;
        }
        for (int  j = 0; j < count; j++)
        {
            cout << "-";
        }
        cout << " ";
        
    }
}

// 이렇게 하면 66 이나 333 같은 거는 커버가 안 되는 거 아닌가?  n/=10 으로 커버하고 있어.

// 몫과 나머지 둘 다 이용해야 할 것 같은데.

//ex 636  