#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class keyTerms
{
public:
  keyTerms();
  ~keyTerms();

  void setDefinition(const string defn);
  void setKeyWord(const string word);

  string getDefinition();
  string getKeyWord();
  void print();
  void read(ifstream &din);
private:
  string definition;
  string keyWord;
};
