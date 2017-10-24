#include "general.h"
#include "CoinCounter.h"
#include "Input.h"
#include "Output.h"
using namespace std;

Input::Input(CoinCounter* control)
{
	this->control = control;
    
}

Input::~Input()
{
    
}

void Input::coinInput(Coins newCoin)
{
		control->CoinAccum(newCoin);

}
