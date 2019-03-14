package maze;

public class RoomWithABomb extends Room {
    public RoomWithABomb(int n)
    {
        super(n);
    }

    @Override
    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }

    @Override
    public void initialize(int n) {
        super.initialize(n);
    }
}
