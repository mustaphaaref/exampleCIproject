#include <iostream>
#include "../src/helloclass.h"

int main () {
    HalloClass obj;
    std::cout << obj.get_name() << std::endl;
    return 0; 
}
