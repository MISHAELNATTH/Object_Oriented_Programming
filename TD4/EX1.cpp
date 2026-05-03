#include <iostream>
#include <cstddef> // for size_t

class Mon_vecteur {
    size_t size_ = 0; 
    float* tab_;

public:
    // Constructor
    Mon_vecteur(const int& size);
    
    // Destructor
    ~Mon_vecteur();

    // Methods
    size_t get_size() const;
    float& operator()(const size_t& n) const; 
    float operator*(const Mon_vecteur& v); 
    Mon_vecteur& operator*=(const float& val); 
    
    // Friend function for stream output
    friend std::ostream& operator<<(std::ostream& os, const Mon_vecteur& v);
};

// --- Method Definitions ---

// Constructor implementation
Mon_vecteur::Mon_vecteur(const int& size): size_(size), tab_(new float[size]) {
}

// Destructor: Frees the dynamically allocated memory
Mon_vecteur::~Mon_vecteur() {
    delete[] tab_;
}

// Returns the size of the vector
size_t Mon_vecteur::get_size() const {
    return size_;
}

// Overloads operator() to access and modify the nth element
float& Mon_vecteur::operator()(const size_t& n) const {
    return tab_[n];
}

// Overloads operator* to calculate the dot product (produit scalaire) of two vectors
float Mon_vecteur::operator*(const Mon_vecteur& v) {
    float result = 0.0f;
    for (size_t i = 0; i < size_; ++i) {
        result += tab_[i] * v.tab_[i];
    }
    return result;
}

// Overloads operator*= to multiply the vector by a scalar
Mon_vecteur& Mon_vecteur::operator*=(const float& val) {
    for (size_t i = 0; i < size_; ++i) {
        tab_[i] *= val;
    }
    return *this;
}

// Overloads operator<< to print the vector
std::ostream& operator<<(std::ostream& os, const Mon_vecteur& v) {
    for (size_t i = 0; i < v.size_; ++i) {
        os << v.tab_[i];
        if (i < v.size_ - 1) {
            os << " "; // Adds a space between elements for readability
        }
    }
    return os;
}

// --- Main Program ---

int main() {
    constexpr size_t size = 3; // [cite: 22]
    Mon_vecteur v1(size); // [cite: 23]
    Mon_vecteur v2(size); // [cite: 24]

    // Populate the vectors
    for (size_t i = 0; i < v1.get_size(); ++i) { // [cite: 25]
        v1(i) = static_cast<float>(i);           // [cite: 27]
        v2(i) = static_cast<float>(i + 1);       // [cite: 28, 29]
    }

    // Display expected outputs
    std::cout << "get_size: " << v1.get_size() << std::endl;             // [cite: 30]
    std::cout << "V1: " << v1 << " V2: " << v2 << std::endl;             // [cite: 31]
    std::cout << "V1*V2: " << v1 * v2 << std::endl;                      // [cite: 32]
    
    v2 *= 2.0f;                                                          // [cite: 33]
    std::cout << "V2*2: " << v2 << std::endl;                            // [cite: 35]

    return 0;
}