#include "BitcoinExchange.hpp"
#include <fstream>
#include <string>
#include <iostream>

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::~BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(const std::string& file){
    std::string line;
    std::ifstream streamIn(file);
    if (!streamIn.good())
    {
        std::cerr << file << ": Invalid file" << std::endl;
        return;
    }
    std::getline(streamIn, line);
    while (std::getline(streamIn, line)){
        size_t find = line.find(',');
        if (find != std::string::npos){
            std::string key = line.substr(0,find);
            std::string val = line.substr(find + 1, line.length());
            this->data[key] = std::stof(val);
        }
    }
    streamIn.close();
}
BitcoinExchange::BitcoinExchange(BitcoinExchange& oth){
    this->data = oth.data;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &oth){
    this->data = oth.data;
    return *this;
}

void BitcoinExchange::btc(std::string& input){
    std::string line;
    std::ifstream streamIn(input);
    if (!streamIn.good())
    {
        std::cerr << input << ": Invalid file" << std::endl;
        return;
    }
    std::getline(streamIn, line);
    while (std::getline(streamIn, line)){
        size_t find = line.find('|');
        if (find != std::string::npos){
            std::string key = line.substr(0,find - 1);
            std::string val = line.substr(find+1, line.length());
            std::map<std::string, float>::iterator iterator_start = this->data.begin();
            std::map<std::string, float>::iterator iterator_end = this->data.end();
            while (iterator_start++ != iterator_end && iterator_start->first < key );
            if (iterator_start == iterator_end){
                std::cerr << "Error: No data found" << std::endl;
                return;
            }
            std::cout << key << " => " << iterator_start->second << " = " << iterator_start->second * std::stof(val) << std::endl;
            
        }
    }
    streamIn.close();
	return;
}