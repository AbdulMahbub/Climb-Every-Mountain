//==========================================================
//
// Title:      Lab02-01
// Course:     CSC 1101
// Lab Number: Lab02-01
// Author:     Abdul Mahbub
// Date:       January 17, 2019
// Description: Song lyrics for Climb Every Mountain
// 
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

  // Show application header
  cout << "Welcome to Lyric Lovers" << endl;
  cout << "-----------------------" << endl << endl;

  // Show lyrics (1st Paragraph)
  cout << "Climb every mountain," << endl;
  cout << "Search high and low," << endl;
  cout << "Follow every byway," << endl;
  cout << "Every path you know." << endl;
  cout << endl;
  
  // Show lyrics (2nd Paragraph)
  cout << "Climb every mountain," << endl;
  cout << "Ford every stream," << endl;
  cout << "Follow every rainbow," << endl;
  cout << "'Till you find your dream." << endl;
  cout << endl;

  //Show lyrics (3rd Paragraph)
  cout << "A dream that will need" << endl;
  cout << "All the love you can give," << endl;
  cout << "Every day of your life" << endl;
  cout << "For as long as you live." << endl;


  // Show application close
  cout << "\nEnd of Lyric Lovers" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
