#include<stdio.h>

unsigned char resetBit(unsigned char x, int bit);
unsigned char setBit(unsigned char x, int bit);
int readBit(unsigned char x, int bit);

int main(void){

    unsigned char input, setOut, readOut; 
    int bit, resetOut;

    //defining inputs
    input = 0xAB; //binary: 1010_1011
    bit   = 1;

    //bit operations
    setOut = setBit(input, bit);
    readOut = readBit(input, bit);
    resetOut = resetBit(input, bit); 


    //printing results
    printf("setBit operation on bit %d> input: %x, output: %x\n", bit, input, setOut);
    printf("readBit operation on bit %d> input: %x, output: %d\n", bit, input, readOut);
    printf("resetBit operation on bit %d> input: %x, output: %x\n", bit, input, resetOut);

    return 0;
}

unsigned char resetBit(unsigned char x, int bit){return x & ~(0x01 << bit);}
unsigned char setBit(unsigned char x, int bit){return x | (0x01 << bit);}
int readBit(unsigned char x, int bit){
    if(x & (0x01 << bit) == 0x00) return 0;
    return 1;    
}