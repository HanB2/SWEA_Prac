#include <iostream>

using namespace std;
int N;
int Farm[49][49];


int Result(){
    int result =0;
    for (int i = 0; i < N/2; i++)
    {
        for (int j = N/2 -i; j <= N/2 +i; j++)
        {
            result += Farm[i][j];
        }
        
    }
   // 내멋대로 재구성.
    for (int i = N/2; i <= N/2 + N/2; i++)
    {
        for (int j = i - N/2 ; j <= N/2 +(N -1 -i); j++)
        {
            result += Farm[i][j];
        }
        
    }
    return result;

}

/*
N 이 5일때,


위에꺼.

i 0  j2 farm[0][2]

i 1 1~ 3 farm[1][1] farm[1][2] farm[1][3]

아래꺼.
i 2 ~ 4
i 2 j 0~ 4
i 3 j 1 ~ 3
i 4 j 2 ~ 2


*/
// N 5

// i 2  j 0부터 시작. 4까지 
//i 3 j 는 1부터 시작.  3까지.
// i 4 j는 2부터시작.  2까지.


//  N 7
// i 3  j6까지.  3 +(N -1 -i)  = 6
// i 4 j5까지.  3 +(7 -1 - 4) =5
//i 5  j4까지.  3  +(7 -1 -5)=4
//i 6 j 3까지.  3  +(7- 1 -6)=3

int main(){
    int T;

    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        cin >> N;
        for (int row = 0; row < N; row++)
        {
            for (int col = 0; col < N; col++)
            {
                scanf("%1d",&Farm[row][col]);
            }
            
        }
        cout <<"#"<<t_case+1 <<" "<<Result() <<'\n'; 
    }
}