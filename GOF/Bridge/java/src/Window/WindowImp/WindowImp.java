package Window.WindowImp;

import Elements.Coord;
import Elements.Point;

public interface WindowImp {
	public void impTop();
	public void impBottom();
	public void impSetExtent(Point p);
	public void impSetOrigin(Point p);
	public void deviceRect(Coord topLeft, Coord bottomLeft, Coord topRight, Coord bottomRight);
	public void deviceText(String text, Coord c1, Coord c2);
	public void deviceBitmap(String bitmapName, Coord c1, Coord c2);
}
