#include <string.h>
#include <iostream>
#include "general.h"
using namespace std;


class Menu {
    public:
    	Menu(CoinCounter* control);
    	~Menu();
		void ReqMEET();
		void ReqETIRPS();
		void ReqDev();
    private:
		CoinCounter* control;
		Soda soda;
		bool dev;
};