/**
*Rohan Parikh
*7 March 2021 - 9 March 2021 
*Unit 5 Functions
*Extra Thing for worksheets 1-2: In question 5, third integer is allowed with same proccess
*Extra Thing for worksheets 3-4: In quesion 5,user has option to ask for the ^4 too if requested
*/

#include "Methods.h"
//namespaces can sometimes cause problems make sure you are able to use it
using namespace std;

// Methods for Question 5

// Cubing method for Question 5
int cubed (int number)
{
    int cubed = number * number * number;
    return cubed;
}

// Extra thing method for Quesiton 5
int fourthpower(int integer_int)
{
    int fourth = integer_int * integer_int * integer_int * integer_int;
    return fourth;
}






// Doubling user inputted number
double worksheet34_question3(string user_input,string ws34Question3)
{
    cout << "Worksheet 3-4, Question #3\n" << ws34Question3 << endl;
    
    // Checking to make sure user inputted a double, otherwise will reject and force user to change
    while (true)
    {
        stringstream ss;
        double num = 0;
        ss << user_input;
        ss >> num;
        if (ss.good())
        {
            cerr << "Not a valid integer" << endl;
            cout << "Enter a valid integer\n";
            getline(cin,user_input);
        }
        else if(num == 0 && user_input[0] != '0') {
            cerr << "Not a valid integer" << endl;
            cout << "Enter a valid integer\n";
            getline(cin,user_input);
        }
        else
        {
            break;
        }
    }
    
    // converting string to double
    double user_input_double_format = stoi(user_input);

    // Will double user input now

    user_input_double_format = user_input_double_format * 2;
    // returning to main to be printed
    return user_input_double_format;
}

// finding the harmonic mean of two user inputted integers
void worksheet34_question4(std::string ws34Question4)
{
    cout << "Worksheet 3-4, Question #4\n" << ws34Question4 << endl;
    cout << "Enter an integer\n";
    string integer_one;
    getline(cin,integer_one);
    // checking if its integer or not
    while (true)
    {
        stringstream ss;
        int num = 0;
        ss << integer_one;
        ss >> num;
        if (ss.good())
        {
            cerr << "Not a valid integer" << endl;
            cout << "Enter a valid integer\n";
            getline(cin,integer_one);
        }
        else if(num == 0 && integer_one[0] != '0') {
            cerr << "Not a valid integer" << endl;
            cout << "Enter a valid integer\n";
            getline(cin,integer_one);
        }
        else
        {
            break;
        }
    }
    // converting to integer
    int integerOne = stoi(integer_one);

    // getting user to enter second integer

    cout << "Enter a second integer\n";
    string integer_two;
    getline(cin,integer_two);

    // Checking if its integer or not
    while (true)
    {
        stringstream ss;
        int num = 0;
        ss << integer_two;
        ss >> num;
        if (ss.good())
        {
            cerr << "Not a valid integer" << endl;
            cout << "Enter a valid integer\n";
            getline(cin,integer_two);
        }
        else if(num == 0 && integer_two[0] != '0') {
            cerr << "Not a valid integer" << endl;
            cout << "Enter a valid integer\n";
            getline(cin,integer_two);
        }
        else
        {
            break;
        }
    }

    // converting to integer
    int integerTwo = stoi(integer_two);

    // making array

    // had to use floats because double was throwing weird errors
    float arr[] = {integerOne,integerTwo};
    int n = sizeof(arr) / sizeof(arr[0]);

    // harmonic mean

    float sum = 0;
    for (int i = 0; i < n; i++) 
        sum = sum + (float)1 / arr[i];
    float harmonic_mean = n/sum;
    cout << "The harmonic mean is " << harmonic_mean << " of the two numbers you put:\n " << integerOne << " and " << integerTwo << endl;
}


void worksheet34_question5(std::string ws34Question5,string integer)
{
    cout << "Worksheet 3-4, Question #5:\n" << ws34Question5;

    // Verifying if integer is truley integer
    while (true)
    {
        stringstream ss;
        int num = 0;
        ss << integer;
        ss >> num;
        if (ss.good())
        {
            cerr << "Not a valid integer" << endl;
            cout << "Enter a valid integer\n";
            getline(cin,integer);
        }
        else if(num == 0 && integer[0] != '0') {
            cerr << "Not a valid integer" << endl;
            cout << "Enter a valid integer\n";
            getline(cin,integer);
        }
        else
        {
            break;
        }
    }

    // converting string to integer
    int integer_int = stoi(integer);
    // squaring
    int squared = integer_int * integer_int;

    // cubing
    int cubing = cubed(integer_int);

    // print squared and cubed of number
    cout << integer_int << " squared is " << squared << ". " << integer_int << " cubed is " << cubing << endl;
    // Extra thing (allows user to request ^4 of the number
    cout << "Would you like ^4 of your number?\n. Enter yes if you want it.\n";
    string choice;
    getline (cin,choice);
    if (choice == "yes")
    {
        // calls function for ^4 and then prints it
        int fourth = fourthpower(integer_int);
        
        cout << integer_int << "^4 is " << fourth << endl;
    }
}

