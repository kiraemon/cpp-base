#include <iostream>
#include <string>
#include <vector>

int main() {
  int N = 0;
  std::cin >> N;

  std::vector<int> outputs;
  for (int i = 0; i < N; ++i) {
    int input = 0;
    std::cin >> input;
    outputs.push_back(input);
  }

  for (auto& output : outputs) {
    std::cout << output << " ";
  }

  std::cout << std::endl;
}