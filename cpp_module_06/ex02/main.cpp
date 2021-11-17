#include <iostream>

class Base {
   public:
    virtual ~Base(){};
    Base(){};
    Base(Base const &) {}
    Base &operator=(Base const &) { return *this; }
};

class A : public Base {
   public:
    A() {}
    A(A const &) {}
    ~A() {}
    A &operator=(A const &) { return *this; }
};
class B : public Base {
   public:
    B() {}
    B(B const &) {}
    ~B() {}
    B &operator=(B const &) { return *this; }
};
class C : public Base {
   public:
    C() {}
    C(A const &) {}
    ~C() {}
    C &operator=(C const &) { return *this; }
};

Base *generate(void) {
    int seed = std::rand() % 3;
    switch (seed) {
        case (0):
            return new A();
            break;
        case (1):
            return new B();
            break;
        case (2):
            return new C();
            break;
        default:
            return NULL;
            break;
    }
}

void identify(Base *p) {
    if (dynamic_cast<A *>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B *>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C *>(p)) {
        std::cout << "C" << std::endl;
    }
}
void identify(Base &p) {
    Base temp;
    try {
        temp = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        return;
    } catch (const std::exception &e) {
        try {
            temp = dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
            return;
        } catch (const std::exception &e) {
            try {
                temp = dynamic_cast<C &>(p);
                std::cout << "C" << std::endl;
                return;
            } catch (const std::exception &e) {
                std::cerr << e.what() << std::endl;
            }
        }
    }
}

int main() {
    std::srand(time(NULL));
    std::cout << "---[dynamic_cast pointer]---" << std::endl;
    for (int i = 0; i < 10; i++) {
        Base *p = generate();
        identify(p);
        delete p;
    }
    std::cout << "---[dynamic_cast reference]---" << std::endl;
    for (int i = 0; i < 9; i++) {
        Base *p = generate();
        identify(*p);
        delete p;
    }
    return 0;
}
