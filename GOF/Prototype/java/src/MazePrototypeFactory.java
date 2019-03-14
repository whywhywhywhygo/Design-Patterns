import maze.Door;
import maze.Maze;
import maze.Room;
import maze.Wall;

public class MazePrototypeFactory extends MazeFactory {

	private Maze m_mazePrototype;
	private Wall m_wallPrototype;
	private Room m_roomPrototype;
	private Door m_doorPrototype;

	MazePrototypeFactory(Maze maze, Wall wall, Room room, Door door) {
		m_mazePrototype = maze;
		m_wallPrototype = wall;
		m_roomPrototype = room;
		m_doorPrototype = door;
	}

	@Override
	public Maze makeMaze() {
		try {
			return (Maze)m_mazePrototype.clone();
		} catch (CloneNotSupportedException e) {
			return null;
		}
	}

	@Override
	public Wall makeWall() {
		try {
			return (Wall) m_wallPrototype.clone();
		} catch (CloneNotSupportedException e) {
			return null;
		}
	}

	@Override
	public Room makeRoom(int n) {
		try {
			Room room = (Room)m_roomPrototype.clone();
			room.initialize(n);
			return room;
		} catch (CloneNotSupportedException e) {
			return null;
		}

	}

	@Override
	public Door makeDoor(Room r1, Room r2) {
		try {
			Door door = (Door) m_doorPrototype.clone();
			door.initialize(r1, r2);
			return door;
		} catch (CloneNotSupportedException e) {
			return null;
		}
	}
}
