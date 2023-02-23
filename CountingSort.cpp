#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], maxx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > maxx) maxx = a[i];
    }
    maxx++;
    int b[maxx] = {0}, c[n];
    for (int i = 0; i < n; i++) {
        b[a[i]]++;
    }
    for (int i = 1; i < maxx; i++) {
        b[i] += b[i-1];
    }
    for (int i = 0; i < n; i++) {
        b[a[i]] --;
        c[b[a[i]]] = a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << c[i] << ' ';
    }
}
