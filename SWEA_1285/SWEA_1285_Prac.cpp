#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;

    for(int test_case=0; test_case < T; test_case++){
        int Min = 100001;
        int N;
        cin >> N;
        int distance[N];
        for(int i=0; i<N; i++){
            cin >> distance[i];
            if(distance[i] <0){
                distance[i] = -distance[i];
            }
            if(distance[i] <Min){
                Min = distance[i];
            }
        }
        int SameCount =0;
        for(int i=0; i<N; i++){
            if(distance[i] == Min)
            SameCount++;
        }
        cout << "#" << test_case+1<<" " << Min << " " << SameCount << endl;
    }
}

