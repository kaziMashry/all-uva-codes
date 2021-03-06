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
    long long int N,n[1010],i,j,temp,count;
    while(cin>>N) {
        count=0;
        for(i=0; i<N; i++)
            scanf("%lld",&n[i]);
        for(i=0; i<N; i++) {
            for(j=0; j<N-1; j++) {
                if(n[j]>n[j+1]) {
                    temp=n[j];
                    n[j]=n[j+1];
                    n[j+1]=temp;
                    count++;
                }
            }
        }
        printf("Minimum exchange operations : %lld\n",count);
    }
    return 0;
}
