#include <iostream>

using namespace std;

//제일 확률 높은 거.  오름차순 이 아이디어 자체를 모르겠는데. 몇개 ex 로 돌려봐.
//그러면 규칙이 나온다.
void SumOfNum(int p_N, int p_M){
    
    int Gap = p_N - p_M +1;
    for (int i = 0; i < Gap; i++)
    {
        cout << i+1+p_M <<' ';

    }
    cout << '\n';
}




int main(){

    int T;

    cin >> T;

    int N,M;

    

    for (int t_case = 0; t_case < T; t_case++)
    {
        N =0; M=0;
        cin >> N >> M;
        cout << '#' << t_case +1 <<' ';

        if (N >= M)
        {
            SumOfNum(N,M);
        }
        else
        {
            
            SumOfNum(M,N);
        }
        
        

    }
}


2 4


1 2
1 2 3 4


2 3 4 5
3 4 5 6



3  5
1 2 3
1 2 3 4 5

2 3 4 5 6
3 4 5 6 7
4 5 6 7 8



5-3+1 + 3
5-3+1 + 2
5-3+1 + 1
//
