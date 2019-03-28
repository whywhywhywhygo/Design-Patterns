public class Coord {

	private int mX;
	private int mY;

	public Coord() {}

	public Coord(int x, int y) {
		mX = x;
		mY = y;
	}

	public Coord add(Coord a) {
		return new Coord(mX + a.mX, mY + a.mY);
	}
}
