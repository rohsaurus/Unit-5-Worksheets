/**
*Rohan Parikh
*7 March 2021 - 9 March 2021
*Unit 5 Functions
*Extra Thing for worksheets 1-2: In question 5, third integer is allowed with same proccess
*Extra Thing for worksheets 3-4: In quesion 5,user has option to ask for the ^4 too if requested
*/



// fix ws formatting
// i dont think i can accept user input in main
// i need to write a function or somethign


#include "Methods.h"

using namespace std;
int main(int argc, char* argv[])
{
    // strings for identifying what question the method is running
    string ws12Question4 = "Function that prints company heading";
    string ws12Question5 = "integers squared and added";
    string ws12Question6 = "take a charcter and two integers and print them\n";
    string userinput_3 = "A function that accepts user input for question 3\n";
    string userinput_5 = "User input function for question 5\n";
    string ws34Question3 = "Take user number and double it\n";
    string ws34Question4 = "Finding harmonic mean of two integers\n";
    string ws34Question5 = "Returning square and cube of number\n";

    // Worksheet 1-2 Methods
    worksheet12_question4(ws12Question4);
    worksheet12_question5(ws12Question5);
    worksheet12_question6(ws12Question6);



    // function to accept userinput for question 3
    string user_input = user_input_function_3(userinput_3);
    
    // Method for user
    double result = worksheet34_question3(user_input,ws34Question3);

    
    // Rest of worksheet 2 methods
    worksheet34_question4(ws34Question4);


    // user input function for question 5

    string integer = user_input_function_5(userinput_5);

    // worksheet 3-4 question 5 method
    worksheet34_question5(ws34Question5,integer);
    
    return 0;
}
