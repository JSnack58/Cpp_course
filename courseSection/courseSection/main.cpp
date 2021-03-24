/*preprocessor directives
    removes comments
    #include is a common directives
        recursively access the input file
*/
#include <iostream> //allows cout & cin
/*
 * main is a very special function
 * main(int argc, char *argv)
 *      allows argruements
 *      argc: number of arguements
 *      argv: arguement names
 * */
int main(){
    //indentifier: name that the programmer gives meaning
    int favorite_number;//indentifier
    //<< stream insertion operator
    // (stream) << (what you want to insert)
    std::cout << "Enter your favorite number between 1 and 100: ";
    
    //>> stream extraction operator
    // (what you want to extract) >> (where to put it)
    std::cin >> favorite_number;
    /*cin >> arg_1 >> arg_2 >> ... >> arg_n*/
    
    // :: scope resolution operator
    //resolves naming conflicts by providing namespaces
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really, "<<favorite_number<<" is my favorite number."<<std::endl;
    
    return 0;
}