#include "helloclass.h"

HalloClass::HalloClass() :
_value(0),
_name("hello world")
{
};

void HalloClass::set_value (int value){
    _value = value;
}

int HalloClass::get_value (){
    return _value;
}

std::string HalloClass::get_name (){
    return _name;
}
