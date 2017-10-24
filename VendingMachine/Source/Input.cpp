#include "general.h"
#include "CoinCounter.cpp"
#include "Input.h"
using namespace std;

Input::Input(CoinCounter* control)
{
	volatile unsigned int *gambdata = (volatile unsigned int *)0x80000a00;
		data = gambdata;
	this->control = control;
	   
}

Input::~Input()
{
    
}

void Input::coinInput()
{
	if (0x262400 & *data) {
		control->CoinAccum(c025);
	}
	else if (0x262656 & *data)
	{
		control->CoinAccum(c050);
	}
	else if (0x263168 & *data) {
		control->CoinAccum(c0100);
	}

	else if (0x524288 & *data) {
		control->soda = ETIRPS;
	}
	else if (0x65536 & *data) {
		control->soda = MEET;
	}
	else if (0x131072 & *data) {
		control->ReqDev();
	}
	else 
		control->CoinAccum(anyCoin);



}