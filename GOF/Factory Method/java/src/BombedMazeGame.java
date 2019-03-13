import maze.BombedWall;
import maze.Room;
import maze.RoomWithABomb;
import maze.Wall;

public class BombedMazeGame extends MazeGame {
    @Override
    public Wall makeWall() {
        return new BombedWall();
    }

    @Override
    public Room makeRoom(int n) {
        return new RoomWithABomb(n);
    }
}
