#include <iostream>

class Foo
{
  int* p;
  public:
    Foo(int* p):p(p) {}
    int value() { return *p; }
};

int main()
{
  int i = 42;
  int* p = &i;
  Foo f(p);
  std::cout << f.value() << std::endl;
  i++;
  std::cout << f.value() << std::endl;
}

