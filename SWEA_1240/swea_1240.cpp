#include <iostream>
#include <string>

using namespace std;


int buf[51][101] = {0,};


int getMatchNumber(int val){
    if (val == 1101)
    {
        return 0;
    }
     if (val == 11001)
    {
        return 1;
    }
     if (val == 10011)
    {
        return 2;
    }
     if (val == 111101)
    {
        return 3;
    }
     if (val == 100011)
    {
        return 4;
    }
     if (val == 110001)
    {
        return 5;
    }
    
     if (val == 101111)
    {
        return 6;
    }
    
     if (val == 111011)
    {
        return 7;
    }
    
     if (val == 110111)
    {
        return 8;
    }
    
     if (val == 1011)
    {
        return 9;
    }
}

int getSevenNumver(int *buf){
    int idx =0;
    int mul = 1000000;
    int sum =0;
    while (idx < 7)
    {
        sum += buf[idx] * mul;
        idx++;
        mul /= 10;
    }
    return sum;
}




int Result(){
    int N ,M;

    cin >> N >> M;

    int sum =0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf_s("%1d", &buf[i][j]);
        }
        
    }

    int si = -1;
    int sj = -1;

    for (int i = N-1; i >= 0; i--)
    {
        bool isEnd = false;
        for (int j = M-1; j >= 0; i--)
        {
            if (buf[i][j] == 1)
            {
                if (j -55 < 0)
                {
                    break;
                }
                si = i;
                sj = j- 55;
                isEnd = true;
                break;
                
            }
            
        }
        if (isEnd)
        {
            break;
        }
        

    }

    int codeList[8] = {0,};
    if (si != -1 && sj != -1)
    {
        for (int i = 0; i < 8; i++)
        {
            codeList[i] = getMatchNumber(getSevenNumver(&buf[si][sj+7 * i]));
            sum += codeList[i];
        }

        int val = (codeList[0] + codeList[2]+ codeList[4] + codeList[6]) * 3;
        val += codeList[1] + codeList[3] + codeList[5] + codeList[7];

        if (val % 10 != 0)
        {
            sum =0;
        }
        
        
    }
    return sum;
    
}



int main(){

    int T =0;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        int result = Result();

        cout << "#" << t_case +1 << " " << result << "\n";

    }
}