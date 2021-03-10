/**
*Rohan Parikh
*7 March 2021 - 9 March 2021
*Unit 5 Functions
*Extra Thing for worksheets 1-2: In question 5, third integer is allowed with same proccess
*Extra Thing for worksheets 3-4: In quesion 5,user has option to ask for the ^4 too if requested
*/

#include "Methods.h"

using namespace std;
int main(int argc, char* argv[])
{
    // strings for identifying what question the method is running
    string ws12Question4 = "Function that prints company heading";
    string ws12Question5 = "integers squared and added";
    string ws12Question6 = "take a charcter and two integers and print them\n";
    string ws34Question3 = "Take user number and double it\n";
    string ws34Question4 = "Finding harmonic mean of two integers\n";
    string ws34Question5 = "Returning square and cube of number\n";

    // Worksheet 1-2 Methods
    worksheet12_question4(ws12Question4);
    worksheet12_question5(ws12Question5);
    worksheet12_question6(ws12Question6);

    // taking user input for Question 3 on Worksheet 3-4
    
   cout << "What number would you like to double.\n";
    string user_input;
    getline (cin,user_input);

    // Method for user
    double result = worksheet34_question3(user_input,ws34Question3);
    // printing result for user
    cout << "The doubled result is " << result << endl;

    
    // Rest of worksheet 2 methods
    worksheet34_question4(ws34Question4);

    // Asking user for which number they want squared and cubed
    cout << "Enter an integer for which you want the square and cube of\n";
    string integer;
    getline(cin,integer);
    worksheet34_question5(ws34Question5,integer);
    
    return 0;
}
