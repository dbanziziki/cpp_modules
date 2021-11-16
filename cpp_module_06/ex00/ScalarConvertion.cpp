#include "ScalarConvertion.hpp"

#include <cmath>

ScalarConvertion::~ScalarConvertion() {}

ScalarConvertion::ScalarConvertion(std::string const &value) : _value(value){};

ScalarConvertion::ScalarConvertion(ScalarConvertion const &src) {
    this->_value = src.getValue();
}

ScalarConvertion &ScalarConvertion::operator=(ScalarConvertion const &rhs) {
    this->_value = rhs.getValue();
    return *this;
}

std::string ScalarConvertion::getValue() const { return this->_value; }

char ScalarConvertion::toChar() const {
    int res;

    try {
        res = std::stoi(this->_value);
        if (res < 0 || res > 255) {
            throw ScalarConvertion::NondisplayableException();
        }
    } catch (...) {
        throw ScalarConvertion::ImpossibleConvertionException();
    }
    if (!isprint(res)) {
        throw ScalarConvertion::NondisplayableException();
    }
    return static_cast<char>(res);
}

int ScalarConvertion::toInt() const {
    int res;

    try {
        res = std::stoi(this->_value);
    } catch (...) {
        throw ScalarConvertion::ImpossibleConvertionException();
    }
    return res;
}

double ScalarConvertion::toDouble() const {
    double res;

    try {
        res = std::stod(this->_value);
    } catch (...) {
        throw ScalarConvertion::ImpossibleConvertionException();
    }
    return res;
}

float ScalarConvertion::toFloat() const {
    float res;

    try {
        res = std::stof(this->_value);
    } catch (...) {
        throw ScalarConvertion::ImpossibleConvertionException();
    }
    return res;
}

std::ostream &operator<<(std::ostream &o, ScalarConvertion const &rhs) {
    o << "char: ";
    try {
        char c = rhs.toChar();
        o << "'" << c << "'" << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    o << "int: ";
    try {
        o << rhs.toInt() << std::endl;
    } catch (const ScalarConvertion::ImpossibleConvertionException &e) {
        std::cerr << e.what() << std::endl;
    }
    o << "float: ";
    try {
        float f = rhs.toFloat();
        if (std::isnan(f) && std::signbit(f)) {
            o << "-";
        }
        o << f;
        if (!std::isnan(f) && f - (int)f == 0) {
            o << ".0";
        }
        o << "f" << std::endl;
    } catch (const ScalarConvertion::ImpossibleConvertionException &e) {
        std::cerr << e.what() << std::endl;
    }
    o << "double: ";
    try {
        double d = rhs.toDouble();
        if (std::isnan(d) && std::signbit(d)) {
            o << "-";
        }
        o << d;
        if (!std::isnan(d) && d - (int)d == 0) {
            o << ".0";
        }
    } catch (const ScalarConvertion::ImpossibleConvertionException &e) {
        std::cerr << e.what() << std::endl;
    }
    return o;
}