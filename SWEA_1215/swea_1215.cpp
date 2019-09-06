#include <iostream>

using namespace std;

int main(){

    int t_case;
    for (int t_case = 0; t_case < 10; t_case++)
    {
        int n;
        int cnt =0;
        int check =1;
        cin >> n;

        char board[8][8];

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> board[i][j];
            }
            
        }

        for (int i = 0; i < 8; i++) // 가로검사
        {
            for (int j = 0; j < 8-n+1; j++) // 이 부분 중요. 길이값과 그러면 몇 번 돌려야 하는지 생각
            {
                int l, r; // l 과 r 이 무엇을 의미하는가 L 은 그 길이짜리가 앞에서부터 가는거고 R은 뒤에서부터 간다. 아마도

                l =j;

                r = n -1 +j;

                while (l <= r)
                {
                    if (board[i][l] != board[i][r])
                    {
                        check =0;
                        break;
                    }
                    l++;
                    r--;
                }

                if (check != 0)
                {
                    cnt ++;
                }
                
                check = 1;

            }
            
        }
        for (int i = 0; i < 8; i++) //세로검사
        {
            for (int j = 0; j < 8-n+1; j++)
            {
                int nor, s;
                nor =j; s = n -1+j;

                while (nor <= s)
                {
                    if (board[nor][i] != board[s][i])
                    {
                        check =0;
                        break;
                    }

                    nor++;
                    s--;
                    
                }
                if (check != 0)
                {
                    cnt++;
                }
                check =1;

            }
        }
        cout << "#" << t_case+1 <<" " << cnt << endl;
    }
}

