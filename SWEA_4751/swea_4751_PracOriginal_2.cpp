// 규칙을 생각해봅시다.
//1,5 번째 줄은 같고,
// 2,4 번째도 같고
// 3번째 줄 

// 이렇게 3개의 유형으로 나뉜다.


//1,5은  ..#. 을 문자열 개수 만큼. 만들고 마지막에 . 하나 추가.
// 2,4번째 규칙은 문자열 개수 * 2 만큼 .# 을 만들고. 마지막에 . 추가.
//3번째꺼 규칙은  문자열 개수 만큼 #.문자열. 만들고 마지막에 # 추가.



#include <iostream>
#include <string.h>


using namespace std;

char Contents[55];
char Pattern[3][200];
int length;
int i=0, j=0;

int main(){

    int T;
    cin >> T;
    for (int t_case = 0; t_case < T; t_case++)
    {
        cin >> Contents;
       // getline(cin,Contetns);
        length = strlen(Contents);

      
        i=0; j=0;


        //첫번째 유형, 1,5.  ..#. 을 문자열 개수 만큼. 만들고 마지막에 . 하나 추가.
       
        for ( i = 0; i < length; i++)
        {
          Pattern[0][j++] = '.';
          Pattern[0][j++] = '.';
          Pattern[0][j++] = '#';
          Pattern[0][j++] = '.';
        }
        Pattern[0][j++] = '.';
        Pattern[0][j++] = "\n";


        //두번째 유형 2,4,  2,4번째 규칙은 문자열 개수 * 2 만큼 .# 을 만들고. 마지막에 . 추가.
        for (i = 0, j=0; i < length * 2; i++) //i j 2개다 초기화
        {
            Pattern[1][j++] = '.';
            Pattern[1][j++] = '#';
        }
        Pattern[1][j++] = '.';
        
        Pattern[1][j++] = "\n";

        //세번째 유형. 3번째꺼 규칙은  문자열 개수 만큼 #.문자열. 만들고 마지막에 # 추가.
        for (i = 0, j=0; i < length;)
        {
            Pattern[2][j++] = '#';
            Pattern[2][j++] = '.';
            Pattern[2][j++] = Contents[i++];
            Pattern[2][j++] = '.';
        }
        Pattern[2][j++] = '#';
        
        Pattern[2][j++] = "\n";


        cout <<  Pattern[0] <<endl;
        cout <<  Pattern[1] <<endl;
        cout <<  Pattern[2] <<endl;
        cout <<  Pattern[1] <<endl;
        cout <<  Pattern[0] <<endl;
        cout << "----------"<< endl;
    }
 
    
}

// 한 개 문자 받았을 때는 되는데, 여러 문자 입력받으면 제대로 입력이 안된다.
// 49개까지만 맞았다는데.범위 잡는거에서 문제가 생긴게 아닐까.
