#include<bits/stdc++.h>

using namespace std;

int main()

{
    //freopen("out.txt","w",stdout);
    string str;
    int i,j;
    vector <int>v;

    while(cin>>str){
            v.clear();
            int sz = str.size();
            int ck=0;
        for(i=0; i<sz; i++){
            if(ck!=1 && (str[i]=='B' || str[i]=='F' || str[i]=='P' || str[i]=='V')){
                v.push_back(1);
                ck=1;
            }

            else if(ck!=2 && (str[i]=='C' || str[i]=='G' || str[i]=='J' || str[i]=='K' || str[i]=='Q' || str[i]=='S' || str[i]=='X' ||str[i]=='Z')){
                v.push_back(2);
                ck=2;
            }

            else if(ck!=3 && (str[i]=='D' || str[i]=='T')){
                v.push_back(3);
                ck=3;
            }

            else if(ck!=4 && str[i]=='L'){
                v.push_back(4);
                ck=4;
            }

            else if(ck!=5 && (str[i]=='M' || str[i]=='N')){
                v.push_back(5);
                ck=5;
            }

            else if(ck!=6 && str[i]=='R'){
                v.push_back(6);
                ck=6;
            }
            else if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='H' || str[i]=='W' ||str[i]=='Y')
                ck=0;

        }
        sz = v.size();
        for(i=0; i<sz; i++){
            printf("%d",v[i]);
        }

        printf("\n");
    }

    return 0;
}
