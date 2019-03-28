public class TextShapeObjectAdapter extends Shape {

	private TextView mTextView;

	public TextShapeObjectAdapter(TextView textView) {
		mTextView = textView;
	}

	@Override
	public void boundingBox(Point bottomLeft, Point topRight) {
		Coord bottom = new Coord();
		Coord left = new Coord();
		Coord width = new Coord();
		Coord height = new Coord();

		mTextView.getOrigin(bottom, left);
		mTextView.getExtent(width, height);

		bottomLeft.set(bottom, left);
		topRight.set(bottom.add(height), left.add(width));
	}

	@Override
	public Manipulator createManipulator() {
		return new TextManipulator();
	}

	public boolean isEmpty() {
		return mTextView.isEmpty();
	}
}
