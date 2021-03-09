/**
*Rohan Parikh
*7 March 2021 - 9 March 2021 
*Unit 5 Functions
*Extra Thing for worksheets 1-2: In question 5, third integer is allowed with same proccess
*Extra Thing for worksheets 3-4: In quesion 5,user has option to ask for the ^4 too if requested
*/

#include <string>

#include "Methods.h"
//namespaces can sometimes cause problems make sure you are able to use it
using namespace std;


// Function for printing out company header
void worksheet12_question4(string ws12Question4)
{
    cout << "Worksheet 1-2, Question #4: " << ws12Question4 << endl;

    cout << "Company XYZ - We take the X and put it into the Z\n";
}

// Function for inputting two integers, squaring them and then adding them
void worksheet12_question5(string ws12Question5)
{
    cout << "Worksheet 1-2, Question #5:" << ws12Question5 << endl;

    cout << "You will be requested to enter in two integers.\n";
    cout << "Enter the first one now.\n";


    // Taking first integer and checking to see if it truley is an integer or not
    string first_integer;
    int first_integer_integer_format;
    int count = 0;
    getline(cin,first_integer);
// While true loop to check that user inputted a valid integer   
    while (true)
    {
        stringstream ss;
        int num = 0;
        ss << first_integer;
        ss >> num;
        if (ss.good())
        {
            cerr << "Not a valid integer" << endl;
            cout << "Enter a valid integer\n";
            getline(cin,first_integer);
        }
        else if(num == 0 && first_integer[0] != '0') {
            cerr << "Not a valid integer" << endl;
            cout << "Enter a valid integer\n";
            getline(cin,first_integer);
        }
        else
        {
            break;
        }
    }

    // stoi method to convert string to integer
    first_integer_integer_format = std::stoi(first_integer); 
    // Taking second integer and checking to see if its an integer or not

    // setting up for second integer
    string second_integer;
    int second_integer_integer_format;
    count = 0;
    cout << "Enter the second integer now\n";
    getline(cin,second_integer);

    // While true loop to check for valid input
    while (true)
    {
    stringstream ss;
    int num = 0;
    ss << second_integer;
    ss >> num;
    if (ss.good())
    {
    cerr << "Not a valid integer" << endl;
    cout << "Enter a valid integer\n";
    getline(cin,second_integer);
    }
    else if(num == 0 && second_integer[0] != '0') {
    cerr << "Not a valid integer" << endl;
    cout << "Enter a valid integer\n";
    getline(cin,second_integer);
    }
    else
    {
    break;
    }
    }

    // Stoi method to convert string to int
    second_integer_integer_format = stoi(second_integer);
    
    // Integers will now be squared

    first_integer_integer_format = first_integer_integer_format * first_integer_integer_format;
    second_integer_integer_format = second_integer_integer_format *  second_integer_integer_format;

    // Integers will be added
    int sum = first_integer_integer_format + second_integer_integer_format;

    cout << "After squaring and adding the two integers, the final result is: " << sum << endl;

    // Extra Thing
    cout << "Would you like to have a 3rd integer?\n Enter yes if you would.\n";
    string choice;
    getline (cin, choice);
    if (choice == "yes")
    {
        cout << "Enter in the 3rd integer\n";
        string third_integer;
        int third_integer_integer_format;
        getline (cin,third_integer);
        // Checking if integer or not
        while (true)
        {
            stringstream ss;
            int num = 0;
            ss << third_integer;
            ss >> num;
            if (ss.good())
            {
                cerr << "Not a valid integer" << endl;
                cout << "Enter a valid integer\n";
                getline(cin,third_integer);
            }
            else if(num == 0 && third_integer[0] != '0') {
                cerr << "Not a valid integer" << endl;
                cout << "Enter a valid integer\n";
                getline(cin,third_integer);
            }
            else
            {
                break;
            }
        }

        // setting to int
        third_integer_integer_format = stoi(third_integer);
        // Squaring it
        third_integer_integer_format = third_integer_integer_format * third_integer_integer_format;

        // adding it to sum and printing it out

        sum = sum + third_integer_integer_format;

        cout << "The new sum is " << sum << endl;
        
    }

}

// Function that takes three arguements and prints character certian amount of times
void worksheet12_question6(string ws12Question6)
{
    cout << "Worksheet 1-2, Question #6:" << ws12Question6 << endl;
    cout << "What character would you like to print?\n";
    string character;
    // taking character and confirming that it has a length of one
    getline (cin,character);
    int length_of_string = character.length();
    // Testing to make sure its one length
    if (length_of_string > 1 || length_of_string > 0)
    {
        while (length_of_string > 1 || length_of_string > 0)
        {
            cout << "The character can't be more than 1 in length.\n";
            cout << "Enter in a character\n.";
            getline(cin,character);
            length_of_string = character.length();
        }
    }
    // taking integers for colums and rows #
    cout << "Enter in the amount of times you want the character printed per row\n";
    string rows_string;
    int rows_integer;
    int count = 0;
    getline (cin,rows_string);

    // Testing for integer status
    while (true) {
        // Iteratres to every character checking if it is a digit or not
        // this deduces whether user inputted integer or something else
        for (int i = 0; i < rows_string.length(); i++) 
        {
            if (isdigit(rows_string[i]) == false) 
            {
                count = 1;
                break;
            }
            else
                count = 0;
     
        } if(count==0)
        {
            std::cout << "";
            rows_integer = std::stoi(rows_string);
            if (rows_integer >= 1 && rows_integer <= 8)
            {
                std::cout << " ";
                break;
            }
        }
  
        else
        {
            std::cout << "You have entered something which is not an integer. Try again\n ";
            getline(cin,rows_string);
        }    
    }

    cout << "Enter in the amount of rows you want printed.\n";
    string lines_string;
    int lines_integer;
    getline(cin,lines_string);
    count = 0;
    // Testing for integer status
    while (true) {
        // Iteratres to every character checking if it is a digit or not
        // this deduces whether user inputted positive integer or something else
        for (int i = 0; i < lines_string.length(); i++) 
        {
            if (isdigit(lines_string[i]) == false) 
            {
                count = 1;
                break;
            }
            else
                count = 0;
     
        } if(count==0)
        {
            std::cout << "";
            lines_integer = std::stoi(lines_string);
            if (lines_integer >= 1 && lines_integer <= 8)
            {
                std::cout << " ";
                break;
            }
        }
  
        else
        {
            std::cout << "You have entered something which is not an integer. Try again\n ";
            getline(cin,lines_string);
        }    
    }

    // final output statemetn for character and length and rows
    for (int i = 0; i != lines_integer; i++)
    {
        for (int k = 0; k!= rows_integer;k++)
        {
            cout << character;
        }
        cout << endl;
    }
}


