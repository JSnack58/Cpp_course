#include <iostream>
#include <vector>
using namespace std;
/*Declare 2 empty vectors of integers named
 * vector1 and vector2
 * 
 * Add 10 and 20 to vector1 dynamically using push_back
 * Display the ememelnts in vector1 using the at() method 
 * as well as its size usin the size() method
 * 
 * Add 100 and 200 to vector2 dynamically using push_back
 * Display the elements in vector2 using the at() method 
 * as well as as its size using the sizw() method
 * 
 * Declare an empty 2D vector called vector
 * */
int main(){
    vector<int> vector1 = {};
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "vector1" << endl;
    cout << " ["<<vector1.at(0) << " " << vector1.at(1) << "] of size: "<< vector1.size() << endl << endl;


    vector<int> vector2 = {};
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "vector2" << endl;
    cout << " [" << vector2.at(0) << " " << vector2.at(1) << "] of size: " << vector2.size() << endl << endl;
    
    vector<vector<int>> vector_2d = {};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "vector_2d" << endl;
    cout << vector_2d.at(0).at(0) <<" " <<vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) <<" " <<vector_2d.at(1).at(1) << endl; 
    cout << "of size: "<< vector_2d.size() << endl <<endl;
    //cout << vector_2d.at(0) << endl << vector_2d.at(1) << endl;
    vector_2d[0][0] = 1000;
    
    cout << "vector_2d";
    cout << vector_2d.at(0).at(0) <<" " <<vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) <<" " <<vector_2d.at(1).at(1) << endl; 
    cout << "of size: "<< vector_2d.size() << endl <<endl;

    return 0;
}