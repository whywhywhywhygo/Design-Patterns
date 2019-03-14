import maze.Maze;
import maze.Door;
import maze.Room;
import maze.Wall;

public class MazeFactory {
	public Maze makeMaze() {
		return new Maze();
	}

	public Wall makeWall() {
		return new Wall();
	}

	public Room makeRoom(int n) {
		return new Room(n);
	}

	public Door makeDoor(Room r1, Room r2) {
		return new Door(r1, r2);
	}
}
