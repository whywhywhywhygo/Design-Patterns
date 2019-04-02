package Window.WindowImp;

import Elements.Coord;
import Elements.Point;

public class PMWindowImp implements WindowImp {
	@Override
	public void impTop() {}

	@Override
	public void impBottom() {}

	@Override
	public void impSetExtent(Point p) {}

	@Override
	public void impSetOrigin(Point p) {}

	@Override
	public void deviceRect(Coord topLeft, Coord bottomLeft, Coord topRight, Coord bottomRight) {}

	@Override
	public void deviceText(String text, Coord c1, Coord c2) {}

	@Override
	public void deviceBitmap(String bitmapName, Coord c1, Coord c2) {}
}
