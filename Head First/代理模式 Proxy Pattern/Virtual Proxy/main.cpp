#include <iostream>
#include <memory>
#include "imageproxy.h"

using std::cout;				using std::endl;
using std::shared_ptr;			using std::make_shared;

int main()
{
	shared_ptr<ImageProxy> proxy = make_shared<ImageProxy>(ImageProxy());

	proxy->paintIcon();
	cout << proxy->getIconHeight() << " " << proxy->getIconWidth() << endl;
	cout << proxy->getIconHeight() << " " << proxy->getIconWidth() << endl;

	return 0;
}