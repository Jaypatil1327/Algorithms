#include <bits/stdc++.h>

using namespace std;


vector<list<int>> graph ; 
unordered_set<int> s ; 

bool dfs(int st, int ed) {
    if (st == ed) return true;
    s.insert(st);

    for (auto ele : graph[st]) {
        if (s.find(ele) != s.end()) continue;
        if (dfs(ele, ed)) return true ;
    }
    
    return false;
}

bool check(int st , int ed) {
    return dfs(st , ed) ; 
}


int main() {
       
    return 0;
}
