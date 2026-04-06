Volatile keyword tells the computer to check the value of a variable directly from the memory.
For ex: int x = 10; Without volatile, the data is stored in a register (present in CPU) for faster access. The computer does'nt check the value of x from the memory.
(The computer caches it).

With volatile int x = 10, the value is checked everytime from the memory because it may change.

In a normal program, the only thing that can change x is something like x = 20; But in Embedded systems, something external
like camera hardware/a sensor can change it. SInce the computers register doesnt know this, it keeps showing the wrong value.

volatile forces the CPU to fetch the value from the actual memory address every time, ensuring we always have the most recent data from the device.

int x = 0;
while (x == 0) { 
    // The compiler 'caches' x in a register.
    // It assumes x will always be 0 because nothing 
    // inside this loop changes it.
}

🔹 Case 1
volatile int *x = 0;
✅ Meaning:
👉 Pointer to a volatile int

Data (*x) is volatile
Pointer (x) is normal

🔹 What it means:
Value at address can change anytime
Compiler won’t optimize reads of *x

✔️ You can change x normally
✔️ Must always re-read *x
---------------------------------------------------------------------------
🔹 Case 2
int *volatile x = 0;
✅ Meaning:
👉 Volatile pointer to int

Data is normal
Pointer (x) is volatile
🔹 What it means:
Address stored in x may change unexpectedly
Compiler won’t optimize x

✔️ *x is stable
✔️ x itself can change anytime
---------------------------------------------------------------------------
🔹 Case 3
volatile int *volatile x = 0;
✅ Meaning:

👉 Volatile pointer to volatile int

Data is volatile
Pointer is also volatile
🔹 What it means:
Address can change anytime
Value at that address can also change anytime
