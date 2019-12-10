#include<bits/stdc++.h>

using namespace std;
map<char,int>mp;

int main()

{
   // freopen("out.txt","w",stdout);

    int n,i,j,ck=0,ln=0,c=0,sz=0;

    while(scanf("%d",&n)==1){
            //mp.clear();
    if(n==-1)
        break;
    string str,str2;
    cin>>str;
    set<char>st;
    set<char>::iterator it;
    for(i=0; str[i]!='\0'; i++){
            st.insert(str[i]);
    }

    /*
    for(it=st.begin(); it!=st.end(); it++){
        mp[*it]++;
    }
    */
    cin>>str2;

    int arr[10000];

    for(int k=0; k<1000; k++)
        arr[k]=0;

       for(i=0; str2[i]!='\0'; i++){
            c=0;
            if(arr[str2[i]-'a']==0){
                    for(int j=0; str[j]!='\0'; j++){
                        if(str2[i]==str[j])
                        {
                            c=1; //found
                            ln++;
                            st.erase(str[j]);
                            break;
                        }

                    }

        if(c==0 && st.size()!=0)
            ck++;
        //not found
       // it = st.find(str[i]);
        //st.erase(*it);
        //if(*it<='a'|| *it>='z')
          //  ck++; //not found
        arr[str2[i]-'a']++;
            }
        else
            continue;
             //found
  //      ln++;
    //cout<<"ck=="<<" "<<ck<<" ";
    //map<char,int>::iterator it
 // cout<<mp[str[i]]<<" ";
 //cout<<str[i]<<" ";
    }
    //cout<<ck<<" "<<c<<endl;

     sz = st.size();
    st.clear();
    //cout<<ck<<" "<<sz<<" "<<ln<<" "<<c<<" ";
    printf("Round %d\n",n);

        if(ck>=7)
        printf("You lose.\n");
        else if(sz==0)
        printf("You win.\n");


    else if(ck<7 && sz!=0)
        printf("You chickened out.\n");

        ck=0,ln=0,c=0;
        st.clear();
    }
    return 0;
}
