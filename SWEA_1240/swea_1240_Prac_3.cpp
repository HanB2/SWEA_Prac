#include <iostream>

using namespace std;

char arr[51][101];

int getnum(int p1, int p2 ){

    if (arr[p1][p2 - 6] == '0' && arr[p1][p2 - 5] == '0' && arr[p1][p2 - 4] == '0' && arr[p1][p2 - 3] == '1' && arr[p1][p2 - 2] == '1' && arr[p1][p2 - 1] == '0' && arr[p1][p2] == '1') return 0;
	else if (arr[p1][p2 - 6] == '0' && arr[p1][p2 - 5] == '0' && arr[p1][p2 - 4] == '1' && arr[p1][p2 - 3] == '1' && arr[p1][p2 - 2] == '0' && arr[p1][p2 - 1] == '0' && arr[p1][p2] == '1') return 1;
	else if (arr[p1][p2 - 6] == '0' && arr[p1][p2 - 5] == '0' && arr[p1][p2 - 4] == '1' && arr[p1][p2 - 3] == '0' && arr[p1][p2 - 2] == '0' && arr[p1][p2 - 1] == '1' && arr[p1][p2] == '1') return 2;
	else if (arr[p1][p2 - 6] == '0' && arr[p1][p2 - 5] == '1' && arr[p1][p2 - 4] == '1' && arr[p1][p2 - 3] == '1' && arr[p1][p2 - 2] == '1' && arr[p1][p2 - 1] == '0' && arr[p1][p2] == '1') return 3;
	else if (arr[p1][p2 - 6] == '0' && arr[p1][p2 - 5] == '1' && arr[p1][p2 - 4] == '0' && arr[p1][p2 - 3] == '0' && arr[p1][p2 - 2] == '0' && arr[p1][p2 - 1] == '1' && arr[p1][p2] == '1') return 4;
	else if (arr[p1][p2 - 6] == '0' && arr[p1][p2 - 5] == '1' && arr[p1][p2 - 4] == '1' && arr[p1][p2 - 3] == '0' && arr[p1][p2 - 2] == '0' && arr[p1][p2 - 1] == '0' && arr[p1][p2] == '1') return 5;
	else if (arr[p1][p2 - 6] == '0' && arr[p1][p2 - 5] == '1' && arr[p1][p2 - 4] == '0' && arr[p1][p2 - 3] == '1' && arr[p1][p2 - 2] == '1' && arr[p1][p2 - 1] == '1' && arr[p1][p2] == '1') return 6;
	else if (arr[p1][p2 - 6] == '0' && arr[p1][p2 - 5] == '1' && arr[p1][p2 - 4] == '1' && arr[p1][p2 - 3] == '1' && arr[p1][p2 - 2] == '0' && arr[p1][p2 - 1] == '1' && arr[p1][p2] == '1') return 7;
	else if (arr[p1][p2 - 6] == '0' && arr[p1][p2 - 5] == '1' && arr[p1][p2 - 4] == '1' && arr[p1][p2 - 3] == '0' && arr[p1][p2 - 2] == '1' && arr[p1][p2 - 1] == '1' && arr[p1][p2] == '1') return 8;
	else if (arr[p1][p2 - 6] == '0' && arr[p1][p2 - 5] == '0' && arr[p1][p2 - 4] == '0' && arr[p1][p2 - 3] == '1' && arr[p1][p2 - 2] == '0' && arr[p1][p2 - 1] == '1' && arr[p1][p2] == '1') return 9;
	else return -1;

}




int main(){

    int T;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        int N,M;
        cin >> N >> M;

        int ex, ey;

        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            for (int j = 0; j < M; j++)
            {
                if (arr[i][j] == '1')
                {
                    ex = i;
                    ey = j;
                }
                
            }
            
        }
        int Password[8];
        int answer =0;
        for (int k = 0; k < 8; k++)   //이 부분 이해가 안된다.
        {
            Password[7-k] = getnum(ex,ey);
            answer += Password[7-k];
            ey -= 7;
        }

        if ((3*(Password[0] +Password[2] +Password[4] +Password[6])  +Password[1] +Password[3] +Password[5] +Password[7])%10 ==0 )
        {
            cout << '#' << t_case +1 << ' ' << answer <<'\n';
        }
        else
        {
            cout << '#' << t_case +1 << ' ' << 0 << '\n';
        }
        
        
        
        

    }
}

