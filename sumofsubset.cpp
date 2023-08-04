// Bhaskor Roy
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()

#define            pb                push_back
#define          sz(a)               (int)a.size()
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int w[6]={5,10,12,13,15,18};
int m=30;
int x[6];
void display(int k){
    for(int i=0;i<6;i++){
        cout<<x[i]<<" ";
    }

cout<<endl;
}

sumofsub(int s,int k,int r){
    x[k]=1;
        if(s+w[k]==m){
            display(k);

        }
        else if((s+w[k]+w[k+1])<=m)
            sumofsub(s+w[k],k+1,r-w[k]);

        if(s+r-w[k]>=m && s+w[k+1]<=m){
            x[k]=0;
            sumofsub(s,k+1,r-w[k]);

}


}


int main(){

int n=sizeof(w)/sizeof(w[0]);
int r=0;
for(int i=0;i<n;i++){
    r+=w[i];
}
cout<<r<<endl;
int k=0;
int s=0;
sumofsub(s,k,r);



return 0;
}
