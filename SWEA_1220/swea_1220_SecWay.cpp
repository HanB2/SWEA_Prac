#include <iostream>
 
using namespace std;

int main() {
    int t=10;

    for (int z = 1; z <= t; z++) {
        int map[101][101] = { {0,}, };
        int n;
        //scanf("%d", &n);

        cin >> n;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
               // scanf("%d", &map[i][j]);
               cin >> map[i][j];
            }
        }
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            int check = 0;//걸림돌 체크
            for (int i = 0; i < n; i++) {
                if (map[i][j] == 0)
                    continue;//빈칸이면 pass
                else if (check==0 && map[i][j] == 2) {//
                    continue;//그냥 위로 갈 수 있으므로 pass
                }
                else if (check == 1 && map[i][j] == 2) {//N극이 위에 있는데 S극이 나오면
                    cnt++;
                    check = 0;
                }
                else if (map[i][j] == 1) {//N극이어서 아래로 가야하는 경우
                    check = 1;
                    
                }
            }
        }
       // printf("#%d %d\n", z, cnt);
       cout << "#" << z << " " << cnt << endl;
    }
 
}

