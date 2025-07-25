#include <iostream>
#include "magazine.hpp"

int main(int argc, char** argv) {
    MagazinSpace::Magazin obj(argv[1], MagazinSpace::LevelsOfImportantMessage::Important);
    obj.WriteMessage(
        MagazinSpace::Message(
            "Hello from linux", MagazinSpace::LevelsOfImportantMessage::Important
        )
    );
}
