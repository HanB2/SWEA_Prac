#include <iostream>

#define RIGHT 1
#define DOWN 2
#define LEFT 3
#define UP 4


using namespace std;


int main(){

    int T;
    cin >> T;

    for(int test_case =0; test_case < T; test_case++){
            
        int N;
        cin >> N;
        int snail[N][N];
        
        int x,y, dir = RIGHT;
        x=0; y=0;

        int maxR,maxL,maxU,maxD;
        maxR = N-1;
        maxL = 0;
        maxD = N-1;
        maxU = 1; // 이거 헷갈리는데. 어떻게 줘야 할까? up 에서 max 만나려면 최소 한바퀴는 돌아야하잖어. 그니까 1이되어야겠지. snail[1][] 이니까


        for(int i=1; i<=N*N; i++){
             snail[y][x] = i;
             if(dir == RIGHT){
                 if( x == maxR){
                     maxR--;
                     dir = DOWN;
                     y++;
                 }
                 else{
                     x++;
                 }
             }
             else if(dir == DOWN){
                 if( y == maxD){
                     maxD--;
                     dir = LEFT;
                     x--;
                 }
                 else
                 {
                     y++;
                 }
                 
             }
             else if(dir == LEFT){
                 if(x == maxL){
                     maxL--;
                     dir = UP;
                     y--;
                 }
                 else
                 {
                     x--;
                 }
             }
             else if(dir == UP){
                 if( y== maxU){
                     maxU--;
                     dir = RIGHT;
                     x++;
                 }
                 else
                 {
                     y--;
                 }
                 
             }
        }

        cout << "#" << test_case +1 << endl;
        for(int i=0; i<N;i++){
            for(int j=0; j<N; j++){
                cout << snail[i][j];
                if(j < N-1){
                cout << " "; 
                }
            }
            cout << endl
        }
    }
}