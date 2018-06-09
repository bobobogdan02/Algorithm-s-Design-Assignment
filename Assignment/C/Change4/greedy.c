#include <stdio.h>
#include "greedy.h"

#define INF 32517
#define NCoins 4  // number of coins
#define Amount 68  // amount we want to change

/**
* Function greedy ﬁrst puts the denominations in descending order , then goes through the denominations
* if the current denomination is smaller the amount we need to form we ﬁnd how many times it ﬁts in the amount by dividing the amount by the denomination and saving it in the nocoins variable ,
* then we subtract the amount that we get by multiplying the nocoins with the denomination .
*/

void greedy(int denomination[NCoins+1] , int coins[Amount+1]){
    int iterator_coins=0,iterator , no_coins , idenomination[NCoins+1] , amount_aux=Amount ;

    for(iterator = 1 ; iterator <= NCoins+1 ; iterator ++)
        idenomination[iterator]=denomination[NCoins + 1 - iterator];

    iterator = 1;
    while(iterator <= NCoins){
        if(idenomination[iterator] <= amount_aux){
            no_coins = amount_aux/idenomination[iterator];
            printf("%d coin is used %d times \n",idenomination[iterator],no_coins);
            amount_aux = amount_aux - no_coins*idenomination[iterator];
            iterator_coins = iterator_coins + no_coins;
        }
        iterator++;
    }
    printf("\n The min no. of coins that can be used : %d \n",iterator_coins);
}
