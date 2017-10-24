#include <string.h>
#include <iostream>
#include "general.h"
using namespace std;


class Output {
	public:
        int accum;
        Soda soda;
        bool enoughCoins;
    	Output();
    	~Output();
    	
    private:
        void DelivSoda(Soda newSoda);
        void DevLast();
        void DevChange(int accum);
        void CoinClear();

};