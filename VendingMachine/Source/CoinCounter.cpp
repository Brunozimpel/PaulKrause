#include "general.h"
#include "CoinCounter.h"
#include "Input.h"
using namespace std;

CoinCounter::CoinCounter()
{   
	Oled.liga();
	printString("GOOD MORNING From radio cuco");
	soda = NADA;
}

CoinCounter::~CoinCounter()
{
    
}

void CoinCounter::CoinAccum(Coins newCoin)
{
	accum += (int)newCoin;
	if (accum > SODA_PRICE) {
		ReturnMoney();
		ReturnSoda();
	}
	else if (accum == SODA_PRICE) {
		ReturnSoda();
	}
    
}

void CoinCounter::ReqDev()
{
	//setDevchangepin
	oledClear();
	printString("Take your money back");
	accum = 0;
}

int CoinCounter::ReturnMoney()
{
	int change = SODA_PRICE - accum;
	oledClear();
	printString("Take your change");
	return change;
    
}

Soda CoinCounter::ReturnSoda()
{
	if (soda == NADA) {
		oledClear();
		printString("Select something");
		return soda;
	}else if(soda == ETIRPS){
		oledClear();
		printString("ENJOY THE SPRITE");
		accum = 0;
		soda = NADA;
		return ETIRPS;
	}
	oledClear();
	printString("ENJOY THE TEEM");
	accum = 0;
	soda = NADA;
	return ETIRPS;
	
}


























