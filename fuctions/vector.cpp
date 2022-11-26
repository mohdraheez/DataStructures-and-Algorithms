#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> num;
    vector<char> c;
    vector<char> d;
    d.push_back('c');
    d.push_back('d');
    num.push_back(10);
    num.push_back(40);
    c.push_back('a');
    c.push_back('b');
    num[0] = 20;
    cout<<*num.begin();
    cout<<*(num.end()-1);
    cout<<num.at(0);
    num.insert(num.begin()+2,100);
    c.swap(d);
    cout<<num.back()<<endl;
    cout<<c.front()<<endl;
    cout<<c.back()<<endl;

}