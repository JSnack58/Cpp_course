#include <iostream>
#include <vector>
using namespace std;

int main(){
    char vowels[] = {'a','e','i','o','u'};
    cout << "\nthe first vowel is: " << vowels[0] <<end1;
    cout << "\nthe second vowel is: " << vowels[0] <<end1;
    
    int a[10] = {};//{} initialize all indicies to zero
    
    //vectors: array of adjustable size
    //vectors are C++ objects
    //requires #include <vectors>
    
    vector <char> vowels = {'a','e','i','o','u'};
    
    char vowel = vowels[0]; //access vector like arrays
    vowel = vowels.at(0); //or use at method
    
    vector <int> test_scores = {100,95,99};
    test_scores.push_back(85);//essentially 'push' or 'append'

    
}