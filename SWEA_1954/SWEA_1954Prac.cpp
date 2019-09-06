#include <iostream>

#define UP 1
#define DOWN 2
#define RIGHT 3
#define LEFT 4

using namespace std;

int main(){
    int T;
    cin  >> T;
    
    for(int t_case =0; t_case < T; t_case++){
        
        int N, x, y, dir =RIGHT;
        cin >> N;
        int snail[N][N];
        int maxL =0, maxR =N-1, maxU =1, maxD =N-1; // 여기 초기값을 어떻게 줄지 헷갈리네.

        x=0; y=0;
        
        for(int i=1; i<=N*N; i++){
            snail[y][x] = i;
        
            if(dir ==RIGHT){
                if(x == maxR){
                    maxR--;
                    dir = DOWN;
                    y++;
                }
                else{
                    x++;
                }
            }
            else if(dir == DOWN){
                if(y == maxD){
                    maxD--;
                    dir = LEFT;
                    x--;
                }
                else{
                    y++;
                }
            }
            else if( dir == LEFT){
                if(x == maxL){
                    maxL ++;
                    dir = UP;
                    y--;
                }
                else{
                    x--;
                }
            }
            else if(dir == UP){
                if(y == maxU){
                    maxU ++;
                    dir = RIGHT;
                    x++;
                }
                else{
                    y--;
                }
            }
        }
        cout << "#" << t_case +1 << endl;
        
        for(int i=0; i< N; i++){
            for(int j=0; j< N; j++){
                cout << snail[i][j];
                if(j <N-1)
                    cout << " ";
            }
            cout << endl;
        }
    }
}