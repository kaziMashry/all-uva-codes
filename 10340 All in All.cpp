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

bool func(string& seq, string& text) {
    int lenSeq=seq.length(),cnt=lenSeq;
    int lenTxt=text.length(),q=0;
    for(int i=0; i<lenSeq; ++i) {
        for(int j=q; j<lenTxt; ++j) {
            if(text[j]==seq[i]) {
                --cnt;
                q=j+1;
                break;
            }
        }
        if(q==lenTxt) break;
    }
    if(!cnt) return 1;
    return 0;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string input;
    while(getline(cin,input)) {
        string sequence,text;
        stringstream str;
        str<<input;
        str>>sequence;
        str>>text;
        if(func(sequence,text)) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
