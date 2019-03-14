import maze.Door;
import maze.Maze;
import maze.Room;

public class MazeGame {
	public Maze createMaze(MazeFactory factory) {
		Maze maze = factory.makeMaze();
		Room r1 = factory.makeRoom(1);
		Room r2 = factory.makeRoom(2);
		Door door = factory.makeDoor(r1, r2);

		maze.addRoom(r1);
		maze.addRoom(r2);

		r1.setSide(Room.Direction.north, factory.makeWall());
		r1.setSide(Room.Direction.south, factory.makeWall());
		r1.setSide(Room.Direction.west, factory.makeWall());
		r1.setSide(Room.Direction.east, factory.makeWall());

		r2.setSide(Room.Direction.north, factory.makeWall());
		r2.setSide(Room.Direction.south, factory.makeWall());
		r2.setSide(Room.Direction.west, factory.makeWall());
		r2.setSide(Room.Direction.east, factory.makeWall());

		return maze;
	}
}
