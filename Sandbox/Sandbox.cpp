#include "../src/Cashew.h"

class Sandbox : public Cashew::Application
{
private:
    /* data */
public:
    Sandbox(/* args */);
    ~Sandbox();
};

Sandbox::Sandbox(/* args */)
{
}

Sandbox::~Sandbox()
{
}

Cashew::Application *CreateApplication()
{
    return new Sandbox();
}