package maze;
import java.util.LinkedList;

public class Maze {
    private LinkedList<Room> m_rooms = new LinkedList<>();

    public void addRoom(Room room)
    {
        m_rooms.addLast(room);
    }
}
