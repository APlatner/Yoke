#pragma once

#ifdef YK_PLATFORM_WINDOWS

extern Yoke::Application* Yoke::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Yoke::CreateApplication();
	app->Run();
	delete app;
}

#endif
