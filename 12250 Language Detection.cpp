#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[14];
    int cas=1;
    while(1){
        cin>>str;
        if(str[0]=='#')
            break;
        if(strcmp(str,"HELLO")==0)
            cout<<"Case "<<cas++<<": ENGLISH"<<endl;
        else if(strcmp(str,"HOLA")==0)
            cout<<"Case "<<cas++<<": SPANISH"<<endl;
        else if(strcmp(str,"HALLO")==0)
            cout<<"Case "<<cas++<<": GERMAN"<<endl;
        else if(strcmp(str,"BONJOUR")==0)
            cout<<"Case "<<cas++<<": FRENCH"<<endl;
        else if(strcmp(str,"CIAO")==0)
            cout<<"Case "<<cas++<<": ITALIAN"<<endl;
        else if(strcmp(str,"ZDRAVSTVUJTE")==0)
            cout<<"Case "<<cas++<<": RUSSIAN"<<endl;
        else
            cout<<"Case "<<cas++<<": UNKNOWN"<<endl;
    }
    return 0;
}

