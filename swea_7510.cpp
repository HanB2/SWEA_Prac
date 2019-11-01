#include <iostream>

using namespace std;

int main(){

    int T;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        int N;
        cin >>N;
        
        int count =1;
        for (int i = 1; i < N; i++)
        {
            int result =0;

            for (int k = i; k < N; k++)
            {
                result += k;

                if (result >= N)
                {
                    if (result == N)
                    {
                        count++;
                        break;
                    }
                    
                }
                
            }
            
        }
        
        cout <<"#" <<t_case+1 << " " << count <<'\n';
    }
}

//시간 초과 에러 나서 failed.

