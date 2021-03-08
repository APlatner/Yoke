#include <Yoke.h>

class Sandbox : public Yoke::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}


};

Yoke::Application* Yoke::CreateApplication()
{
	return new Sandbox();
}