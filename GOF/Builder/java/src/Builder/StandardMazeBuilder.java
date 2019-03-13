package Builder;

import Maze.Maze;
import Maze.Room;
import Maze.Wall;
import Maze.Door;

public class StandardMazeBuilder extends MazeBuilder {

    private Maze m_currentMaze;

    @Override
    public void buildMaze() {
        m_currentMaze = new Maze();
    }

    @Override
    public void buildRoom(int n) {
        if(m_currentMaze.roomNo(n) == null) {
            Room room = new Room(n);
            m_currentMaze.addRoom(room);

            room.setSide(Room.Direction.North, new Wall());
            room.setSide(Room.Direction.South, new Wall());
            room.setSide(Room.Direction.East, new Wall());
            room.setSide(Room.Direction.West, new Wall());
        }
    }

    @Override
    public void buildDoor(int n1, int n2) {
        Room r1 = m_currentMaze.roomNo(n1);
        Room r2 = m_currentMaze.roomNo(n2);
        Door door = new Door();

        //TODO
        /*r1->setSide(commonWall(r1, r2), d);
        r2->setSide(commonWall(r1, r2), d)*/
    }

    @Override
    public Maze getMaze() {
        return m_currentMaze;
    }
}
