#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    vector<int> r_idx;
    vector<int> g_idx;
    vector<int> b_idx;
    cin >> N >> S;

    int ans = 0;

    for (int i = 0; i < N; i ++) {
        if (S.at(i) == 'R') {
            r_idx.push_back(i+1);
        }else if (S.at(i) == 'G') {
            g_idx.push_back(i+1);
        }else{
            b_idx.push_back(i+1);
        }
    }

    for (int r: r_idx) {
        for (int g: g_idx) {
            for (int b: b_idx) {
                set<int> idx_set{r, g, b};
                vector<int> idx_vec(idx_set.begin(), idx_set.end());
                if ((idx_vec.at(1) - idx_vec.at(0)) != (idx_vec.at(2) - idx_vec.at(1))) {
                    ans += 1;
                }
            }
        }
    }

    cout << ans << endl;

}
