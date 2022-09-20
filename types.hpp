// Programmer's Name:

#include <string>

//----------------------
  const int LOCATIONLENGTH = 20;
  const int COLWIDTH = 10;
  const std::string OUTPUT = "business_trip.txt";
  const int MAXNUM = 20;
//----------------------

//----------------------
// STRUCTS
//----------------------

// This structure holds all information for a business trip

struct BusinessTripInfo
{
  std::string location;
  int days;
  double hotel;
  double meal;
};

//----------------------
// FUNCTION PROTOTYPES
//----------------------

// This function prints all trips from the input array to a file

void printBusinessTrips(BusinessTripInfo trips[], int count);
