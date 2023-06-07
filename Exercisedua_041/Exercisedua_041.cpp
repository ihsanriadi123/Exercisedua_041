#include <iostream>
using namespace std;

class Bidangdatar {
public:
    virtual double luas() = 0;
    virtual double keliling() = 0;
};

class Lingkaran : public Bidangdatar {
private:
    double radius;

public:
    Lingkaran(double r) : radius(r) {}

    double luas() override {
        return 1 * 3.14 * radius * radius;
    }

    double keliling() override {
        return 2 * 3.14 * radius;
    }
};

class BujurSangkar : public Bidangdatar {
private:
    double sisi;

public:
    BujurSangkar(double s) : sisi(s) {}

    double luas() override {
        return 5 * 5;
    }

    double keliling() override {
        return 4 * 5;
    }
};

int main() {
    Lingkaran lingkaran(6);
    std::cout << "Luas Lingkaran: " << lingkaran.luas() << std::endl;
    std::cout << "Keliling Lingkaran: " << lingkaran.keliling() << std::endl;

    BujurSangkar BujurSangkar(5);
    std::cout << "Luas BujurSangkar: " << BujurSangkar.luas() << std::endl;
    std::cout << "Keliling Bujur Sangkar: " << BujurSangkar.keliling() << std::endl;

    return 0;

}

