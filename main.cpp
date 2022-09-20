// Programmer's Name:
// This program requests business trip expenses from the user and outputs the
// information along with total expenses to a file.

// Name: Tommy Le
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "types.hpp"

int main()
{
  BusinessTripInfo List[MAXNUM];
  std::string business_location;
  int trip_days; //amount of days we use be on your trip
  double total_all;
  char option; // this is when the user input E or X
  int count = 0;

  do
  {
    std::stringstream sshotel,ssmeal,sstotal;
    std::cout << "What would you like to do? \n";
    std::cout << "E: enter a new expense \n" << "X: exit the program \n";
    std::cout << "Option: ";
    std::cin >> option; //user char input
    option = toupper(option);
    std::cin.ignore();


    if (option != 'E' && option != 'X') { //If option isn't E and X, it will be invalid as those are the only two options
      std::cout << " \nInvalid option \n";
    }

    if (option == 'E' || option == 'e') { //if the option is E
      std::cout << "\nWelcome to the Business Trip Tracker! \n";
      std::cout << "\nWhat is the business trip location? "; //location of trip
      getline(std::cin,business_location);
      List[count].location = business_location;

      std::cout << "How many days will the trip take? "; //input # of days on trip
      std::cin >> List[count].days;

      std::cout << "What is the total hotel expense? $"; //cost of hotel
      std::cin >> List[count].hotel;
      sshotel << std::setprecision(2) << std::fixed << '$' << List[count].hotel;

      std::cout << "What is the total meal expense? $"; //total meal cost
      std::cin >> List[count].meal;
      ssmeal << std::setprecision(2) << std::fixed << '$' << List[count].meal;

      total_all =  List[count].hotel + List[count].meal; //calculate the total cost of hotel and meal
      sstotal << std::setprecision(2) << std::fixed << '$' << total_all;
      count++;

      printBusinessTrips(List,count);

      //std::cout << "\n" << std::setw(LOCATIONLENGTH) << std::left << "Location" << std::setw(COLWIDTH) << std::right << "Days" << std::setw(COLWIDTH) << "Hotel" << std::setw(COLWIDTH) << "Meal" << std::setw(COLWIDTH) << "Total" << "\n";
      //std::cout << std::setw(LOCATIONLENGTH) << std::left << business_location.substr(0,LOCATIONLENGTH) << std::setw(COLWIDTH) << std::right << trip_days << std::setw(COLWIDTH) << sshotel.str() << std::setw(COLWIDTH) << ssmeal.str() << std::setw(COLWIDTH) << sstotal.str() << '\n';
      //output << std::setw(LOCATIONLENGTH) << std::left << business_location.substr(0,LOCATIONLENGTH) << std::setw(COLWIDTH) << std::right << trip_days << std::setw(COLWIDTH) << sshotel.str() << std::setw(COLWIDTH) << ssmeal.str() << std::setw(COLWIDTH) << sstotal.str() << '\n';
    }

  }
  while (option != 'X');

  std::cout << "\nThank You for using Business Trip Tracker \n";

  return 0;
}


void printBusinessTrips(BusinessTripInfo trips[], int count){
  std::ofstream output;
  output.open(OUTPUT);
  output << "\n" << std::setw(LOCATIONLENGTH) << std::left << "Location" << std::setw(COLWIDTH) << std::right << "Days" << std::setw(COLWIDTH) << "Hotel" << std::setw(COLWIDTH) << "Meal" << std::setw(COLWIDTH) << "Total" << "\n";
  for (int i =0; i < count; i++){
      output << std::setw(LOCATIONLENGTH) << std::left << trips[i].location.substr(0,LOCATIONLENGTH) << std::setw(COLWIDTH) << std::right << std::setprecision(2) << std::fixed << trips[i].days << std::setw(COLWIDTH) << std::setprecision(2) << std::fixed << '$' << trips[i].hotel << std::setw(COLWIDTH) << std::setprecision(2) << std::fixed << '$' << trips[i].meal << std::setw(COLWIDTH) << std::setprecision(2) << std::fixed << '$' << (trips[i].meal + trips[i].hotel) << '\n';
  }
  std::cout << "\nThank you. This trip has been added. \n";

  output.close();


}
