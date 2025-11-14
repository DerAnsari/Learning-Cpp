#include <iostream>
#include <vector>
std::vector<std::string> url_parts(std::string address) {
  if (address.find("://") != std::string::npos) {
    size_t index = address.find(":");
    address = address.erase(0, index + 3);
  }
  std::vector<std::string> url{};
  while (address.find(".") != std::string::npos) {
    size_t index = address.find(".");
    url.push_back(address.substr(0, index));
    address = address.erase(0, index + 1);
  }
  url.push_back(address);
  return url;
}
int main() {
  std::string url{};
  std::cout << "Enter url:   ";
  std::cin >> url;
  auto parts = url_parts(url);
  for (size_t i = 0; i < parts.size(); i++)
    std::cout << parts[i] << " ";
}
