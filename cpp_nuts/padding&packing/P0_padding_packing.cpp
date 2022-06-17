/* 
Structural padding and packing is a way to speed up CPU optimisation,
by packing data together.

32 bit system - data is packed together in 4 byte segment.
64 bit system - data is packed together in 8 byte segment.

note double (8 bytes) is not "naturally alignhed".
to remain multiple of 32, cannot be placed after 4 byte seg, or 12 byte seg, etc. 

The size of the memory block segments are also dictated by the largest type.
e.g. on a 32 bit sys, if theres an int and a double in a class, default segments
will be 8 bytes. They must then be aligned (multiple of ) 32
*/

/*
---------------------- CASE 1 -------------------
struct Parent{
    char a; // 1byte
    char b; // 1byte
    int i; // 4byte
};

|a|b|-|-|i|i|i|i|
 0 1 2 3 4 5 6 7
*/

/*
--------------------- CASE 2 --------------------
struct Parent{
    char a; // 1 byte
    int p; // 4 byte
    char b; // 1 byte
};

|a|-|-|-|p|p|p|p|b|-|-|-|
 0 1 2 3 4 5 6 7 8 9 10 11

*/

#pragma pack(1) // disables padding