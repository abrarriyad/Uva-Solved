#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a,b,c;


    while(scanf("%d %d %d",&a,&b,&c)==3){
            char res;
        if(a==b && b==c && c==a)
            res = '*';
        else if(a==b)
            res= 'C';
        else if(c==a)
            res = 'B';
        else if(b==c)
            res = 'A';

        //printf("a== %d b== %d c==%d\n",a,b,c);
        printf("%c\n",res);
        a=0,b=0,c=0;
    }

    return 0;
}
