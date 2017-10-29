#include "general.h"
#include "CoinCounter.h"
#include "Menu.h"
using namespace std;

Menu::Menu(CoinCounter* control)
{
	this->control = control;
    
}

Menu::~Menu()
{
    
}

void Menu::ReqMEET()
{
	control->soda = Soda::MEET;
    
}

void Menu::ReqETIRPS()
{
	control->soda = Soda::ETIRPS;
}

void Menu::ReqDev()
{
	control->ReqDev();
    
}
    
        
        
        
        
        
        
        
        
        
        
        
        