#include <iostream>
#include <algorithm>

using namespace std;

int building_House[1001] ={0,};


int view(int p);
 int N;


int view(int p){

    int side[5] ={0,};

    for (int i = -2; i < 3; i++)
    {
        side[i+2] = building_House[p] - building_House[p+i];
        
    }

    if ((side[0]>0)&&(side[1]>0)&&(side[3]>0)&&(side[4]>0))
    {
        sort(side, side+5);
        return side[1];
    }
    else
    {
        return 0;
    }
    
    
}

int main(){
    for (int t_case = 0; t_case < 10; t_case++)
    {
       

        cin >> N;

        for (int i = 0; i < N; i++)
        {
            cin >> building_House[i];
        }

        
        int sum=0;

        for (int i = 2; i <N -2 ; i++)
        {
         sum += view(i);   
        }
        cout << "#" << t_case +1 << " " << sum << '\n';
    }
}

//sum 초기화 