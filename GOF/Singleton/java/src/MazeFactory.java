public class MazeFactory {

	private static MazeFactory mInstance;

	static public MazeFactory getInstance() {
		if(mInstance == null) {
			String mazeStyle = new String("");
			if(mazeStyle.equalsIgnoreCase("bombe"))
				mInstance = new BombedMazeFactory();
			else if(mazeStyle.equalsIgnoreCase("enchanted"))
				mInstance = new EnchantedMazeFactory();
			else
				mInstance = new MazeFactory();
		}

		return mInstance;
	}

	protected MazeFactory() {}
}
