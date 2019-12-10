#include<bits/stdc++.h>

using namespace std;

int main()

{
    int T,n,k,i,ln;
    string str1[10005],str2[10005],num;

    scanf("%d",&T);

    for(i=1; i<=T; i++){
        scanf("%d",&n);
        int cnt=0,flag=0,p=0;
        for(int j=0;j<n; j++)
            cin>>str1[j];
        cin>>num;
        for(int j=0;j<n; j++){
                ln = str1[j].length();
            for(k=0; k<ln; k++){
                if(str1[j][k]!=num[k])
                    cnt++;
                if(cnt>=2){
                    flag=1;
                    break;
                }
                if(flag!=1){
                    str2[p++]=str1[j];
                }
            }
            if(flag==1)
                break;
        }

            for(int j=0; str2[j].length()<ln; j++)
                cout<<str2[j];
    }

    return 0;
}
