#pragma once

namespace Cashew
{
    class Application
    {
    private:
        /* data */
    public:
        Application(/* args */);
        virtual ~Application();
        void Run();
    };

    Application::Application(/* args */)
    {
    }

    Application::~Application()
    {
    }
    
    void Application::Run() 
    {
        while (true);
    }
}
