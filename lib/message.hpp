#pragma once
#include <string>

namespace MagazinSpace {

enum LevelsOfImportantMessage {
    UnImportant = -1,
    SomeImportant,
    Important,
    VeryImportant,
};

struct Message {
    Message(const std::string& text, LevelsOfImportantMessage lvl) 
    : text_(text), level_(lvl) {}

    std::string text_;
    LevelsOfImportantMessage level_;
};

}