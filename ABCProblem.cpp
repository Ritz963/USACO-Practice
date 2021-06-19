#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

  vector<int>nums;
  int temp;

  for(int x = 0; x<7; x++){
    cin>>temp;
    nums.push_back(temp);
  }

  sort(nums.begin(), nums.end());

  if(nums[0] + nums[1] + nums[2] == nums[6]){
    cout<<nums[0]<<" "<<nums[1]<<" "<<nums[2];
  }
  else{
    cout<<nums[0]<<" "<<nums[1]<<" "<<nums[3];
  }

}