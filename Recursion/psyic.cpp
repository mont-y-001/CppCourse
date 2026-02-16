#include <bits/stdc++.h>
using namespace std;

static const long long MOD=998244353;

long long modexp(long long a,long long e){
    long long r=1;
    while(e){
        if(e&1) r=r*a%MOD;
        a=a*a%MOD;
        e>>=1;
    }
    return r;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N,K;
    cin>>N>>K;

    // factorials
    vector<long long> fact(N+1,1);
    for(int i=1;i<=N;i++) fact[i]=fact[i-1]*i%MOD;

    long long inv2=(MOD+1)/2;
    long long inv4=modexp(4,MOD-2);

    long long base=( (N-1)*(N-2)%MOD * inv4 )%MOD;

    for(long long a=1;a<=N;a++){
        long long term=base;

        term=(term + (a-1)%MOD*(N-K)%MOD*inv2)%MOD;
        term=(term + (N-a)%MOD*(K-1)%MOD*inv2)%MOD;

        long long ans=fact[N-1]*term%MOD;
        cout<<ans<<"\n";
    }
}
