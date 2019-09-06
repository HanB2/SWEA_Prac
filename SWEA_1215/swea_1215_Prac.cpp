#include <iostream>

using namespace std;

int main(){
    
    int t_case;
    for (int t_case = 0; t_case < 10; t_case++)
    {
        int n;
        int check =1;
        int cnt=0;
        cin >> n;

        char board[8][8];

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {

                cin >> board[i][j];
            }
            
        }

        // 가로검사

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8-n+1; j++)
            {

                int l, r;

                l =j;
                r = n-1+j;

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

                if (check !=0)
                {
                    cnt++;
                }

                check =1;
            }
        }



        //세로 검사
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8-n+1; j++)
            {
                int nor, s;

                nor =j;
                s = n-1+j;

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
        cout << "#" << t_case +1 << " " << cnt << endl;
        

    }   
}
