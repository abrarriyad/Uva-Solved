#include<bits/stdc++.h>

using namespace std;

int main()

{
    int num,T,i,res,j=1;

    while(scanf("%d",&num)==1 && num>0){

            res=0;

        //scanf("%d",&num);
        if(num==1)
            res=0;
        else{
            for(i=0; i<num; i++){
                if(pow(2,i)>=num){
                    res = i;
                    break;
                }
            }
        }
    printf("Case %d: %d\n",j++,res);
    }

    return 0;
}
