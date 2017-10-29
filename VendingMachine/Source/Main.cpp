#include "CoinCounter.cpp"
#include "Input.cpp"

void Main() {
	CoinCounter* control = new CoinCounter();
	Input input = Input(control);
	//Output output();
	while (1) {
		input.coinInput();
	}
}