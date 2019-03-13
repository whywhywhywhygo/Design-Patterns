import Builder.CountingMazeBuilder;
import Builder.StandardMazeBuilder;
import Maze.Maze;
import director.MazeGame;

public class Gaming {
	public static void main(String[] args) {
		MazeGame game1 = new MazeGame();
		StandardMazeBuilder builder1 = new StandardMazeBuilder();
		game1.createMaze(builder1);
		Maze maze = builder1.getMaze();

		MazeGame game2 = new MazeGame();
		CountingMazeBuilder builder2 = new CountingMazeBuilder();
		game2.createMaze(builder2);
		builder2.getRoomCounts();
		builder2.getDoorCounts();
	}
}
