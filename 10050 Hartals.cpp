#include<bits/stdc++.h>

using namespace std;
int cnt,arr[200],vis[40000];

void visited(int p,int n)
{
    for(int i=1; i<=n; i++){
            if(i%7==0 || i%7==6)
            vis[i]=1;

        if(i%p==0 && vis[i]==0){
            cnt++;
            vis[i]=1;
            //cout<<"cnt"<<cnt<<" "<<endl;
        }
        //printf("visited \n");
    }

}

int main()

{
   // freopen("out.txt","w",stdout);
    int T,n,p,i,j,a;

    scanf("%d",&T);

    while(T--){
        scanf("%d",&n);
        scanf("%d",&p);
        //int cnt=0;
        memset(arr,0,sizeof(arr));
        memset(vis,0,sizeof(vis));
        for(i=7; i<=n; i+=7){
            vis[i]=1;
            vis[i-1]=1;
        }

        for(i=0; i<p; i++){
            scanf("%d",&arr[i]);
            visited(arr[i],n);
        }

        printf("%d\n",cnt);
        cnt=0;
    }

    return 0;
}
