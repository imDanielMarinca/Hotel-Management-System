#include <iostream>
#include <vector>
#include <string>

// Ideas:
// - Print out all the rooms. If the room is already taken, cross it out with ---.
// - Add extra optional costs, like room service, food, pool and gym access, etc.
// - Use files for passwords and as a way to save the room data.

class Room {
    public:
        // Constructor
        Room(int room_number, int capacity, double price) {
            room_number_ = room_number;
            capacity_ = capacity;
            price_ = price;
        }
        
        // Accessors
        int RoomNumber() { return room_number_; }
        int Capacity()   { return capacity_;    }
        double Price()   { return price_;       }
        
        // Mutators
        void setRoomNumber(int room_number) { room_number_ = room_number; }
        void setCapacity(int capacity)      { capacity_    = capacity;    }
        void setPrice(double price)         { price_       = price;       }
        
        // Checks if the desired number of guests fits the capacity of the room
        bool NumberOfGuestsFitsRoomCapacity(int guests) {
            if (guests <= capacity_) return true;
            else                     return false;
        }

    private:
        int room_number_;
        int capacity_;
        double price_;
};

// Prints the rooms available and unavailable to the console.
void PrintRooms() {
    int count = 500;

    for (int i = 0; i < 5; i++) {
        for (int j = count; j < count + 7; j++) {
            std::cout << j << " ";
        }

        count = count - 100;
        std::cout << '\n';
    }
}

int main() {
    
    // A vector of rooms, representing all hotel rooms (available and unavailable).
    std::vector<Room> rooms;
    
    int count = 500;

    // Populates the vector with the appropriate room number, capacity, and price of each room.
    for (int i = 0; i < 5; i++) {
        for (int j = count; j < count + 7; j++) {
            std::string room_number = std::to_string(count);

            if (room_number.at(0) == 5) {
                Room room(j, 6, 540.00);
                rooms.push_back(room);
            } else if (count == 402 || count == 403 || count == 404 ||
                       count == 302 || count == 303 || count == 404 ||
                       count == 201 || count == 205) {
                
                Room room(j, 4, 430.50);
                rooms.push_back(room);
            } else {
                Room room(j, 2, 275.85);
                rooms.push_back(room);
            }
        }

        count = count - 100;
    }
    
    std::string user_name;
    std::string temp_user_name;
    int user_password;
    int temp_password;
    
    
    std::cout << "WAYFARE HOTEL AND RESORTS\n";
    std::cout << "   Management System     \n";
    std::cout << "-------------------------\n\n\n";
    
    std::cout << "1. Login\n";
    std::cout << "2. Signup\n";
    
    std::cout << "Select one (enter number): ";
    
    int selection;
    
    std::cin >> selection;
    
    // Implement the rest of the login setups and checks here...
    
    system("clear");
    
    
    
    return 0;
}
