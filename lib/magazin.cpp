#include <fstream>
#include <string>
#include <chrono>
#include <iomanip>
#include "magazin.hpp"

using namespace MagazinSpace;

Magazin::Magazin(const std::string& name_magazin, LevelsOfImportantMessage def_level) 
    : name_magazin_(name_magazin), default_level_(def_level) {
}

void Magazin::WriteMessage(const Message& message) {
    //По-хорошему нужно хранить внутри файловый поток, но хз

    if (message.level_ < this->default_level_) {
        return;
    }

    std::ofstream file(this->name_magazin_);

    // if (!file.is_open()) {
    //     return false;
    // }

    auto time_pointer = std::chrono::system_clock::now();
    auto time_posix = std::chrono::system_clock::to_time_t(time_pointer);
        
    file << "\"" << message.text_ << "\"" << std::endl;
    file << "Level: " << message.level_ << std::endl;
    file << "Time: " << std::put_time(std::localtime(&time_posix), "%c") << std::endl;

    file << std::endl;
}

void Magazin::SetDefaultImportantLevel(LevelsOfImportantMessage level) {
    default_level_ = level;
}