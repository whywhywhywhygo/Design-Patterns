package Factory;

import Window.WindowImp.WindowImp;
import Window.WindowImp.XWindowImp;

public class WindowSystemFactory {

	private static final WindowSystemFactory factory = new WindowSystemFactory();

	public static WindowSystemFactory getInstance() {
		return factory;
	}

	public WindowImp makeWindowImp() {
		return new XWindowImp();
	}
}
