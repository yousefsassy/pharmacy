//
//  main.c
//  pharmacy
//
//  Created by Youssef Sassi on 7/10/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int med_ids[5];
    float med_prices[5];
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("enter the id of the med:  ");
        scanf("%i", &med_ids[i]);
        printf("enter the price of the med: ");
        scanf("%f", &med_prices[i]);
    }
        
        for (int i = 0; i < 5; i++)
        {
            sum=sum+med_prices[i];
        }
        
        
    printf("%g \n" ,sum);
    return 0;
}
