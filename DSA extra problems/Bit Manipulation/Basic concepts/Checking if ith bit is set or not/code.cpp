#include <iostream>
using namespace std;
int leftshift(int num,int i)
{
    if((num && 1<<i) != 0) return 1;
    return 0;
}

int rightshift(int num ,int i)
{
    if((num>>i && 1) !=0) return 1;
    else return 0;
}


int main() {
    
    int num=13; //1101
    int i=2;//check whether 2nd bit is set or not
    int l=leftshift(num,i);
    int r=rightshift(num,i);
    
    cout<<l<<"\n"<<r;
    
    
    return 0;
}
