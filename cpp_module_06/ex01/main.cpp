#include <iostream>

struct Data {
    std::string name;
    std::string lastName;
    int age;
};

uintptr_t serialize(Data *ptr) { return reinterpret_cast<uintptr_t>(ptr); }

Data *deserialize(uintptr_t raw) { return reinterpret_cast<Data *>(raw); }

int main() {
    Data Tod;

    Tod.name = "Tod";
    Tod.lastName = "Bono";
    Tod.age = 78;
    uintptr_t raw = serialize(&Tod);
    Data *data = deserialize(raw);
    std::cout << data->name << " " << data->lastName << " " << data->age
              << std::endl;
    return 0;
}
