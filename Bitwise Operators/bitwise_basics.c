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
}*/

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