package Maze;

public class Room extends MapSite {

    public enum Direction {
        North, South, East, West
    }

    private int m_roomNo;
    private MapSite []m_sides = new MapSite[4];

    public Room(int r) {
        m_roomNo = r;
    }

    public void setSide(Direction direction, MapSite side) {
        m_sides[direction.ordinal()] = side;
    }

    public int no() {
        return m_roomNo;
    }
}
