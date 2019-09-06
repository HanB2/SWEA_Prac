#include <iostream>

using namespace std;

int map[9][9];

bool checkRow(){
     for (int i = 0; i < 9; i++)
    {
        bool nums[9] ={false};
        for (int j = 0; j < 9; j++)
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

bool checkBox(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            bool nums[9] ={false};
            nums[map[i*3][j*3]-1] = true;
            nums[map[i*3][j*3+1]-1] = true;
            nums[map[i*3][j*3+2]-1] = true;
            
            nums[map[i*3+1][j*3]-1] = true;
            nums[map[i*3+1][j*3+1]-1] = true;
            nums[map[i*3+1][j*3+2]-1] = true;
            
            nums[map[i*3+2][j*3]-1] = true;
            nums[map[i*3+2][j*3+1]-1] = true;
            nums[map[i*3+2][j*3+2]-1] = true;
            
            for (int k = 0; k < 9; k++)
            {
                if (!nums[k])
                {
                    return false;
                }
                
            }
            
        }
        
    }
    return true;
}

int main(){

    int T;
    cin >> T;
    int Result;

    for (int t_case= 0; t_case < T; t_case++)
    {
        for (int i = 0; i < 9; i++)
        {
           for (int j = 0; j < 9; j++)
           {
                cin >> map[i][j];
           }
        }

        if (checkRow() & checkCol() & checkBox())
        {
            Result =1;
        }
        else
        {
            Result =0;
        }
        
        cout << "#" << t_case +1 << " "<< Result << endl;
        
    }
}
