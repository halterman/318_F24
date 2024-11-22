#include <vector>
#include <functional>


// A probing hash table.
// Uses linear probing, with f(i) = i.
// K is the key type.
// T is the value type.
template <typename K, typename T>
class HashTable {
    std::vector<T> table;   // Stores the values
    size_t used;            // Number of occupied slots
    // Hash function
    std::function<size_t(const K&, size_t)> hash;
    const T empty;

public:
    // Initializes a new, empty hash table.
    // size : the physical size of the hash table's array.
    // empty: an empty item object.
    // h    : the hash function to use.
    HashTable(size_t size, 
              const T& empty, 
              std::function<size_t(const K&, size_t)> h):
       table(size, empty), // Fills the table with empty values
       used(0),  // No slots currently used 
       hash(h),  // Establish the hash function
       empty(empty) // Note the empty item value
       {}

    // Inserts a new item into the hash table, if possible.
    // Returns true if successful; otherwise, returns false.
    // Uses linear probing with f(i) = i.
    bool insert(const T& item) {
        size_t n = table.size();
        size_t index = hash(item.get_key(), n);
        // Find open slot in the table
        int count = 0;
        while (count < n && table.at(index) != empty) {
            index = (index + 1) % n;
            count++;
        }
        // Were any slots available?
        if (count < n) {   
            table[index] = item;
            used++;
            return true;   // Successful insertion
        }
        return false;  // Table full, cannot insert the item
    }

    // Returns an item with a key that matches the key 
    // parameter. Returns the empty object if the key 
    // matches no item in the table.
    T find(const K& key) {
        size_t n = table.size();
        size_t index = hash(key, n);
        int probes = 0;   // To see how many probes
        // Find index or fail
        while (table.at(index) != empty 
                && table.at(index).get_key() != key) {
            index = (index + 1) % n;
            probes++;
        }
        std::cout << "probes: " << probes << "   ";
        return table[index];
    }

    // The current load factor of the hash table.
    // A well-performing hash table should maintain a 
    // load factor less or equal to 0.5.
    double load_factor() const {
        return (double)(table.size() - used)/table.size();
    }

    // Print the contents of the table for debugging purposes.
    // Ignores empty slots.
    void dump() const {
        for (size_t i = 0; i < table.size(); i++) {
            // Ignore empty slots
            if (table[i] != empty) {
                std::cout << i << ": " << table[i] << '\n';
            }
        }
    }
};


