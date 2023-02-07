#include <iostream>

/**
 * This program shows boolean data type (ture or false / 0,1 )
 */



int main(){

    bool  night {false};
    bool day {true};


    //siz of boolean type
    std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl;


     //we can use boolean var as condition like below

     if(day==true)
     {
         std::cout<<day<<std::endl;
     }
     else
     {
         std::cout<<night<<std::endl;
     }

     // or in short form


    if(day)
    {
        std::cout<<day<<std::endl;
    }
    else
    {
        std::cout<<night<<std::endl;
    }



    //Printing out a bool


    std::cout << std::endl;
    std::cout << "day : "   << day << std::endl;
    std::cout << "night : " << night << std::endl;

    // if we print bool variable without std::boolalpha  it only shows 0 and 1. With std::boolalpha it shows true or false

    std::cout << std::boolalpha;
    std::cout << "day : "   << day << std::endl;
    std::cout << "night : " << night << std::endl;


    // we can remove std::boolalpha with std::noboolalpha which prints 0,1 again

    std::cout << std::noboolalpha;
    std::cout << "day : "   << day << std::endl;
    std::cout << "night : " << night << std::endl;



    return 0;
}
