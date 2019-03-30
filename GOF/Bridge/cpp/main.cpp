#include <iostream>
#include <memory>
#include "Window/ApplicationWindow.h"
#include "Window/IconWindow.h"
#include "View.h"

using std::shared_ptr;				using std::make_shared;

int main()
{
	shared_ptr<View> view = make_shared<View>();
	shared_ptr<ApplicationWindow> application = make_shared<ApplicationWindow>(view);
	shared_ptr<IconWindow> icon = make_shared<IconWindow>(view);

	application->drawContents();
	icon->drawContents();

	return 0;
}