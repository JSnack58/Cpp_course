#include <stdio.h>
#include <iostream>
using namespace std;

void change(int cents){
    int dollars = cents / 100;
    cents = cents % 100;
    int quaters = cents / 25;
    cents = cents % 25;
    int dimes = cents / 10;
    cents = cents % 10;
    int nickels = cents / 5;
    cents = cents % 5;
    int pennies = cents;
    
    cout << "dollars : " << dollars << endl;
    cout << "quaters : " << quaters << endl;
    cout << "dimes : " << dimes << endl;
    cout << "nickels : " << nickels << endl;
    cout << "pennies : " << pennies << endl;
}

int main(){
    change(92);
    return 0;
}
