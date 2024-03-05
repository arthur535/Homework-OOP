cjvdjskaxlnasx
#include <iostream>
class Employee {
public:
    static long emp_id;
    Employee() {++emp_id;}
    ~Employee() = default;
public:
    void set_data(std::string _name) {
        name = _name;
    }
    std::string put_data() {
        return name;
    }
private:
    std::string name;
}; long Employee::emp_id = 0;

Employee* array_creation_and_fill(const int size) {
    Employee* employee = new Employee[size];
    for (int i = 0; i < size; ++i) {
        std::string tmp_str;
        std::cout << "please set " << i+1 << " employee name: ";
        std::cin >> tmp_str;
        employee[i].set_data(tmp_str);
    }
    return employee;
}
void print_employees(Employee* employee, const int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Employee " << i + 1 << " name is " << employee[i].put_data() << std::endl;
    }
}
int main() {
    const int size = 2;
    Employee* employee = array_creation_and_fill(size);
    print_employees(employee, size);
}
