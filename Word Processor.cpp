#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


int main() {

  ifstream infile("word.in");
  ofstream outfile("word.out");

  int word;
  int chars;
  infile>>word;
  infile>>chars;
  vector<string>words(word);
  for(int x = 0; x<word; x++){
    infile>>words[x];
  }

  int x = 0;
  int line = 0;
  for(int x = 0; x<word; x++){
    outfile<<words[x];
    line += words[x].size();
  
    if(chars < line + words[x+1].size()){
      outfile<<endl;
      line = 0;
    }
    else{
      outfile<<" ";
    }
  }

}