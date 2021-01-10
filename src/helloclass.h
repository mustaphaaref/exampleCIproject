#include<string>

class HalloClass
{
public:
    HalloClass();
    void set_value (int value);
    int get_value ();
    std::string get_name ();
protected:
    std::string _name;
    int _value;
};
