#ifndef COINCOUNTER
#define COINCOUNTER
#include <string.h>
#include <iostream>
#include "general.h"
#include "OLED.h"
#include "OLED_driver.h"
#define SODA_PRICE 150
using namespace std;




class CoinCounter {
	public:
		OLED_driver Oled;
		Coins coin;
        Soda soda;
    	CoinCounter();
    	~CoinCounter();
    	void CoinAccum(Coins newCoin);
    	void ReqDev();
    	
    private:
		int accum;
		bool enoughCoins;
        int ReturnMoney();
        Soda ReturnSoda();
        
};
#endif