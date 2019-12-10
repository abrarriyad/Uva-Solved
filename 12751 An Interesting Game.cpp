#include<bits/stdc++.h>

using namespace std;

int main()

{
    int T,n,k,x,i,p,sum;

    scanf("%d",&T);

    for(i=1; i<=T; i++){
            int arr[100005];
        scanf("%d %d %d",&n, &k, &x);
        sum=0;
        for(int j=1,p=0; j<=n; j++){
            sum+=j;
            arr[p++]=j;
        }
       // cout<<sum<<endl;
        for(int j=x-1; k!=0; j++){
            sum-=arr[j];
            k--;
        }
        printf("Case %d: %d\n",i,sum);
    }

    return 0;
}
