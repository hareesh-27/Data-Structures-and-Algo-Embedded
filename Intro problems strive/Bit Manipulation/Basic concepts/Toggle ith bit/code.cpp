#include <iostream>
using namespace std;
void toggle(int num,int i)
{
    num = num ^ (1<<i);  //1101 ^ 0100 = 1001
    cout<<num;
}


int main() {
    
    int num=13; //1101
    int i=2;//toggle 2nd bit
    toggle(num,i);
    
    return 0;
}
