#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;

    for(int t_case =0; t_case <T; t_case++){
        int N, min =100001, cnt;
        cin >> N;
        int distance[N];
        for(int i=0; i<N; i++){
            cin >>distance[i];
            if(distance[i] <0)
                distance[i] = -distance[i];
            if(distance[i] <min)
                min = distance[i];
        }
        cnt =0;
        for(int i=0; i<N; i++){
            if(distance[i] == min)
            cnt++;
        }
        cout << "#" << t_case +1 << " " << min << " " << cnt << endl; 
    }
}

