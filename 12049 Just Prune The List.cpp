#include<bits/stdc++.h>

using namespace std;

int main()

{
    //freopen("output.txt","w",stdout);
    int arr1[10005],arr2[10005],i,j,m,n,cnt,T;

    scanf("%d",&T);

    while(T--){
        scanf("%d%d",&m,&n);

        for(i=0;i<m; i++)
            scanf("%d",&arr1[i]);
            //cout<<m<<" "<<n<<endl;
        for(i=0; i<n; i++)
            scanf("%d",&arr2[i]);

        sort(arr1,arr1+m);
        sort(arr2,arr2+n);

        cnt=0;

        for(i=0,j=0; i<m && j<n;){
            if(arr1[i]==arr2[j]){
                i++;
                j++;
            }
            else{
                    //cout<<i<<" "<<j<<endl;
                cnt++;
                if(arr1[i]>arr2[j])
                    j++;
                else
                    i++;
            }
        }
        if(j<n)
            cnt+=(n-j);
        else if(i<m)
            cnt+=(m-i);
    printf("%d\n",cnt);
    }


    return 0;
}
