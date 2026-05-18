#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, M;

    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    cin >> N >> M;
    vector<pair<int, int>> road(N);
    vector<pair<int, int>> bessie(M);
    for (int i = 0; i < N; i++) {
        cin >> road[i].first >> road[i].second;
    }
    for (int i = 0; i < M; i++) {
        cin >> bessie[i].first >> bessie[i].second;
    }
    
    return 0;
}