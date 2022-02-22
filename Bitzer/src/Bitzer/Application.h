#pragma once

#include "Core.h"

// Everything will be in this namespace, macro namespace will be shortened
// to bz
namespace Bitzer {
	class __declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();

	};

	// Defined in client
	Application* CreateApplication();
}

