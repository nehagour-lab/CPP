#include <iostream>
using namespace std;
int main() {
int day{};
    cout<<"Which day is today [1: Monday,..., 7: Sunday] : \n";
    cin>>day;
    switch (day)
    {
    case 1:
          cout<<"Today is Monday. Let's have fun.\n";
      break;
    case 2:
          cout<<"Today is Tuesday.Let's have fun.\n";
      break;
    case 3:
          cout<<"Today is Wednesday.Let's have fun.\n";
      break;
    case 4:
          cout<<"Today is Thursday.Let's have fun.\n";
      break;
    case 5:
          cout<<"Today is Friday.Let's have fun.\n";
      break;
    case 6:
          cout<<"Today is Saturday.Let's have fun.\n";
      break;
    case 7:
          cout<<"Today is Sunday.Let's have fun.\n";
      break;
    default:
          cout<<day <<" is not valid day. Bye\n";
 
    }
  }
 
