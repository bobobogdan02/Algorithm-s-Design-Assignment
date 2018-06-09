



#include <stdio.h>
#include <stdlib.h>
#include "coinChange.h"
#include "greedy.h"
#define INF 32517
#define NCoins 4  // number of coins
#define Amount 68  // amount we want to change




int main()
{
    printf("\n===   Amount=%d   ===\n",Amount);
    /**
    * value of the coins , we start from index 1 so first value is 0
    */

	int denomination[NCoins+1] = {0, 1, 5, 10, 25};
    /**
    * min. no. of  coins required
    */
	int nrcoins[Amount+1];
    /**
    * last coin we used to make change for index amount
    */
	int lastcoin[Amount+1];

	int coins[Amount+1];

	printf("\n The denominations : \n");

	arr_display(denomination , NCoins);

	printf("\n===Greedy Method===\n");

	greedy(denomination,coins);

	printf("\n===Dynamic Programming===\n");
    /**
    *  compute minimum number of coins required
    */
	coinChange(denomination, nrcoins, lastcoin);
	printf("Min. no. of coins required to change %d = %d\n", Amount, nrcoins[Amount]);
    /**
    * print the coins used to make change.
    */
	coinSet(denomination, lastcoin);


	return 0;
}



void arr_display(int *arr , int arr_length){
    int iterator=0;

    for(iterator=1;iterator<=arr_length;iterator++){
        printf("%d \n",*(arr + iterator));
    }

}
