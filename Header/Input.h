#include <string.h>
#include <iostream>
#include "general.h"
using namespace std;


class Input {
    public:
    	Input();
    	~Input();
    private:
        Coins coin;
        void coinInput();
        
};