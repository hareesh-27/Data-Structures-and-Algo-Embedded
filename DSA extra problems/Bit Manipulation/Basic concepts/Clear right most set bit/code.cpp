#include <iostream>
using namespace std;
void clearrightmostsetbit(int num)
{
    num = num & (num-1);  // 40 = 1011000   39 = 100111 Right most set bit changes to 0 and everything right to it turns 1
    cout<<num;
}


int main() {
    
    int num=40; //101000
    clearrightmostsetbit(num);
    
    return 0;
}
