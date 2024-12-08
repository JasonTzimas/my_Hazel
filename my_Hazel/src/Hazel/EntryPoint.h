#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	auto sandbox = Hazel::CreateApplication();




































	sandbox->Run();
	delete sandbox;
}
#endif