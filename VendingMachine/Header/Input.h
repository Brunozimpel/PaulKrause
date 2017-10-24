#include <string.h>
#include <iostream>
#include "general.h"
using namespace std;


class Input {
    public:
    	Input(CoinCounter* control);
    	~Input();
    private:
		CoinCounter* control;
        Coins coin;
        void coinInput(Coins newCoin); //
        
};