// Implementation of an anonymous algorithm from the discussions of
// HackerRank's "Count Triples" problem.
//
// Code is by YuJin Kim. Copyright (C) 2020.

#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    // Set input source.
    std::ifstream __real_input("/Users/yujinkim/Documents/count-triplets-001/count-triplets-001/testcase004.txt");
    //std::istream &input = std::cin;
    std::istream &input = __real_input;
    std::ostream &output = std::cout;

    long ratio;

    // Read the first line.
    {
        size_t n_words;
        input >> n_words;
        input >> ratio;
    }

    // Read the next n_words words and then sort out the parsed numbers.
    std::vector<long> numbers;
    std::unordered_map<long, size_t> nfreqs;
    std::map<std::pair<long, long>, size_t> restfreqs;
    {
        for (long number; input >> number; numbers.push_back(number));
        
        output << "Admitted " << numbers.size() << " numbers.\n";
        
        for (auto it = numbers.crbegin(); it != numbers.crend(); ++it);
    }

    return 0;
}
