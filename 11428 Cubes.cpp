#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,x,y,z,flag;

    while(scanf("%d",&n)==1 && n){
            flag=0;
        for(int i=0; i<60; i++){
            for(int j=0; j<=i; j++){
                x= i;
                y = j;
               z =  (x*x*x)-(y*y*y) ;
               if(n==z){
                flag=1;
                break;
               }
            }
            if(flag==1)
                break;
        }
        if(flag==1)
            printf("%d %d\n",x,y);
        else
            printf("No solution\n");
    }

    return 0;
}
