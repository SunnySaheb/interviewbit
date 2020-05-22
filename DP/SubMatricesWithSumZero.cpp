
/*

                Name: Mehul Chaturvedi
                IIT-Guwahati

*/

/*
                PROBLEM STATEMENT

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unordered_map<int, int> umapii;
typedef unordered_map<int, bool> umapib;
typedef unordered_map<string, int> umapsi;
typedef unordered_map<string, string> umapss;
typedef map<string, int> mapsi;
typedef map<pair<int, int>, int> mappiii;
typedef map<int, int> mapii;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef unordered_set<int> useti;

#define debug(x) cout << '>' << #x << ':' << x << endl;
#define uset unordered_set
#define it iterator
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define f first
#define s second

#define INF 4557430888798830399ll
#define MOD 1000000007
#define EPS 1e-7
#define PI acos(-1)


#define sz(x) (int)(x).size()
 
#define fr(i, a, b) for (int i = (a), _b = (b); i <= _b; i++)
#define rep(i, n) for (int i = 0, _n = (n); i < _n; i++)
#define repr(i, n) for (int i = n - 1; i >= 0; i--)
#define frr(i, a, b) for (int i = (a), _b = (b); i >= _b; i--)
#define trav(a, x) for(auto& a : x)
#define fil(ar, val) memset(ar, val, sizeof(ar))  // 0x3f for inf, 0x80 for -INF can also use with pairs

int Solution::solve(vector<vector<int> > &A) {
	vector<vector<int>> dp = A;
	int n = A.size();
	if (n==0) return 0;
	int m = A[0].size();
	if(m==0)return 0;

	fr(i, 1, n-1){
		dp[i][0] += dp[i-1][0];
	}
	fr(i, 1, m-1){
		dp[0][i] += dp[0][i-1];
	}

	fr(i, 1, n-1){
		fr(j, 1, m-1){
			dp[i][j] += dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
		}
	}

	rep(i, n){
		rep(j,m){
			cout << dp[i][j] << " \n"[j==m-1];
		}
	}
	
	return 0;
}
