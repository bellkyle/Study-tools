#include "keyterms.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Study
{
public:
  Study();
  ~Study();

  void print();
  void read(string fileName);

  void shuffleTerms();

private:
  static const int SIZE = 100;
  keyTerms terms[SIZE];
  int count;
};
