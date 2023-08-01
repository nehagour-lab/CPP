#include <iostream>

int main()
{

  std::cout << "Which day is today [1 : Monday,...,  7 : Sunday] : " << std::endl;
  int today, days_passed;
  std::cin >> today;

  if ((today < 1) || (today > 7))
  {
    std::cout << today << " is not a valid day. Bye!" << std::endl;
    return 0; 
  }

  std::cout << "How many days have passed up to today : " << std::endl;
  std::cin >> days_passed;

  if (today == 1)
  {
    std::cout << "Today is Monday" << std::endl;
  }
  else if (today == 2)
  {
    std::cout << "Today is Tuesday" << std::endl;
  }
  else if (today == 3)
  {
    std::cout << "Today is Wednesday" << std::endl;
  }
  else if (today == 4)
  {
    std::cout << "Today is Thursday" << std::endl;
  }
  else if (today == 5)
  {
    std::cout << "Today is Friday" << std::endl;
  }
  else if (today == 6)
  {
    std::cout << "Today is Saturday" << std::endl;
  }
  else
  {
    std::cout << "Today is Sunday" << std::endl;
  }


  int normalized_diff = (days_passed % 7);
  int day_in_the_past = today - normalized_diff;
  if (day_in_the_past < 0)
  {
    day_in_the_past += 7;
  }

  std::cout << "If we went " << days_passed << " days in the past we would hit a ";
  if (day_in_the_past == 1)
  {
    std::cout << "Monday" << std::endl;
  }
  else if (day_in_the_past == 2)
  {
    std::cout << "Tuesday" << std::endl;
  }
  else if (day_in_the_past == 3)
  {
    std::cout << "Wednesday" << std::endl;
  }
  else if (day_in_the_past == 4)
  {
    std::cout << "Thursday" << std::endl;
  }
  else if (day_in_the_past == 5)
  {
    std::cout << "Friday" << std::endl;
  }
  else if (day_in_the_past == 6)
  {
    std::cout << "Saturday" << std::endl;
  }
  else
  {
    std::cout << "Sunday" << std::endl;
  }

  return 0;
}
