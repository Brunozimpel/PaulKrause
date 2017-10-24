#include <string.h>
#include <iostream>
#include "general.h"
using namespace std;


class CoinCounter {
	public:
        Coins coin;
        
        int accum;
        Soda soda;
        bool enoughCoins;
        bool dev;
    	CoinCounter();
    	~CoinCounter();
    	void CoinAccum(Coins newCoin);
    	void CoinAccum(bool newDev, Soda newSoda);
    	
    	
    private:
        bool ReturnMoney();
        bool ReturnSoda();
        Output output;
        Input input;
        
};