#include <iostream>
using namespace std;
//Global variable: declared outside of main
//int age = 16
int main(){
    //locally declared, takes precedence over global
    int age = 21;//C initialization
    //Alternatives
    //int age (21)
    //int age {21} C++ initialization, better and can catch overflow
    
    cout<<age<<endl;//prints out what's in age's associated memory
    int room_width {0};
    int room_length {0};
    
    cout << "enter the width of the room: ";
    cin >> room_width;
    cout << endl;
    
    cout << "enter the length of the room: ";
    cin >> room_length; 
    cout << endl;
    
    cout << "Congratulations! You now have a " << room_length << " x " << room_width << " room!" << endl;
    return 0;

}
