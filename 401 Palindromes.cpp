#include<bits/stdc++.h>

using namespace std;
int ck;
bool palindrome(string str)
{
    int ln;
    ln = str.length();
    for(int i=0; i<ln; i++){
        for(int j=ln-1; j>=0; j--){
            if(str[i]!=str[j]){
                return false;
                break;
            }
        }
    }
    return true;
}

bool mirror(string str)
{
    int ln;
    ck=0;
    int lop;
    ln = str.length();
    if(ln%2!=0)
        lop=ln+1;
    else
        lop = ln;
    for(int i=0,j=ln-1; i<lop; i++,j--){
        if((str[i]=='A' && str[j]!='A') || (str[i]=='E' && str[j]!='3')|| (str[i]=='H' && str[j]!='H')||(str[i]=='I' && str[j]!='I')||(str[i]=='L' && str[j]!='J')||(str[i]=='J' && str[j]!='L')||(str[i]=='M' && str[j]!='M')||(str[i]=='O' && str[j]!='O')||(str[i]=='S' && str[j]!='2')||(str[i]=='T' && str[j]!='T')||(str[i]='U' && str[j]!='U')||(str[i]=='V' && str[j]!='V')||(str[i]=='W' && str[j]!='W')||(str[i]=='X' && str[j]!='X')||(str[i]=='Y' && str[j]!='Y')|(str[i]=='Z' && str[j]!='5')||(str[i]=='1' && str[j]!='1')||(str[i]='2' && str[j]!='S')||(str[i]=='3' && str[j]!='E')||(str[i]=='5' && str[j]!='Z')||(str[i]=='8' && str[j]!='8'))
           return false;
    }
     return true;
}

int main()

{
    string str;
    int p,m;

    while(getline(cin,str)){
            p = palindrome(str);
            m = mirror(str);
    //cout<<p<<" "<<m<<" "<<endl;
        if(p==0 && m==0)
           cout<<str<<" -- is not a palindrome."<<endl;
        else if(p==1 && m==0)
            cout<<str<<" -- is a regular palindrome."<<endl;
        else if(p==0 && m==1)
            cout<<str<<" -- is a mirrored string."<<endl;
        else if(p==1 && m==1)
            cout<<str<<" -- is a mirrored palindrome."<<endl;

    }

    return 0;
}

