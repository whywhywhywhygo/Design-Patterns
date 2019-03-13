package maze;
import java.util.LinkedList;

public class Maze {
    private LinkedList<Room> m_rooms;

    public void addRoom(Room room)
    {
        m_rooms.addLast(room);
    }
}
