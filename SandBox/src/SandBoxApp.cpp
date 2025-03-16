
#include <Hazel.h>
class SandBox : public Hazel::Application {
public:
	SandBox() {}
	~SandBox() {}
};

extern Hazel::Application* Hazel::CreateApplication() {
	return new SandBox();
}