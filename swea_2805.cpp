#include <iostream>

using namespace std;

int N, farm[49][49];


int getResult(){
    int result =0;
    for (int i = 0; i < N/2; i++)
    {
        for (int j = N/2 -i; j <= N/2 +i; j++)
        {
            result += farm[i][j];
        }
        

    }

    for (int i = N/2; i >=0; i--)
    {
        for (int j = N/2 - i; j <=  N/2 +i; j++)
        {
            result += farm[N-1-i][j];
        }
        
    }

    return result;
    
}
/*
i 0
j 2  ~2
result += farm[0][2]

i 1
j 1 ~ 3
result += farm[1][1] farm[1][2] farm[1][3]



i 2
j 0 ~ 4
result += farm[2][0] farm[2][1] farm[2][2] farm[2][3] farm[2][4]

i 1
j 1~3
result += farm[3][1] farm[3][2] farm[3][3] 

i 0
j 2
result +=  farm[4][2]
*/
int main(){

    int T;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        cin >>N;
        for (int row = 0; row < N; row++)
        {
            for (int col = 0; col < N; col++)
            {
                scanf("%1d",&farm[row][col]);
            }
            
        }
        cout << "#" << t_case +1 <<" "<< getResult() <<'\n';
    }
}