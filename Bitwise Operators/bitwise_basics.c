//Set bit

#include <stdio.h>
int setBit(int n, int pos){
    return n | (1 << pos);
}
int main(){
    int n = 5, pos = 2;
    int res = setBit(n, pos);
    printf("Result = %d", res);
    return 0;
}

//