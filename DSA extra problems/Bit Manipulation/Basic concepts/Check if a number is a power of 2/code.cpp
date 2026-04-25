#include <iostream>
using namespace std;
void checkpowerof2(int num)
{
    /* 16 = 10000
       15 = 01111
       
       16 & 15 = 0000 */
    if((num & (num-1)) == 0) cout<<"Yes  "<<num<<" is a power of 2";
    else cout<<"No";
    //cout<<num;
}


int main() {
    
    int num=16; //10000
    checkpowerof2(num);
    
    return 0;
}
