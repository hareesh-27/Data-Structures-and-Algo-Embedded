#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int convert_binary_to_decimal(string n)
{
    int ans=0;
    int p2=1; //initially 2 power 0 =1
    
    for(int i= n.size()-1;i>=0;i--)
    {
        if(n[i]=='1') ans+=p2;
        p2*=2;
    }
    
    
    return ans;
}


int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
    string n="1101";
    int answer=convert_binary_to_decimal(n);
    cout<<answer;
    return 0;
}
