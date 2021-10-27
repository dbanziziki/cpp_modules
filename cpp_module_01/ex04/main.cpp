#include <fstream>
#include <iostream>

std::string find_and_replace(std::string line, std::string s1, std::string s2) {
  std::size_t found;

  (void)s2;
  found = line.find(s1);
  if (found != std::string::npos) {
    line.erase(found, s1.length());
    line.insert(found, s2);
  }
  return (line);
}

int main(int argc, char const *argv[]) {
  if (argc != 4) return (1);
  std::string s1 = argv[2];
  std::string s2 = argv[3];
  std::string file = argv[1];
  std::string line;
  std::ifstream ifs(file);
  std::ofstream ofs(file.append(".replace"));

  if (!ifs.good()) {
    std::cout << "Failed to open the file" << std::endl;
    return (1);
  }
  if (!ofs.good()) {
    std::cout << "Failed to open the file" << std::endl;
    return (1);
  }
  while (!ifs.eof()) {
    std::getline(ifs, line);
    std::string new_line = find_and_replace(line, s1, s2);
    ofs << new_line << std::endl;
  }
  ifs.close();
  ofs.close();
  return 0;
}
