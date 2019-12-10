#include<bits/stdc++.h>

using namespace std;

int main()

{
    string str1,str2;
    freopen("out.txt","w",stdout);
    while(getline(cin,str1)){
          getline(cin,str2);

    int ln1= str1.size();
    int ln2= str2.size();
    string str3,str4;
    int a=1,b=0,ck=0,c=1;
    for(int i=0; i<ln1; i++){
        str3[0]=str1[0];
        if(str1[i]==' '){
            ck=1;
            c++;
            continue;
        }
        if(ck==1){
            str3[a++]=str1[i];
            ck=0;
        }
    }

    ck=0;
   int j=1;
    int cnt=0;
    for(int i=0; i<ln2; i++){
        if(str2[0]==str3[0] && i==0)
            cnt++;
        if(str2[i]==' '){
            ck=1;
            continue;
        }

        if(ck==1){
            if(str2[i]==str3[j++])
                cnt++;
            ck=0;
        }
    }
   // cout<<cnt<<" "<<c<<endl;
    if(c==cnt)
        printf("yes\n");
    else
        printf("no\n");
    }
    return 0;
}
