#include<bits/stdc++.h>

using namespace std;

int main()

{
    freopen("output.txt","w",stdout);
    int n,d,r,mx1,mx2,num,res,day,night;

    while(scanf("%d %d %d",&n,&d,&r)){
            if(n==0 && d==0 && r==0)
            break;
            mx1=0,mx2=0;
        for(int i=0; i<n; i++){
                scanf("%d",&num);
            mx1 = max(mx1,num);
        }
        //day = (d-mx)*r;
        //mx=0;
        for(int i=0; i<n; i++){
                scanf("%d",&num);
            mx2 = max(mx2,num);
        }
        int mx = mx1+mx2;
        res =0;
        if(mx>d)
        res = (mx-d)*r;

        printf("%d\n",res);
    }

    return 0;
}
