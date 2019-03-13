package factory;
import maze.Door;
import maze.Maze;
import maze.Room;
import maze.Wall;


public abstract class MazeFactory {
    public Maze makeMaze()
    {
        return new Maze();
    }

    public Wall makeWall()
    {
        return new Wall();
    }

    public Room makeRoom(int n)
    {
        return new Room(n);
    }

    public Door makeDoor(Room r1, Room r2)
    {
        return new Door(r1, r2);
    }
}
