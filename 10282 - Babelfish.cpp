#include<bits/stdc++.h>

using namespace std;

int main()

{
   // freopen("out.txt","w",stdout);
    map <string,string>mp;
    map <string,string>::iterator it;

    string str,s1,s2;

    while(getline(cin,str),str.size()){
            stringstream ss;
            ss<<str;
            ss>>s1>>s2;
            mp[s2]=s1;
    }


    while(cin>>s1){

        if(mp.count(s1)>0)
            cout<<mp[s1]<<endl;
        else
            cout<<"eh"<<endl;
    }



    return 0;
}
