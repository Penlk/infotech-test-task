#include <string>
#include <fstream>
#include "message.hpp"

namespace MagazinSpace {

class Magazin {
public:
    Magazin(const std::string& name_magazin, LevelsOfImportantMessage def_level);

    void WriteMessage(const Message& message);

    void SetDefaultImportantLevel(LevelsOfImportantMessage level);
private:
    std::ofstream magazin_;
    LevelsOfImportantMessage default_level_;
};

}