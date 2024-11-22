#include <iostream>
#include "record.h"

// Returns the key of this record -- just the name.
std::string Record::get_key() const {
    return name;
}

// Creates a new record object with the given fields.
Record::Record(const std::string& name, int id, int age):
              name(name), ID_number(id), age(age) {}

// Determines if two records have the same values
bool Record::operator==(const Record& other) const {
    return name == other.name 
           && ID_number == other.ID_number
           && age == other.age;
}

bool Record::operator!=(const Record& other) const {
    return !(*this == other);
}

// Represents an empty slot in the table
const Record Record::EMPTY{"EMPTY", -1, -1};

std::ostream& operator<<(std::ostream& os, const Record& rec) {
    os << rec.name << ", " << rec.ID_number << ", " << rec.age;
    return os;
}
