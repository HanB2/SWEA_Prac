
//map 전체 숫자를 받은 뒤, 그게 스도쿠 규칙에 맞냐 안맞냐? 보는거지.

#include <iostream>

using namespace std;

int map[9][9];




bool checkCol(){
    for (int j = 0; j < 9; j++)
    {
        bool nums[9] ={false};
        for (int i = 0; i < 9; i++)
        {
            nums[map[i][j] -1] = true;
        }
        for (int i = 0; i < 9; i++)
        {
            if (!nums[i])
            {
                return false;
            }
            
        }
    } 
      return true;
}

bool checkRow(){
    for (int i = 0; i < 9; i++)
    {
        bool nums[9] ={false};
        for (int j = 0; j < 9; j++)
        {
            nums[map[i][j] - 1] = true;
        }
        for (int i = 0; i < 9; i++)
        {
            if (!nums[i])
            {
                return false;
            }
        }
    }
      return true;
}

bool checkBox(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            bool nums[9] ={false};
            nums[map[i*3][j*3] -1] = true;
            nums[map[i*3][j*3+1] -1] = true;
            nums[map[i*3][j*3+2] -1] = true;
            nums[map[i*3+1][j*3] -1] = true;
            nums[map[i*3+1][j*3+1] -1] = true;
            nums[map[i*3+1][j*3+2] -1] = true;
            nums[map[i*3+2][j*3] -1] = true;
            nums[map[i*3+2][j*3+1] -1] = true;
            nums[map[i*3+2][j*3+2] -1] = true;
            
            for (int k = 0; k < 9; k++)
        {    
            if (!nums[k]) // 그러면 위에  k 는 왜 있는거여?
            {
                return false;
            }
        }
        }
        
    }
    return true;
}






int main(){
    int T, answer;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cin >> map[i][j];
            }
            
        }

        if (checkBox() & checkCol()&checkRow())
        {
             answer =1;
        }
        else
        {
            answer =0;
        }
        cout << "#" << t_case +1 << " " << answer << endl;   
    }
}


2

7 3 6 4 2 9 5 8 1  num[0] t
5 8 9 1 6 7 3 2 4  num[1] t
2 1 4 5 8 3 6 9 7  num[2] t
8 4 7 9 3 6 1 5 2  num[3] t
1 5 3 8 4 2 9 7 6  num[4] t
9 6 2 7 5 1 8 4 3  num[5] t
4 2 1 3 9 8 7 6 5  num[6]  t
3 9 5 6 7 4 2 1 8  num[7] t
6 7 8 2 1 5 4 3 9  num[8] t


7 3 6 4 8 9 2 5 1
8 5 2 7 3 1 6 9 4
9 1 4 5 6 2 7 3 8
4 9 7 2 5 6 8 1 3
5 6 3 1 8 7 9 4 2
2 8 1 9 4 3 5 6 7
6 7 5 3 2 4 1 8 9
1 4 9 6 7 8 3 2 5
3 2 8 1 9 5 4 7 6


