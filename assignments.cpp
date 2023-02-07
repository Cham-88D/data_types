#include <iostream>

int main(){

    int var1{1}; // Declare and initialize
    std::cout << "var1 : "  << var1 << std::endl;
    var1 = 100; // Assign
    std::cout << "var1 : "  << var1 << std::endl;
    std::cout << std::endl;


    double var2 {60.22}; // Declare and initialize
    std::cout << "var2 : " << var2 << std::endl;
    var2 = 20.20; // Assign
    std::cout << "var2 : " << var2 << std::endl;
    std::cout << std::endl;



    std::cout << std::endl;
    bool state{false}; // Declare and initialize
    std::cout << std::boolalpha;
    std::cout << "state : " << state << std::endl;
    state = true; // Assign
    std::cout << "state : " << state << std::endl;



    //Auto type deduction
    //Careful about auto assignments
    auto var3 {333u}; // Declare and initialize with type deduction
    std::cout << "type : " << typeid(var3).name()  << std::endl;

    var3 = -22; // Assign negative number. DANGER!
    std::cout << "var3 : " << var3 << std::endl; //this print garbage value

    std::cout << "type : " << typeid(var3).name()  << std::endl;

    return 0;
}