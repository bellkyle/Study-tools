#include "study.h"
#include <iostream>
#include <fstream>

int main()
{
  Study study;
  string filename;
  cout << "Enter the name of the file you would like to use" << endl;
  cin >> filename;
  cin.ignore();
  study.read(filename);
  study.shuffleTerms();
  study.quiz();
  return 0;
}
