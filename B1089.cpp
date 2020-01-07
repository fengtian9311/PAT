#include <bits/stdc++.h>
using namespace std;
int says[105];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)   cin >> says[i];
    for (int i = 1; i <= n ; i++) {
        for (int j = i + 1; j <= n ; j++) {
            vector<int> role(105, 1), lie;
            role[i] = role[j] = -1;
            for (int k = 1; k <= n; k++)
                if (says[k] * role[abs(says[k])] < 0)  lie.push_back(k);
            if (lie.size() == 2 && role[lie[0]] + role[lie[1]] == 0) {
                cout <<i << ' ' << j;
                return 0;
            }
        }
    }
    cout << "No Solution";
    return 0;
}