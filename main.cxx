#include <iostream>
#include <fstream>
#include <json/json.h>

using namespace std;

int main() {
  Json::Value root;   // will contains the root value after parsing.
  Json::StyledStreamWriter writer;
  root["heartbeat"] = "60";
  std::ofstream test1("hello.json");
  writer.write(test1, root);
  std::cout << root << std::endl;
  test1.close();
  return 0;
}
