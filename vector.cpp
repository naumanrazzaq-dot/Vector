#include <iostream>
#include<string>
#include <vector>
using namespace std;
int main(){

vector <int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
v.pop_back();


for(int val:v){
    cout<<val<<" ";
}
}
