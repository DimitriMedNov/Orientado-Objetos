#include <iostream>
#include <string>
//#include "ClaseTemplate.h"
#include "ClaseTemplate.cpp"

using namespace std;

int main()
{
    ClaseTemplate<string> objStr("Hola mundo!");
    ClaseTemplate<int> objInt(9);

    objStr.showType();
    objInt.showType();

    ClaseTemplate<float> objFloat(10.55f);
    objFloat.showType();
}
