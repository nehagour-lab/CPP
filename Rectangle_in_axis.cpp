#include <iostream>
 using namespace std;
  int main() { 
  cout <<"Welcome to territory control. Please type in your x and y location\n";
  int rectangle_width {20};
  int rectangle_height{10};
  int x {};
  int y {};
  cout <<"Type in your x location \n";
  cin >>x;
  cout <<"Type in your y location \n";
  cin >>y;
  if ((x<= rectangle_width && y <= rectangle_height) || (x<= rectangle_height && y<= rectangle_width)){
      cout<<"you are completely surrounded! Dont Move!";
  } else {
      cout<<"You are out of Reach!";
  }

  }
