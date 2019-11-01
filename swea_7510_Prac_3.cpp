#include <iostream>

using namespace std;

int main(){

    int T;

    cin >> T;
    
    for (int t_case = 0; t_case < T; t_case++)
    {   
        
        int N;
        cin >> N;
        int result =0;

        for (int i = 1; i <= N; i++)
        {
           
            int sum =0;
            for (int j = i; sum < N; j++)
            {
                sum += j;    

            }

            if (sum == N)
            {
                result++;
            }
        }

        cout <<"#" <<t_case+1 <<" " <<result <<'\n';
    }
}