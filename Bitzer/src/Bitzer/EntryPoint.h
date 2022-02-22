#pragma once

#ifdef BZ_PLATFORM_WINDOWS

// will be declared in Application.h
// found somewhere else, e.g. SandboxApp
extern Bitzer::Application* Bitzer::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Bitzer::CreateApplication();
	app->Run();
	delete app;

}

#endif
