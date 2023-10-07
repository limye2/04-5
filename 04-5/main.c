//
//  main.c
//  04-5
//
//  Created by MacBook Air on 2023/10/07.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    unsigned int x;
    int b;
    
    printf("input a number :");
    scanf("%i", &x);
    
    for(b=0; x!=0; x >>= 1)
    {
        if(x&1)
        {
            b++;
        }
    }
    
    printf("The result is : %i\n", b);
    
    return 0;
}
