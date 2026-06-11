namespace targets {
// TODO: Insert the code for the alien class here
class Alien {
public:
    // Constructor
    Alien(int x, int y) {
        x_coordinate = x;
        y_coordinate = y;
    }

    // Health member variable (starts at 3)
    int health{3};

    // Return the current health of the alien
    int get_health() const {
        return health;
    }

    // Decrement health by 1 when hit, ensuring it doesn't go below 0
    bool hit() {
        if (health > 0) {
            health--;
        }
        return true;
    }

    // Check if the alien is alive (health > 0)
    bool is_alive() const {
        return health > 0;
    }

    // Move the alien to new coordinates
    bool teleport(int new_x, int new_y) {
        x_coordinate = new_x;
        y_coordinate = new_y;
        return true;
    }

    // Determine if the alien is colliding with another alien
    bool collision_detection(const Alien& other) const {
        return x_coordinate == other.x_coordinate && y_coordinate == other.y_coordinate;
    }

    // Public coordinates for tracking position
    int x_coordinate;
    int y_coordinate;
};
}  // namespace targets
