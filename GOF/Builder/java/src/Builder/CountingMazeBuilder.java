package Builder;

public class CountingMazeBuilder extends MazeBuilder {

	private int m_doors;
	private int m_rooms;

	public CountingMazeBuilder() {
		m_doors = 0;
		m_rooms = 0;
	}

	@Override
	public void buildMaze() {
	}

	@Override
	public void buildRoom(int n) {
		m_rooms++;
	}

	@Override
	public void buildDoor(int n1, int n2) {
		m_doors++;
	}

	public int getRoomCounts() {
		return m_rooms;
	}

	public int getDoorCounts() {
		return m_doors;
	}
}
