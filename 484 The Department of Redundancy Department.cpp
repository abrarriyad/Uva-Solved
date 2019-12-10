#include<bits/stdc++.h>

using namespace std;

int main()

{
   //freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);

    map<long,long>mp;
    map<long,long>m;

    vector<int>v;
    int a;
    while(cin>>a){
        if(m[a]!=1){
            m[a]=1;
            mp[a]++;
            v.push_back(a);
        }
        else
            mp[a]++;

    }
    int ln = v.size();

    for(int i=0; i<ln; i++){
        cout<<v[i]<<" "<<mp[v[i]]<<endl;
    }

    return 0;
}
