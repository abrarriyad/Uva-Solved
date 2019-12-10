#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,j,day,pass,fail;
    double H,U,D,F,fatigue,init,climed,height_init,height_last;


    while(scanf("%lf %lf %lf %lf",&H, &U, &D, &F)){
            init = 0.0;
        height_last=0.0;
        pass=0,fail=0;
        day=0;
        fatigue = (double)F/10.0;

        while(1){
        init =  height_last;
        climed = U;
        if(climed>0)
            day++;
        else
            continue;

        height_init = init+climed;

        if(height_init>=H){
            pass=1;
            break;
        }
        height_last = height_init-D;
        printf("%d\n",height_last);
        if(height_last<0){
            fail=1;
            break;
        }
        U*=F;
        }
        if(pass==1)
            printf("success on day %d\n",day);
        else if(fail==1)
            printf("failure on day %d\n",day);
    }

    return 0;
}
