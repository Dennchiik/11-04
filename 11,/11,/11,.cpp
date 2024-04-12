//перше завдання
/*#include <iostream>
#include <fstream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {}

    friend ostream& operator<<(ostream& out, const Fraction& frac) {
        out << frac.numerator << "/" << frac.denominator;
        return out;
    }

    friend istream& operator>>(istream& in, Fraction& frac) {
        in >> frac.numerator;
        in.ignore();
        in >> frac.denominator;
        return in;
    }

    void saveToFile(ofstream& file) const {
        file.write(reinterpret_cast<const char*>(&numerator), sizeof(numerator));
        file.write(reinterpret_cast<const char*>(&denominator), sizeof(denominator));
    }

    void loadFromFile(ifstream& file) {
        file.read(reinterpret_cast<char*>(&numerator), sizeof(numerator));
        file.read(reinterpret_cast<char*>(&denominator), sizeof(denominator));
    }
};

int main() {
    Fraction fractions1[4] = {Fraction(1, 2), Fraction(3, 4), Fraction(5, 6), Fraction(7, 8)};
    ofstream outFile("fractions.bin", ios::binary);

    if (!outFile) {
        cerr << "Ошибка открытия файла для записи" << endl;
        return 1;
    }

    for (const auto& frac : fractions1) {
        frac.saveToFile(outFile);
    }

    outFile.close();

    Fraction fractions2[4];
    ifstream inFile("fractions.bin", ios::binary);

    if (!inFile) {
        cerr << "Ошибка открытия файла для чтения" << endl;
        return 1;
    }

    for (auto& frac : fractions2) {
        frac.loadFromFile(inFile);
    }

    inFile.close();

    cout << "Считанные из файла дроби:" << endl;
    for (const auto& frac : fractions2) {
        cout << frac << endl;
    }

    return 0;
}
*/
//друге завдання
/*#include <iostream>
#include <fstream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {}

    friend ostream& operator<<(ostream& out, const Fraction& frac) {
        out << frac.numerator << "/" << frac.denominator;
        return out;
    }

    friend istream& operator>>(istream& in, Fraction& frac) {
        in >> frac.numerator;
        in.ignore();
        in >> frac.denominator;
        return in;
    }

    void saveToFile(ofstream& file) const {
        file.write(reinterpret_cast<const char*>(&numerator), sizeof(numerator));
        file.write(reinterpret_cast<const char*>(&denominator), sizeof(denominator));
    }

    void loadFromFile(ifstream& file) {
        file.read(reinterpret_cast<char*>(&numerator), sizeof(numerator));
        file.read(reinterpret_cast<char*>(&denominator), sizeof(denominator));
    }
};

int main() {
    Fraction fractions1[4] = {Fraction(1, 2), Fraction(3, 4), Fraction(5, 6), Fraction(7, 8)};
    ofstream outFile("fractions.bin", ios::binary);

    if (!outFile) {
        cerr << "Ошибка открытия файла для записи" << endl;
        return 1;
    }

    for (const auto& frac : fractions1) {
        frac.saveToFile(outFile);
    }

    outFile.close();

    Fraction fractions2[4];
    ifstream inFile("fractions.bin", ios::binary);

    if (!inFile) {
        cerr << "Ошибка открытия файла для чтения" << endl;
        return 1;
    }

    for (auto& frac : fractions2) {
        frac.loadFromFile(inFile);
    }

    inFile.close();

    cout << "Считанные из файла дроби:" << endl;
    for (const auto& frac : fractions2) {
        cout << frac << endl;
    }

    return 0;
}
*/