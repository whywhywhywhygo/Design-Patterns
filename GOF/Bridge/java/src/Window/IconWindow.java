package Window;

import Elements.Coord;
import Elements.View;
import Window.WindowImp.WindowImp;

public class IconWindow extends Window {

	private String m_bitmapName;

	public IconWindow(View content) {
		super(content);
	}

	@Override
	public void drawContents() {
		WindowImp imp = getWindowImp();
		if(imp != null)
			imp.deviceBitmap(m_bitmapName, new Coord(0), new Coord(0));
	}
}
