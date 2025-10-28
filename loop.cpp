// DRIVER INSURANCE ELIGIBILITY without using logical operators && and ||
#include <iostream>
int main()
{
  char martialstatus, gender;
  int age;
  std::cout << "Enter martial status:" << std::endl
            << "M - for married person" << std::endl
            << "U -for unmarried person." << std::endl;
  std::cin >> martialstatus;
  std::cout << "Enter gender:" << std::endl
            << "m -for male" << std::endl
            << "f -for female" << std::endl;
  std::cin >> gender;
  std::cout << "Enter age:" << std::endl;
  std::cin >> age;
  if (martialstatus == 'M')
  {
    std::cout << "Driver is insured.";
  }
  else if (gender == 'm')
  {
    if (age > 30)
    {
      std::cout << "The driver is insured.";
    }
    else
    {
      std::cout << "Driver  is not insured.";
    }
  }
  else if (gender == 'f')
  {
    if (age > 25)
    {
      std::cout << "Driver is insured";
    }
    else
    {
      std::cout << "Driver is not insured";
    }
  }
  else
  {
    std::cout << "Driver is not insured.";
  }
  return 0;
}
