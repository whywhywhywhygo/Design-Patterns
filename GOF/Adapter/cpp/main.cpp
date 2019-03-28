#include <iostream>
#include <memory>
#include "TextShapeClassAdapter.h"
#include "TextShapeObjectAdapter.h"

using std::shared_ptr;				using std::make_shared;

int main()
{
	shared_ptr<TextShapeClassAdapter> classAdapter = make_shared<TextShapeClassAdapter>();
	shared_ptr<TextShapeObjectAdapter> objectAdapter = make_shared<TextShapeObjectAdapter>(make_shared<TextView>());
	classAdapter->isEmpty();
	objectAdapter->isEmpty();

	return 0;
}