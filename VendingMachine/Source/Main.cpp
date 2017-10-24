#include "CoinCounter.h"
#include "Input.h"
#include "Menu.h"

void Main() {
	CoinCounter* control = new CoinCounter();
	Menu menu = Menu(control);
	Input input(control);
	//Output output();
	
}