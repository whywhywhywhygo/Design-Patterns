package maze;

public class Door extends MapSite implements Cloneable {
    private Room m_r1;
    private Room m_r2;

    public Door() {}

    public Door(Room r1, Room r2)
    {
        m_r1 = r1;
        m_r2 = r2;
    }

    @Override
    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }

    public void initialize(Room r1, Room r2) {
        m_r1 = r1;
        m_r2 = r2;
    }
}
