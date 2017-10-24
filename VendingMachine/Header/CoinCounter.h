#include <string.h>
#include <iostream>
#include "general.h"
#define SODA_PRICE 150
using namespace std;



class CoinCounter {
	public:
		//Output output;
		Coins coin;
        Soda soda = Soda::NADA;
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