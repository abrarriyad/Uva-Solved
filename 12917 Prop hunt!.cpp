#include<stdio.h>

using namespace std;

int main()

{
    int a,b,c,d;

    while(scanf("%d %d %d",&a,&b,&c)==3){
        d = c-a;
        if(d<b)
            printf("Hunters win!\n");
        else
            printf("Props win!\n");
    }

    return 0;
}
