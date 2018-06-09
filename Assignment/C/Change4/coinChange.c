#include <stdio.h>
#include "coinChange.h"

#define INF 32517
#define NCoins 4  // number of coins
#define Amount 68  // amount we want to change



void coinChange(int denomination[NCoins+1], int nrcoins[Amount+1], int lastcoin[Amount+1]){
	int iterator1, iterator2, min, coin;
    /**
    * no. of coins used when the amount is 0
    * last coin used when the amount is 0
    */
	nrcoins[0] = 0;
	lastcoin[0] = 0;
    /**
    * iterator1 is helping us going through every value from 1 to the given amount
    */
	for(iterator1 = 1; iterator1 <= Amount; iterator1 ++) {
		min = INF;
		/**
		* iterator2 is used to go through every coin value of the denomination
		*/
		for( iterator2 = 1; iterator2 <= NCoins; iterator2++) {
			if(denomination[iterator2] <= iterator1) {
				if(1 + nrcoins[iterator1 - denomination[iterator2]] < min) {
					min = 1 + nrcoins[iterator1 - denomination[iterator2]];
                    coin = iterator2 ;
				}
			}
		}
		nrcoins[iterator1] = min;
		lastcoin[iterator1] = coin;
	}

}


void coinSet(int denominations[NCoins+1], int lastcoin[Amount+1]){
	int iterator = Amount;
    /**
    * print the coins used to make change by subtracting from the current index of lastcoin array the value saved at the current index position
    */
	while(iterator > 0) {
		printf("Use coin of denomination: %d\n", denominations[lastcoin[iterator]]);
		iterator = iterator - denominations[lastcoin[iterator]];
	}
}
