/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const int MAX = 2003;

ll func(ll n) {
    if(n) return (n*n*n)+func(n-1);
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,sum;
    while(cin>>n) {
        sum=func(n);
        cout<<sum<<el;
    }
    return 0;
}
