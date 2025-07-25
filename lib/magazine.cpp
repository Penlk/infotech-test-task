#include <fstream>
#include <string>
#include <chrono>
#include <iomanip>
#include "magazine.hpp"

using namespace MagazinSpace;

Magazin::Magazin(const std::string& name_magazin, LevelsOfImportantMessage def_level) 
    : magazin_(name_magazin), default_level_(def_level) {
}

void Magazin::WriteMessage(const Message& message) {
    if (message.level_ < this->default_level_) {
        return;
    }

    // if (!file.is_open()) {
    //     return false;
    // }

    auto time_pointer = std::chrono::system_clock::now();
    auto time_posix = std::chrono::system_clock::to_time_t(time_pointer);
        
    this->magazin_ << "\"" << message.text_ << "\"" << std::endl;
    this->magazin_ << "Level: " << message.level_ << std::endl;
    this->magazin_ << "Time: " << std::put_time(std::localtime(&time_posix), "%c") << std::endl;

    this->magazin_ << std::endl;
}

void Magazin::SetDefaultImportantLevel(LevelsOfImportantMessage level) {
    default_level_ = level;
}