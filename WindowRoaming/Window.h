#pragma once
#include <string>
#include <unordered_map>
namespace window
{
	using std::string;
	using std::unordered_map;
	class Window
	{
	public:
		Window(string _name, Window* _parent = nullptr) :name(_name), parent(_parent) {}
		Window(const Window&) = delete;
		Window(Window&&) = delete;
		Window& operator=(Window&&) = delete;
		virtual Window* drawNext(unordered_map<string, Window*>& windowlist) = 0;
		virtual string getName() { return name; };
		virtual ~Window() {}
	private:
		string name;
	protected:
		Window* parent;
		
	};
}
