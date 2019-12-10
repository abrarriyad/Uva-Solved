#include<bits/stdc++.h>

using namespace std;

int main()

{
     //freopen("out.txt","w",stdout);

    int r,T,i,j;
    scanf("%d",&T);

    for(i=1; i<=T; i++){
        scanf("%d",&r);
        int len,width,len2,len3,l,width2;
        len = 5*r;
        l = (len/2)+(len%2);
        width = len*.6;
        width2 = (width/2)+(width%2);
        len2 = .45*len;
        len3 = .55*len;
        printf("Case %d:\n",i);
        printf("%d %d\n",-len2,width2);
        printf("%d %d\n",len3,width2);
        printf("%d %d\n",len3,-width2);
        printf("%d %d\n",-len2,-width2);

    }

    return 0;
}
