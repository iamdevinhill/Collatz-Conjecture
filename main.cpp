// Devin Hill
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int Determine_Sequence(long int value);

int main() {

  // variables
  string filename;
  string filenameext;
  ifstream input_file;
  long int filenumber;
  int steps;

  // prompt
  cout << "Enter a file to process: ";
  getline(cin, filename, '.');
  getline(cin, filenameext);
  cout << endl;

  // open file
  input_file.open(filename + "." + filenameext);

  // check if file works
  if (!input_file){
    cout << "The file " << filename + "." + filenameext << " does not exist! Goodbye!" << endl;
    return 0;
    } else 
  cout << endl;

  string line;
  input_file >> filenumber;
   int i = 0;

  
  // loop thru file
  while (input_file){
    i++;
    
  steps = Determine_Sequence(filenumber);
    
    cout << setw(12) << filenumber;
    
    input_file >> filenumber;
    
    cout << setw(7) << line;

    cout << steps;
    
    if (i == 1){
      cout << endl;
      i = 0;
    } 
  }


  cout << endl;
  input_file.close();  
  
}

// function
int Determine_Sequence(long int value){
  int count = 1;
  
  while(value != 1){
    
    if (value % 2 == 0) {
     value = value / 2;
      
    } else if (value % 2 != 0){
      value = (value * 3) + 1 ;
      
    } count++;
    
    } return count;
    
}