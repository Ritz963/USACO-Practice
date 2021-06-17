#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;


int main() {

  ifstream infile("teleport.in");
  ofstream outfile("teleport.out");

  int a,b,x,y;
  infile>>a>>b>>x>>y;
  int ini = b-a;
  int oth;
  if(x<y){
    oth = abs((a-x)) + abs(b-y);
  }
  else if(y<x){
    oth = abs((a-y)) + abs(b-x);
  }

  outfile<<min(oth,ini);
}