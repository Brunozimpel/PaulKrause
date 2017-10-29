#include <string.h>
#include <iostream>
#include "general.h"
using namespace std;


class Input {
    public:
    	Input(CoinCounter* control);
    	~Input();
		void coinInput();
    private:
		volatile unsigned int *data;
		CoinCounter* control;
        Coins coin;
         //
};