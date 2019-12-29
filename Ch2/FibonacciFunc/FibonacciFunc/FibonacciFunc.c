//
//  FibonacciFunc.c
//  FibonacciFunc
//
//  Created by JIN YOUNG PARK on 2019/12/29.
//  Copyright © 2019 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>

int Fibo(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return Fibo(n-1) + Fibo(n-2);
}

int main(void)
{
    int i;
    for(i=1;i<15;i++)
        printf("%d ", Fibo(i));
    
    return 0;
}
