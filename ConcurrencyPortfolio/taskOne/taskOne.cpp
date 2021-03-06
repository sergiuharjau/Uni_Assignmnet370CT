#include <iostream>
#include <cmath>
#include <cstdlib>
#include <thread>
#include <vector>
#include <string>
#include <fstream>
#include <iterator>

void thread1(std::string whatever)
{
  std::cout << "thread says: " << whatever << std::endl;
}

std::vector <std::string> readPoem()
{
  std::ifstream file("poem.txt");
  std::string str;
  std::vector <std::string> lines;
 
  while (std::getline(file, str))
  {
	  if(str.size() > 0)
	    lines.push_back(str);
  }

  return lines;
}

int main (void){

  std::vector<std::string> poem = readPoem();

  std::cout << "In vector:\n" << std::endl;
  for (std::string elem: poem)
  {
    std::cout << elem << std::endl;
  }

  return 0;
}
