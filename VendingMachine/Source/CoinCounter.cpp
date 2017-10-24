#include "general.h"
#include "CoinCounter.h"
#include "Input.h"
#include "Menu.h"
#include "Display.h"
using namespace std;

CoinCounter::CoinCounter()
{   
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
	accum = 0;
}

int CoinCounter::ReturnMoney()
{
	int change = SODA_PRICE - accum;
	return change;
    
}

Soda CoinCounter::ReturnSoda()
{
	if (soda == Soda::NADA) {
		printf("escolhe uma porra de refri");
		return soda;
	}else if(soda == Soda::ETIRPS){
		printf("tirpsss");
		accum = 0;
		soda = Soda::NADA;
		return Soda::ETIRPS;
	}
	printf("meets");
	accum = 0;
	soda = Soda::NADA;
	return Soda::ETIRPS;
	
}


























