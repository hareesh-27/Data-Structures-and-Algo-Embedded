#include<bits/stdc++.h>
#include <iostream>
using namespace std;
string convert_decimal_to_binary(int n)
{
    string ans="";
    while(n>0)
    {
        if(n%2==1) ans+='1';
        else ans+='0';
        n=n/2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}


int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
    int n=13;
    string answer=convert_decimal_to_binary(n);
    cout<<answer;
    return 0;
}
