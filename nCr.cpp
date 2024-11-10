#include<bits/stdc++.h>
using namespace std;
#define mx 100
#define p 1000000007
int dp[mx][mx];
int nCr(int n, int r)
{
if(n == r) dp[n][r] = 1;
if(r == 1) dp[n][r] = n;
if(r == 0) dp[n][r] = 1;
if(dp[n][r] == -1)
dp[n][r] = (nCr(n - 1, r - 1) % p + nCr(n - 1, r) % p) % p;
return dp[n][r];
}
int main()
{
memset(dp, -1, sizeof(dp));
int n, r;
cin >> n >> r;
if(n > r)
cout << nCr(n, r);
else
cout << "Invalid Input\n";
return 0;
