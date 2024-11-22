#include <iostream>
#include "record.h"
#include "hashtable.h"
#include "randrange.h"

// Hash PJW adapted from Aho, Sethi, and Ullman
size_t hash_pjw(const std::string& s, size_t table_size) {
    unsigned h = 0, g;
    for (const char *p = s.c_str(); *p; p++ ) {
        h = (h << 4) + (*p);
        if ((g = h & 0xf0000000)) {
            h ^= g >> 24;
            h ^= g;
        }
    }
    return h % table_size;   
}


// Hash djb2
size_t hash_djb2(const std::string& key, size_t table_size) { 
    unsigned long hash = 5381; 
    char c; 
    const char *str = key.c_str();
    while ((c = *str++)) { 
        hash = ((hash << 5) + hash) + c;
    }
    return hash % table_size; 
}

size_t hash_bad(const std::string& key, size_t table_size) { 
    return 10;
}


// Creates a record filled with random values.
Record make_random_record() {
    std::string name = "";
    int name_len = randrange(3, 20);
    for (size_t i = 0; i < name_len; i++) {
        name += static_cast<char>('A' + randrange(0, 26));
    }
    return {name, randrange(100, 1000), randrange(18, 90)};
}


int main(void) {
    //HashTable<std::string, Record> ht(10'007, Record::EMPTY, hash_pjw);
    HashTable<std::string, Record> ht(10'007, Record::EMPTY, hash_bad);
    // Insert a bunch of random records first
    for (int i = 0; i < 5000; i++) {
        //Record rec = make_random_record();
        ht.insert(make_random_record());
    }
    // Then insert some known records
    ht.insert({"Fred", 100, 25}); 
    ht.insert({"Wilma", 105, 26}); 
    ht.insert({"Barney", 102, 24}); 
    ht.insert({"Betty", 225, 23}); 
    ht.dump();
    std::cout << "-----------------------\n";
    std::cout << "Load factor: " << ht.load_factor() << '\n';
    // Search for the know records
    std::cout << ht.find("Fred") << '\n';
    std::cout << ht.find("Wilma") << '\n';
    std::cout << ht.find("Barney") << '\n';
    std::cout << ht.find("Betty") << '\n';

    std::cout << "Program complete\n";
}
