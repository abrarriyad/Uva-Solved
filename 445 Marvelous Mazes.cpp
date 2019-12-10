#include<bits/stdc++.h>

using namespace std;

int main()

{
    int loop,ck;
    string ch;
    vector<string>v;
    string str;

    getline(cin,str);
    ck=0;
    int ln = str.length();
    for(int i=0; i<ln; i+=2){
        if(str[i]>='49' && str[i]<='57'){
            loop = str[i]-'0';
        }
        if(str[i+1]>='49' && str[i+1]<='57'){
            loop+= str[i]-'0';
        }
        if(str[i+1]<'49' || str[i+1]>'57')
            ch = str[i+1];
        for(int j=0; j<loop; j++){
                if(ch=="b")
                    v.push_back(" ");
        else
            v.push_back(ch);
        }
        cout<<loop<<endl;
    }
  //  for(int k=0; k<v.size(); k++)
    //    cout<<v[k];

    return 0;
}
