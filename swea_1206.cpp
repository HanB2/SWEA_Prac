#include <iostream>
#include <algorithm>
using namespace std;

int building;
int building_home[1001] ={0,};
int view(int p);


int view(int p){

    int side[5] = {0,};
    
    //
    for (int i = -2; i < 3; i++)
    {
        side[i+2] = building_home[p] - building_home[p+i]; //그러면 높이 차이가 맞지 = 세대 수 차이. 

    }
    if((side[0] >0) && (side[1] >0)&&(side[3]>0)&&(side[4]>0))
    {
        sort(side,side+5); //그러면 6개 아니냐? ㄴㄴ 0이상 5미만. 어떤 의미?    ->  자기 자신(side[0])을 제외하고 가장 작은 값인 side[1]값을 출력시킨다.
        return side[1]; //왜 side[1]에 담을까? 세대 수 차이 중 가장 작은 거. -> 조망권 있는 집들의 수지.
    }

    else    
    {
        return 0;
    }
    
    
}

int main(){

    for (int t_case = 0; t_case < 10; t_case++)
    {
        cin >> building;

        for (int i = 0; i < building; i++)
        {
            cin >> building_home[i];

        }
        int sum =0;

        //정확히 무엇을 의미하는가? 조망권이 있는 집이 몇 개인가?

        for (int i = 2; i < building -2; i++)
        {
            sum += view(i);
        }

        cout <<"#" << t_case+1 << " " << sum << '\n';
        
    }
}