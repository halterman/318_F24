#pragma once

#include <string>

// Information about an employee
struct Record {
    std::string name;   // Record key for lookup is name field
    int ID_number;
    int age;

    Record(const std::string& name, int id, int age);
    std::string get_key() const;
    bool operator==(const Record& other) const;
    bool operator!=(const Record& other) const;

    // Represents an empty slot in the table.
    // This is shared among all instances.
    static const Record EMPTY;
};

// Prints a record
std::ostream& operator<<(std::ostream& os, const Record& rec);


