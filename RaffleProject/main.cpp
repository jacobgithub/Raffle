//*****************************************************
//Jacob C. Ting & Eric Enlow
//CS 287
//*****************************************************
//***RRRRRR*******A*******FFFFFFF*FFFFFF*LL*****EEEEEE*
//***RR**RR******A*A******FF******FF*****LL*****EE*****
//***RRRRRR*****A***A*****FFFFF***FFFFF**LL*****EE*****
//***RR*RR*****AAAAAAA****FF******FF*****LL*****EEEEEE*
//***RR**RR***A*******A***FF******FF*****LL*****EE*****
//***RR***RR*A*********A**FF******FF*****LLLLLL*EEEEEE*
//*****************************************************
//Program reads from the example.txt file and places
//each entry into a vector.  The winner is chosen by
//using the rand() function to randomly produce a number.
//That number is the position in the list of the winner.
//That position in the list is then outputted to the screen.

#include <cstdlib>
#include <iostream>
#include <istream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

void raffleFluff(int x);

int main () {
  //Variable to add more contestants.
  string morePeople;

  //Vector that will hold the entries.
  vector<string> raffle;
  //String variable used to determine the string of each entry.
  string line;
  //Get the file containing the entries.
  ifstream myfile ("example.txt");
  //If the file is able to be opened and read properly.
  if (myfile.is_open())

  {
    //While the file does not return any read errors.
    while ( myfile.good() )
    {
      //Get each line of the file, and place that line into the vector named raffle.
      getline (myfile,line);
      raffle.push_back(line);
    }
    //Close the file.
    myfile.close();
  }
  //Message to output if the file is unable to be opened.
  else cout << "Unable to open file" << endl;

  //Output the entries. Outputs the contents of the vector raffle.
  cout << "The entries listed in the raffle are: " << endl;
  for (vector<string>::iterator it = raffle.begin(); it != raffle.end(); it++)
  cout << *it << " " << endl;

  //Begin the random number generator.
  srand((unsigned)time(0));

  //The size (number of contents) of the vector raffle.
  int rafflesize = raffle.size();

  //Variable to store the random number.
  int random_int;

  //Establish the range that the random number will stay within.
  int lowest = 0, highest = rafflesize;

  int range = (highest - lowest);

  //Generate a random number based off of the range of the vector raffle.
  for(int index=0; index<20; index++){
    random_int =
        lowest + int (range * rand()/(RAND_MAX));
}
  //Output the winning entry.
  raffleFluff(35);
  cout << "The winner of the raffle is: " << endl;
  raffleFluff(35);
  cout << raffle[random_int] << endl;
  raffleFluff(35);
  cout << endl;

  //Pause for keystroke before ending program.
  system("pause");
  return 0;
}

void raffleFluff(int x) {
    int i = 0;
    while (i < x)
    {
        cout << "*";
        i++;
    }
    cout << endl;
    return;
}

