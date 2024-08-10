#include <iostream>
#include <stdc++.h>
using namespace std;

// very long data type 
// typedef vector<pair<string,int>> pairlist_t;
typedef string text_t;
typedef int number_t;

using text_extra = string;
int main(){
    // typeof = reserved keyword used to create an additional name
    //(alias) for another data type
    // New identifier for an existing type
    // Helps with readability and reducces typos

    // insted of using the original data type we use pairlist (the new identifier)

    // pairlist_t pairlist;
    // using number_t insted of int
    number_t number = 5;
    // using text_t insted of string
    text_t name = "Ahmed";

    cout<<name<<endl;
    cout<<number<<endl;


    // we can also use word using
    text_extra name_extra = "Ahemd Alaa";
    cout<<name_extra<<endl;

    return 0;
}