import maze.Door;
import maze.Maze;
import maze.Room;
import maze.Wall;

public class MazeGame {
    public Maze createMaze() {
        Maze maze = makeMaze();

        Room r1 = makeRoom(1);
        Room r2 = makeRoom(2);
        Door door = makeDoor(r1, r2);

        maze.addRoom(r1);
        maze.addRoom(r2);

        r1.setSide(Room.Direction.north, makeWall());
        r1.setSide(Room.Direction.south, makeWall());
        r1.setSide(Room.Direction.west, makeWall());
        r1.setSide(Room.Direction.east, makeWall());

        r2.setSide(Room.Direction.north, makeWall());
        r2.setSide(Room.Direction.south, makeWall());
        r2.setSide(Room.Direction.west, makeWall());
        r2.setSide(Room.Direction.east, makeWall());

        return maze;
    }

    public Maze makeMaze() {
        return new Maze();
    }

    public Room makeRoom(int n) {
        return new Room(n);
    }

    public Wall makeWall() {
        return new Wall();
    }

    public Door makeDoor(Room r1, Room r2) {
        return new Door(r1, r2);
    }
}
