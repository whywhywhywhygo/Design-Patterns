import maze.Maze;

public class Game {
    public static void main(String[] args) {
        MazeGame mazeGame = new MazeGame();
        Maze maze1 = mazeGame.createMaze();

        BombedMazeGame bombedMazeGame = new BombedMazeGame();
        Maze maze2 = bombedMazeGame.createMaze();

        EnchantedMazeGame enchantedMazeGame = new EnchantedMazeGame();
        Maze maze3 = enchantedMazeGame.createMaze();
    }
}
