package Window;

import Elements.View;

public class ApplicationWindow extends Window {

	public ApplicationWindow(View content) {
		super(content);
	}

	@Override
	public void drawContents() {
		getView().drawOn(this);
	}
}
