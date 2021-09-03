#pragma once

#include "../Cashew.h"

extern Cashew::Application* CreateApplication();

int main(int argc, char** argv)
{
    printf("Howdy");
    auto app = CreateApplication();
    app->Run();
    delete app;
}