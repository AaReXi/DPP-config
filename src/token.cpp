// token.cpp
#include "token.hpp"
#include <nlohmann/json.hpp>
#include <fstream>
#include <iostream>

using json = nlohmann::json;

std::string get_token() {
    std::ifstream token_file("../TOKEN.json"); // relative to DISCORD/src/
    if (!token_file.is_open()) {
        std::cerr << "Error: Could not open TOKEN.json file!" << std::endl;
        return "";
    }
    
    json j;
    try {
        token_file >> j;
    } catch (const json::parse_error& e) {
        std::cerr << "Error parsing TOKEN.json: " << e.what() << std::endl;
        return "";
    }
    token_file.close();
    
    if (!j.contains("token") || !j["token"].is_string()) {
        std::cerr << "Error: TOKEN.json does not contain a valid 'token' field!" << std::endl;
        return "";
    }
    
    return j["token"].get<std::string>();
}
