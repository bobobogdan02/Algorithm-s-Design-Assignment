#ifndef COINCHANGE_H_INCLUDED
#define COINCHANGE_H_INCLUDED

#define INF 32517
#define NCoins 4  // number of coins
#define Amount 68  // amount we want to change


void coinChange(int denomination[NCoins+1], int nrcoins[Amount+1], int lastcoin[Amount+1]);
void coinSet(int denominations[NCoins+1], int lastcoin[Amount+1]);



#endif // COINCHANGE_H_INCLUDED
