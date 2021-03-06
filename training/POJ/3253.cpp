#include <cctype>
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <complex>
#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <utility>
#include <bitset>

#define IOS std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
// #define __DEBUG__
#ifdef __DEBUG__
    #define DEBUG(...) printf(__VA_ARGS__)
#else
    #define DEBUG(...)
#endif    
#define filename ""
#define setfile() freopen(filename".in", "r", stdin); freopen(filename".out", "w", stdout);

using namespace std;

typedef long l;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned long ul;
typedef long double ld;
typedef pair<int, int > Pii;

const double pi = acos(-1.0);
const int INF = INT_MAX;
const int MAX_N = 20000 + 5;

template <typename T>
inline T sqr(T a) { return a * a;};

int N;
priority_queue<int, vector<int>, greater<int> > q;

void solve() {
    ll ans = 0;
    while (q.size() > 1) {
        int t = 0;
        t += q.top(); q.pop();
        t += q.top(); q.pop();  
        q.push(t);
        ans += t;
    }
    cout << ans << endl;
}
int main(int argc, char const *argv[])
{
    cin >> N;
    for (int i = 0, x; i < N; ++i)
        cin >> x, q.push(x);    
    solve();
    return 0;
}