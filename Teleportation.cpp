#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, x, y;
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    cin >> a >> b >> x >> y;

    int dist1 = abs(a - x) + abs(b - y);
    int dist2 = abs(a - y) + abs(b - x);

    cout << min(dist1, dist2) << endl;

    return 0;
}