#include<iostream>
#include<string>
using namespace std;
//function prototypes
void get_user_input(string&, string&, string&);
void display_available_restaurants(string&, string&, string&);
//main function
int main()
{
    //string variables to store user input and be used in multiple functions
    string vegan,
           vegetarian,
           glutenFree;  
    //function calls  
    get_user_input(vegan, vegetarian, glutenFree);
    display_available_restaurants(vegan, vegetarian, glutenFree);
    return 0;
}
//function to get user input
void get_user_input(string& v, string& veg, string& gf)
{
    cout << "Is anyone in your party vegan? Type yes or no. "; 
    cin >> v;
    cout << "Is anyone in your party vegetarian? ";
    cin >> veg;
    cout << "Is anyone in your party gluten free? ";
    cin >> gf;
}
//function to display restaurants according to user input
void display_available_restaurants(string& v, string& veg, string& gf)
{
    cout << "Your restaurant choices are: " << endl;
    //available choices of restaurant based on the user's dietary restrictions
    if ((v == "yes" && veg == "yes" && gf == "yes") ||
        (v == "yes" && veg == "no" && gf == "no") ||
        (v == "yes" && veg == "yes" && gf == "no") ||
        (v == "yes" && veg == "no" && gf == "yes"))
    {
        cout << "Corner Cafe" << endl;
        cout << "The Chef's Kitchen" << endl;
    }
    if (v == "no" && veg == "no" && gf == "no")
    {
        cout << "Joe's Gourmet Burgers" << endl;
        cout << "Main Street Pizza Company" << endl;
        cout << "Corner Cafe" << endl;
        cout << "Mama's Fine Italian" << endl;
        cout << "The Chef's Kitchen" << endl;
    }
    if (v == "no" && veg == "yes" && gf == "no")
    {
        cout << "Main Street Pizza Company" << endl;
        cout << "Corner Cafe" << endl;
        cout << "Mama's Fine Italian" << endl;
        cout << "The Chef's Kitchen" << endl;
    }
    if ((v == "no" && veg == "no" && gf == "yes") ||
       (v == "no" && veg == "yes" && gf == "yes"))
    {
        cout << "Main Street Pizza Company" << endl;
        cout << "Corner Cafe" << endl;
        cout << "The Chef's Kitchen" << endl;
    }
    //tells the user to enter a valid selection if they didnt enter yes or no
    if ((v != "yes" && v != "no") || (veg != "yes" && veg != "no") || (gf != "yes" && veg != "no"))
    {
        cout << "Make sure you're entering valid selections and run program again.";
        cout << endl << endl;
    }
}