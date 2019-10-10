#include <iostream>



using namespace std;

int T,N,M;
int solved[20][20];
int result, maxCnt;

void getInput();
void getResult();

void getInput(){

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> solved[i][j];
        }
        
    }
}
void getResult(){
    result = 0;
    maxCnt = -1;

    for (int i = 0; i < N; i++)
    {
        int cnt =0;
        for (int j = 0; j < M; j++)
        {
            if (solved[i][j])
            {
                cnt++;
            }
            
        }
        if (cnt > maxCnt)
        {
            maxCnt = cnt;
            result = 1;
        }
        
        else if (cnt == maxCnt )
        {
            
            result ++;
        }
        

        
    }
}

int main(){

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> N >> M;
        getInput();
        getResult();
        cout << '#' <<  i+1  << ' ' <<result << ' ' << maxCnt << '\n'; 

    }
}


