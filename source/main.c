/*
*   main.c
*       by Reisyukaku
*   Copyright (c) 2015 All Rights Reserved
*
*   Minimalist CFW for N3DS
*/

#include "fs.h"
#include "linux.h"


void main(){
    mountSD();
    loadLinux();
    runLinux();
}
