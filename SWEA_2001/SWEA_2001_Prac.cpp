#include <iostream>

using namespace std;

int main(){

    int T,N,M;
    cin >> T;
    
    for(int test_case=0; test_case < T; test_case++){
        cin >> N >> M;
        int map[N][N];

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
               cin >> map[i][j];
            }
        }
        int Dead_Fly=0;

        for (int i = 0; i <= N-M; i++)
        {
            for (int j = 0; j <= N-M; j++)
            {
                int temp=0;
                for (int k = i; k <i+M ; k++)
                {
                    for (int l = j; l < j+M; l++)
                    {
                        temp += map[k][l];
                    }
                    
                    
                }
                if (Dead_Fly < temp)
                {
                    Dead_Fly = temp;
                }
                
                
            }
            

        }
        

     
        
          cout << "#" << test_case +1 << " " << Dead_Fly << endl;

    }
}


