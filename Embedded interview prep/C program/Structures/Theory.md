**What is Structure?** 
A structure is the user-defined data type in C++. Structure creates the data type which can hold the multiple data types.

Declaring Structure Variables :

Structure variables can be declared in two different ways :
**Declared while declaring the structure**

struct point
{
    int x;
    int y;
} p1, p2;

In the above struct declaration, the point is the name of the structure. p1,p2 are the variables of the type struct point. 
Here variables p1, and p2 are declared while structure declaration itself.

A declaration like Basic Data types:

struct point
{
    int x;
    int y;
};

int main()
{
    struct point p1, p2;
} 
In the above Code, p1, and p2 are the struct variables. They are not declared while structure declaration. They are declared after structure declaration.

**Padding in structures**
Extra unused bytes inserted by the compiler between (or after) structure members to ensure proper memory alignment for efficient access.

**The diff bw structure and union is the memory** - In structure each members have seperate memory while in union its a shared memory. So oveeride is possible

