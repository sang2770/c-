#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int maxDistance(vector<int>v){
    unordered_map<int, int>m;
    int Max = 0;
    for (int i = 0; i < v.size(); i++){
        if (m.find(v[i]) == m.end()) {
            m[v[i]] = i;
        }
        else {
            Max = max(Max, i - m[v[i]]);
        }
    }
    return Max;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    vector<int>v(s.size() + 1, 0);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'D') {
            v[i + 1] = v[i] + 1;
        }
        else {
            v[i + 1] = v[i] - 1;
        }
    }
//    cout << maxDistance(v);
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
   return 0;
}
