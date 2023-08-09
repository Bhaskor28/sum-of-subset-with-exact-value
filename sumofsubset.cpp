#include<bits/stdc++.h>
using namespace std;

int x[1000]={0};



void sumofsub(int s,int k,int r,int w[],int m){
        //k=k-1;
    x[k]=1;
    if(s+w[k]==m)
    {
        for(int i=0;i<=k;i++){
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }
    else if(s+w[k]+w[k+1]<=m)
        sumofsub(s+w[k],k+1,r-w[k],w,m);
    if((s+r-w[k]>=m) && (s+w[k+1]<=m)){
        x[k]=0;
        sumofsub(s,k+1,r-w[k],w,m);
    }

}






int main(){

int n,m;
cin>>n>>m;
int w[n];
int s=0,k=0,r=0;

for(int i=0;i<n;i++){
    cin>>w[i];
    r+=w[i];

}


sumofsub(s,k,r,w,m);


return 0;
}


/*
7 10
2 3 4 5 6 5 5





*/
