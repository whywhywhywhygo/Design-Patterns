import factory.BombedMazeFactory;
import factory.MazeFactory;
import maze.Maze;

public class MazeGame {
    Maze createMaze(MazeFactory factory)
    {
        return factory.makeMaze();
    }

    public static void main(String[] args)
    {
        MazeGame mazeGame = new MazeGame();
        BombedMazeFactory factory = new BombedMazeFactory();
        Maze maze = mazeGame.createMaze(factory);
    }
}
