#include "study.h"
#include <iostream>
#include <fstream>
using namespace std;

Study::Study()
{
  count = 0;
}

Study::~Study()
{

}

void Study::print()
{
  for(int i = 0; i < count; i++)
  {
    terms[i].print();
  }
}

void Study::read(string fileName)
{
  int index = 0;
  ifstream din;
  din.open(fileName.c_str());
  if(!din)
    cout << "Could not open" << fileName << endl;
  while(!din.eof())
  {
    terms[index].read(din);
    index++;
    if(!din.eof())
      count++;
  }
  din.close();
}

void Study::shuffleTerms()
{
  srand(time(0));
  for(int i = 0; i < count; i++)
  {
    int r1 = rand() % count;
    int r2 = rand() % count;
    keyTerms temp = terms[r1];
    terms[r1] = terms[r2];
    terms[r2] = temp;
  }
}

int main()
{
  string fileName = "defn.txt";
  Study study;
  study.read(fileName);
  study.print();
  study.shuffleTerms();
  study.print();
  return 0;
}
