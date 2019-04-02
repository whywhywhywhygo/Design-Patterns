import Elements.View;
import Window.ApplicationWindow;
import Window.Window;
import Window.IconWindow;

public class Demo {
	public static void main(String[] args) {
		View view = new View();
		Window application = new ApplicationWindow(view);
		IconWindow icon = new IconWindow(view);
	}
}
