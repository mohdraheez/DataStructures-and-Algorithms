#include<iostream>
#include<string>
using namespace std;

char ans[100];
string pat,rep,str;
int s=0,a=0,p=0,r=0,t=0,flag=0;

void patternmatching(){
    while(str[s]!=NULL){
        if(str[s]==pat[p]){
            s++;
            p++;

            if(pat[p]==NULL){
                for(r=0;rep[r]!=NULL;r++){
                    ans[a++]=rep[r];
                    t=s;
                    flag=1;
                }
            }
        }
        else{
            ans[a++]=str[t];
            t++;
            s=t;
            p=0;
        }
    }

    if(flag==1){

        cout<<"answer string is "<<ans<<endl;
    }
    else{
        cout<<"pattern didnt match"<<endl;
    }
}

int main(){
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    cout<<"Enter the pattern string"<<endl;
    getline(cin,pat);
    cout<<"Enter the replacement string"<<endl;
    getline(cin,rep);
    patternmatching();
}