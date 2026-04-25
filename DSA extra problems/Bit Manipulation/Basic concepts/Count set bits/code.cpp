#include <iostream>
using namespace std;
void countsetbits(int num)
{
    int cnt=0;
    
    while(num>0)
    {
        if((num%2) == 1) cnt+=1;
        num=num/2;
    }
    if(num==1) cnt++;
    cout<<cnt;
    
}


int main() {
    
    int num=15; //1111
    countsetbits(num);
    
    return 0;
}
