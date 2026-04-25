#include <iostream>
using namespace std;
void setbit(int num,int i)
{
    num = num | (1<<i);
    cout<<num;
}


int main() {
    
    int num=13; //1101
    int i=1;//set 1st bit
    setbit(num,i);
    
    return 0;
}
