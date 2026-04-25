#include <iostream>
using namespace std;
void clearbit(int num,int i)
{
    num = num & ~(1<<i);  //~(1<<2) ~0100 = 1011
    cout<<num;
}


int main() {
    
    int num=13; //1101
    int i=2;//set 1st bit
    clearbit(num,i);
    
    return 0;
}
