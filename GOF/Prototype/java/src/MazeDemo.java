import maze.Door;
import maze.Maze;
import maze.Room;
import maze.Wall;

public class MazeDemo {
	public static void main(String[] args) {
		MazeGame mazeGame = new MazeGame();
		MazeFactory mazeFactory = new MazePrototypeFactory(new Maze(), new Wall(), new Room(), new Door());

		Maze maze = mazeGame.createMaze(mazeFactory);
	}
}
