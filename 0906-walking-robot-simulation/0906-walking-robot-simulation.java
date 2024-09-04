class Solution {
    public int robotSim(int[] commands, int[][] obstacles) {
        Set<String> s = new HashSet<>();
        for (int[] i : obstacles) {
            s.add(i[0] + "," + i[1]);
        }

        int[][] dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; // North, East, South, West
        int x = 0, y = 0, face = 0, ans = 0;

        for (int i : commands) {
            if (i == -1) {
                face = (face + 1) % 4;
            } else if (i == -2) {
                face = (face + 3) % 4;
            } else {
                for (int j = 0; j < i; j++) {
                    int newX = x + dir[face][0];
                    int newY = y + dir[face][1];
                    if (!s.contains(newX + "," + newY)) {
                        x = newX;
                        y = newY;
                        ans = Math.max(ans, x * x + y * y);
                    } else {
                        break;
                    }
                }
            }
        }

        return ans;
    }
}