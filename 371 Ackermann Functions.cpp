#include<bits/stdc++.h>

using namespace std;
long int cnt,ck;

long long int acer(long long int num)
{

    if(num==1 && ck!=0)
        return cnt;
    if(num%2==0){
            cnt++;
            ck=1;
       return acer(num/2);
    }

    else if(num%2!=0){
            ck=1;
            cnt++;
        return acer(3*num+1);
    }


}

int main()

{
    //freopen("out.txt","w",stdout);
    long long int high,low,res,num,tm;

    while(scanf("%lld%lld",&low,&high)){
            if(low==0 || high==0)
                break;
    if(low>high){
        tm = low;
        low = high;
        high = tm;
    }
   // cout<<low<<" "<<high<<endl;
    //printf("%ld\n",acer(n));
    res=0;
    ck=0;
    for(long long int i=low; i<=high; i++){
        long long int temp = acer(i);
       cnt=0;
       //cout<<"Temp "<<temp<<endl;
       // num=i;
        //printf("%ld\n",temp);
        if(temp>res){
            res = temp;
            num = i;
        }
    }
    printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",low,high,num,res);
    num=0;
    res=0;

    }
    return 0;
}
