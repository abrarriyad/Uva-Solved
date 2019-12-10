#include<bits/stdc++.h>

using namespace std;

int main()

{
    double a,b,temp,res;

    while(scanf("%lf %lf",&a,&b)==2){
        temp = b-a;
        res = (ceil)(b/temp);
        printf("%d\n",(int)res);
    }

    return 0;
}
