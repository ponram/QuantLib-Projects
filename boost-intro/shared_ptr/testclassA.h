#ifndef TEST_CLASS_A
#define TEST_CLASS_A

#include <iostream>

class A
{
    private:
        double myVal_;

    public:
    A(const double& myVal):myVal_(myVal)
    {
        std::cout<<"Constructor of A called" << std::endl;
    }

    ~A()
    {
        std::cout<<"Destructor of A with value " << myVal_ << std::endl;
    }

    double getValue()
    {
      return myVal_;
    }

};

class B
{
  private:
    double myVal_;
  public:
    void foo()
    {
    }
    void bar(){}
};



#endif
