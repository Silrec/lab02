#include <iostream>
#include <string>

// Main entry point
int
main(int argc, char** argv)
{
  // Read user name from stdin
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;
  // Print greeting to stdout
  std::cout << "Hello world from @" << name << std::endl;
  return 0;
}