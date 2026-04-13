**Inter integrated circuit**

- It has 2 lines SDA and SCL, serial data line and serial clock line respectively
- These 2 lines are used for communication
- Initial state of both lines are high with the help of 2 pullup resistors.(Not mandatory though)
- Works in master-slave method

<img width="1093" height="847" alt="image" src="https://github.com/user-attachments/assets/e55e7a74-f909-469e-875c-0ce2b0e76ac0" />

**2 cases** here,
             **- **Master sends data to slave****
             **- Master reads data from slave**
----------------------------------------------------------------------------------------------------------------------------------------------

**Master sends data to slave**
  - Normally, SDA and SCL both are high. First a start bit is sent **logic 0**

<img width="2294" height="372" alt="image" src="https://github.com/user-attachments/assets/dc12b3dd-49f2-4e54-936b-dbc8fa2d6b62" />


  - 1st, master will send start bit **logic 0** by pulling SDA low.
  - Now, master sends the address of the slave that it wants to communicate with on the SDA line.
  - Next, master sends read/write bit. Our case, it is write bit so **logic 0**
  - After this, slave give acknowledgement by giving ack bit. **logic 0** means it is ready for comm
  - Now, data will be sent by master to slave
  - Another ack bit by slave to confirm data transfer
  - Finally stop bit **logic 0** by master. After this both SDA and SCL goes high
--------------------------------------------------------------------------------------------------------------------------------------------------


**I2C arbiteration and stretching**

  **I2C arbiteration**
    - This happens when **2 devices** tries to take control over the bus.

    <img width="2145" height="1100" alt="image" src="https://github.com/user-attachments/assets/c596de12-b287-49ba-84ac-01c2887a5460" />

    - Here 2 devices tries to control the bus.
    - Before explaining I2C arbitertion, we need to remember that I2C is a **wired AND logic**
            - Initialyy both SDA and SCL is high. The thing is devices cannot pull them. They can pulled down or be floating
            - So it doesn'nt matter whether device a is floating or pulled down, if device B is pulled low -> the line becomes low **=>WIRED AND**

    - So, the device which send 0 to the line controls the line.
    This is called arbiteration
            
