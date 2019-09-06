#include <iostream>

using namespace std;

int count369(int p_i){
    
    int count =0;
    while (true)
    {
        int digit = p_i%10;
        if (digit == 3 || digit ==6 || digit == 9)
        {
            count++;
        }
        p_i /= 10;
        
        if (p_i ==0)
        {
            break;
        }
    }
    return count;
}





int main(){
    int N;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        int count = count369(i);
        if (count == 0)
        {
            cout << i << " ";
            continue;
        }

        for (int j = 0; j < count; j++)
        {
            cout << "-";
        }
        cout << " ";
    }
}

