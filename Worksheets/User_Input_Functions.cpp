/**
*Rohan Parikh
*7 March 2021 - 9 March 2021
*Unit 5 Functions
*Extra Thing for worksheets 1-2: In question 5, third integer is allowed with same proccess
*Extra Thing for worksheets 3-4: In quesion 5,user has option to ask for the ^4 too if requested
*/

#include "Methods.h";

using namespace std;


// function for question 3 user input
string user_input_function_3(string functionName)
{
    cout << functionName;
    
    // taking user input for Question 3 on Worksheet 3-4

    cout << "What number would you like to double.\n";
    string user_input;
    getline(cin,user_input);
    return user_input;
}

// function for question 5 user input

std::string user_input_function_5(std::string functionName)
{
    cout << functionName;
    // Asking user for which number they want squared and cubed
    cout << "Enter an integer for which you want the square and cube of\n";
    string integer;
    getline(cin,integer);
    return integer;
}

