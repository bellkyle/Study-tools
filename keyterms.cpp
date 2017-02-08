#include "keyterms.h"
#include <iostream>
#include <fstream>
using namespace std;

keyTerms::keyTerms()
{
  definition = "";
  keyWord = "";
}

keyTerms::~keyTerms()
{

}

void keyTerms::setDefinition(const string defn)
{
  definition = defn;
}

void keyTerms::setKeyWord(const string word)
{
  keyWord = word;
}

string keyTerms::getDefinition()
{
  return definition;
}

string keyTerms::getKeyWord()
{
  return keyWord;
}

void keyTerms::print()
{
  cout << definition << endl;
  cout << keyWord << endl;
}

void keyTerms::read(ifstream &din)
{
  getline(din, keyWord);
  getline(din, definition);
}
