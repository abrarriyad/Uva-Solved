#include<bits/stdc++.h>

using namespace std;

int frequen(char ch, string str, int ln)
{
    int cnt=0;
    for(int i=0; i<ln; i++){
        if(str[i]==ch)
            cnt++;
    }
    return cnt;
}

int main()

{
   // freopen("output.txt","w",stdout);
    string str;
    set<int>st;
    set<int>st2;
    //set<int> iterator::it;
    int i,j,n,T,len,cool,k=1,sz1,sz2;

    while(scanf("%d",&T)==1){
    cool=0;
    for(i=1; i<=T; i++){

        cin>>str;
        len = str.length();
        st.clear();
        st2.clear();
        for(j=0; j<len; j++){
                st2.insert(str[j]);
            st.insert(frequen(str[j],str,len));
        }
         sz1 = st.size();
         sz2 = st2.size();
         if(sz2>1 && sz1==sz2)
            cool++;
    }

    printf("Case %d: %d\n",k,cool);
    k++;
    cool=0;
    sz1=0,sz2=0;
    }

    return 0;
}
