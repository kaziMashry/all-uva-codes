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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int g,m,f,ft,t;
    while(cin>>g) {
        if(g==0) break;
        else {
            m=1;
            f=0;
            for(ll i=2; i<=g; i++) {
                ft=f;
                f=m;
                m=m+ft;
            }
            t=m+f;
            cout<<t<<el;
        }
    }
    return 0;
}
