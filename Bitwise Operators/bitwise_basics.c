#include <stdio.h>

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
}*/

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
    scanf("%d", &n);
    int res = countBits(n);
    printf("%d", res);
    return 0;
}