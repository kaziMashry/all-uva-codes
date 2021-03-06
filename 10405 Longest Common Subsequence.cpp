#include<bits/stdc++.h>
using namespace std;
#define el '\n'

string X,Y;

int longestCommonSubsequence() {
    const int m=X.size();
    const int n=Y.size();
    int L[m+1][n+1];
    int i,j;

    for (i=0; i<=m; i++) {
        for (j=0; j<=n; j++) {
            if (i == 0 || j == 0) L[i][j] = 0;
            else if (X[i-1] == Y[j-1]) L[i][j] = L[i-1][j-1] + 1;
            else L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }

    X.clear();
    Y.clear();
    return L[m][n];
}

int main() {
    while(cin>>X>>Y) printf("%d\n",longestCommonSubsequence());
    return 0;
}
