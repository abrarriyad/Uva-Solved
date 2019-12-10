#include<bits/stdc++.h>

using namespace std;

int main()

{
    //freopen("output.txt","w",stdout);
    long long first=0,second=1,res,n,fib,third,i;

    while(1){
            scanf("%lld",&n);
        if(n==0)
            break;

            first=0,second=1;
        for(i=1; i<=n; i++){

            third = first+second;
            first = second;
            second = third;
        }
        //fib(n);
        printf("%lld\n",third);
    }

    return 0;
}
