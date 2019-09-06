#include <iostream>

using namespace std;

int main(){
    int T,N,M;
    cin >> T;

    for(int test_case=0; test_case < T; test_case++){
        cin >> N >> M;
        int map[N][N];
        int die=0;

        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cin >> map[i][j];
            }
        }

        for(int i=0; i<=N-M; i++){
            for(int j=0; j<=N-M; j++){
                int temp=0;
                for(int k=i; k<i+M; k++){
                    for(int l=j; l<j+M; l++){
                        temp += map[k][l];
                    }
                }
                if (die < temp)
                {
                    die = temp;
                }
                
            }
        }
        cout << "#" << test_case +1 << " " << die << endl;
    }
}