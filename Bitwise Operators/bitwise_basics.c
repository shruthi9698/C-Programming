#include <stdio.h>
#include <stdint.h>
//Set bit

/*int setBit(int n, int pos){
    return n | (1 << pos);
}
int main(){
    int n = 5, pos = 2;
    int res = setBit(n, pos);
    printf("Result = %d", res);
    return 0;
}

//Get bit

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int main()
{
    int n = 5, pos = 1;
    int res = getBit(n, pos);
    printf("Result = %d", res);
    return 0;
}

//Clear bit

int clearBit(int n, int pos)
{
    return n & (~(1 << pos));
}
int main()
{
    int n = 5, pos = 0;
    int res = clearBit(n, pos);
    printf("Result = %d", res);
    return 0;
}

//Update bit (clear bit + set bit)

int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | value << pos);
}
int main()
{
    int n =5, pos = 1, value = 1;
    int res = updateBit(n, pos, value);
    printf("Result = %d", res);
    return 0;
}

//Toggle bit

int toggleBit(int n, int pos)
{
    return (n ^ (1 << pos));
}
int main()
{
    int n =5, pos = 1;
    int res = toggleBit(n, pos);
    printf("Result = %d", res);
    return 0;
}

//Count set bits
int countBits(unsigned int n)
{
    int count = 0;
    while(n)
    {
        count++;
        n = n & (n - 1);
    }
    return count;
}
int main()
{
    unsigned int n;
    printf("Enter the number: ");
    scanf("%u", &n);
    int res = countBits(n);
    printf("%u", res);
    return 0;
}

//Swap Bits

void swapBits(int *a, int *b)
{
    if(*a != *b) // if(a != b) - checks the address
    {
        *a = *a ^ *b;
        *b = *b ^ *a;
        *a = *a ^ *b;
    }
}
int main()
{
    int x = 5, y = 5;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swapBits(&x, &y);
    printf("After swap:  x = %d, y = %d\n", x, y);
    return 0;
}*/

//Power of 2

int powerOfTwo(uint32_t n){
    return n != 0 && (n & (n - 1)) == 0;
}
int main()
{
    uint32_t n;
    printf("Enter the number: ");
    scanf("%u", &n);
    if(powerOfTwo(n))
    {
        printf("%u is a power of two\n", n); 
    } 
    else{ 
    printf("%u is not a power of two\n", n); 
    } 
    return 0; 
}
