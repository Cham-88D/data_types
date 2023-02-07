#include <iostream>


/**
 * This program shows use of auto keyword
 * The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from its initializer.
 * In the case of functions, if their return type is auto then that will be evaluated by return type expression at runtime
 *
 */

int main(){

    auto var1 {10};
    auto var2 {43.0};
    auto var3 {11.0f};
    auto var4 {18.0l};
    auto var5 {'a'};

    //int modifier suffixes
    auto var6 { 123u}; // unsigned int
    auto var7 { 123ul}; //unsigned long int
    auto var8 { 123ll}; // long long int


    // typeid used where the dynamic type of a polymorphic object must be known and for static type identification.
    std::cout << "type : " << typeid(var1).name()  << std::endl;
    std::cout << "type : " << typeid(var2).name()  << std::endl;
    std::cout << "type : " << typeid(var3).name()  << std::endl;
    std::cout << "type : " << typeid(var4).name()  << std::endl;

    std::cout << "type : " << typeid(var5).name()  << std::endl;
    std::cout << "type : " << typeid(var6).name()  << std::endl;
    std::cout << "type : " << typeid(var7).name()  << std::endl;
    std::cout << "type : " << typeid(var8).name()  << std::endl;



    return 0;
}