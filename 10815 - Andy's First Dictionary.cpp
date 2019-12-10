#include<bits/stdc++.h>

using namespace std;

int main()

{
    freopen("out.txt","w",stdout);
    set<string>st;
    int n,i,j;
    string str,word;

    while(getline(cin,str)){
    transform(str.begin(),str.end(),str.begin(),::tolower);
    stringstream ss;

    ss<<str;
    i=0;
    j=0;

    while(ss>>word){
            string abc;
            for(i=0; word[i]!='\0'; i++){
        if(word[i]<'a' || word[i]>'z')
            continue;
        else
            abc+=word[i];

            }
        st.insert(abc);
    }

    set<string>::iterator it;
    for(it=st.begin(); it!=st.end(); it++){
        cout<<*it<<endl;
    }
    }
    return 0;
}
