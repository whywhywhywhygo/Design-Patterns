package Window;

import Elements.Point;
import Elements.View;
import Factory.WindowSystemFactory;
import Window.WindowImp.WindowImp;

public class Window {

	private WindowImp _imp;
	private View _content;

	public Window(View content) {
		_content = content;
	}

	public void drawContents() {}
	public void open() {}
	public void iconify() {}
	public void deiconify() {}
	public void setOrigin(Point at) {}
	public void setExtent(Point extent) {}
	public void lower() {}
	public void drawLine(Point s, Point e) {}
	public void drawRect(Point bottomLeft, Point topRight) {}
	public void drawPolgen(Point[] points) {}
	public void drawText(String text, Point position) {}

	protected WindowImp getWindowImp() {
		if(_imp == null)
			_imp = WindowSystemFactory.getInstance().makeWindowImp();
		return _imp;
	}

	protected View getView() {
		return _content;
	}
}
