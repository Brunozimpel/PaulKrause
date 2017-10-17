#include <string.h>
#include <iostream>
#include "general.h"
using namespace std;


class Menu {
    public:
        Soda soda;
        bool dev;
    	Menu();
    	~Menu();
    private:
        void ReqMEET();
        void ReqETIRPS();
        void ReqDev();
};