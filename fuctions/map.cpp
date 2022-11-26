#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int , char> dict;
    dict[1] = 'a';
    dict[10] = 'b';
    dict[1] = 'c';

    map<char,int> dict2;
    dict2['a'] = 0;

    cout<<++dict2['a'];
    
    
    return 0;
}