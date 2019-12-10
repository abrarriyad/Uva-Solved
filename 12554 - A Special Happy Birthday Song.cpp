#include<bits/stdc++.h>

using namespace std;

int main()

{
    //freopen("output.txt","w",stdout);
    vector<string>v;
    vector<string>name;


    v.push_back("Happy");
    v.push_back("birthday");
    v.push_back("to");
    v.push_back("you");
    v.push_back("Happy");
    v.push_back("birthday");
    v.push_back("to");
    v.push_back("you");
    v.push_back("Happy");
    v.push_back("birthday");
    v.push_back("to");
    v.push_back("Rujia");
    v.push_back("Happy");
    v.push_back("birthday");
    v.push_back("to");
    v.push_back("you");

    int i,j,k,n;

    scanf("%d",&n);
    string str;

    for(i=0; i<n; i++){
        cin>>str;
        //cout<<"riyad";
        name.push_back(str);
    }

    int temp = (ceil)((double)n/16);
    //cout<<temp<<endl;
    //cout<<temp<<" "<<n<<endl;
    int loop = temp*16;
    //int k;
   // cout<<loop<<endl;

    for(j=0,i=0,k=0; j<loop; j++){
        cout<<name[i]<<": "<<v[k]<<endl;
        i++;
        if(i==n)
            i=0;
        k++;
        if(k==16)
            k=0;

    }

    return 0;
}
