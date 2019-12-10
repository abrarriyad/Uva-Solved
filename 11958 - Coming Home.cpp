#include<bits/stdc++.h>

using namespace std;

int main()

{
    // freopen("out.txt","w",stdout);

    int num,sum,T,h1,h2,m1,m2,time,h,m,res=100000000;

    scanf("%d",&T);

    for(int k=1; k<=T; k++){
        scanf("%d %d:%d",&num,&h1,&m1);
        for(int i=1; i<=num; i++){
                sum=0;
            scanf("%d:%d %d",&h2,&m2,&time);
            if(h2<12)
                h2+=24;
            if(m1!=0)
                h1++;

            h = abs(h2-h1)*60;
            m = (60-m1)+m2;

            sum = h+m+time;
            if(sum<res)
                res = sum;
            cout<<res<<" ";
        }
        printf("Case %d: %d\n",k,res);
        res=100000000;
    }

    return 0;
}
