#include "splashkit.h"
#include <string>
#include <vector>
#include <iostream>

using std::vector;
using namespace std;

struct user_data
{
    string name;
    int vinnumber;
    int userID;
    bool userpw;
    string customervehicle;
    int vehicleID;
};

string read_string(string prompt)
{
    string result;
    write(prompt);
    result = read_line();
    return result;
}

int read_integer(string prompt)
{
 string line;    
 line = read_string(prompt);
 return convert_to_integer(line);
}



enum user_update_option
{
    UPDATE_NAME,
    UPDATE_USERID,
    UPDATE_MODEL,
    UPDATE_CUSTOMERVEHICLE,
    UPDATE_TAKATA,
    UPDATE_VEHICLEID,
    FINISH_UPDATE
};


int user_update_vehicle (user_data &user)
{
    int result;

    write_line("1: Update Name: ");
    write_line("2: Insert ID: ");
    write_line("3: Insert License: ");
    write_line("4: Insert your password: ");
    write_line("5: Finished update");

    result = read_integer("select option: ");//choose an option from the list above

    return 0;
}

void update_user(user_data &user)
{
    user_update_option option;
    do
    {
    write_line();
    write_line("== Update user ==");


    option = user_update_option();//list of options 
    switch(option)
    {
        case UPDATE_NAME:
        user.name = read_string("Enter New Name: ");
    break;
        case UPDATE_USERID:
        user.userID = read_integer("Enter New ID: ");
    break;
        case UPDATE_CUSTOMERVEHICLE:
        user.customervehicle = read_string("Enter the vehicle you wish to check: ");
    break;
        case UPDATE_TAKATA:
        user.vehicleID = read_integer("Enter the vehicle ID: ");
    break;
    default:
    write_line("Please Select a valid option");
}
} while ( option != FINISH_UPDATE );
}


//the following user_data functions will show up when the program runs

user_data read_user(user_data &user)
{
    user_data result;
    result.name = read_string("Please Enter your users Name: ");//user outputs a string that is their name, it is returned at the end
    result.vinnumber = read_integer("Please Enter your users license number: ");//user outputs an int as their vin number, it is returned in the end
    result.customervehicle = read_string("Please enter your desired vehicle: ");//user outputs a string that outputs the car they want, it is returned at the end

    return result;
}

int main(user_data read_user)
{
    write_line(UPDATE_NAME);
    write_line(UPDATE_MODEL);
    write_line(UPDATE_CUSTOMERVEHICLE);
    write_line(UPDATE_TAKATA);

 return 0;
}