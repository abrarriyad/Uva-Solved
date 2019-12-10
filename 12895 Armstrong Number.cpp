#include<bits/stdc++.h>

using namespace std;

int main()

{
    int T;
    long long n,sum,i,temp;

    scanf("%d",&T);

    while(T--){

        scanf("%lld",&n);

        temp = n;
        sum=0;
        int flag=0;

        for(i=1; n>=1; i++){
            int rem = n%10;
            sum+=rem*rem*rem;
            //cout<<"sum== "<<sum<<" ";
            if(sum>temp){
                flag=1;
                break;
            }
            n/=10;
           // cout<<n<<endl;
        }

        if(sum==temp)
            printf("Armstrong\n");
        else
            printf("Not Armstrong\n");
    }

    return 0;
}
