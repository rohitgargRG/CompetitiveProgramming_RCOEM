#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N, M;
    cin >> N >> M;
    long long arr[N][M];

    for(long long i = 0; i < N; i++){
        for(long long j = 0; j < M; j++){
            cin >> arr[i][j];
        }
    }

    for(long long i = 0; i < N; i++){
        for(long long j = 0; j < M; j++){
            if(arr[i][j] == 0) {
                for(long long k = 0; k < N; k++){
                    arr[k][j] = -1;
                }
                for(long long k = 0; k < M; k++){
                    arr[i][k] = -1;
                }
            }
        }
    }

    for(long long i = 0; i < N; i++){
        for(long long j = 0; j < M; j++){
            if(arr[i][j] == -1) arr[i][j] = 0;
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
