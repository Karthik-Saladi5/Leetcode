class Solution {
    private static class Pair {
        double ratioChange;
        int index;

        Pair(double a, int b) {
            ratioChange = a;
            index = b;
        }
    }

    public double maxAverageRatio(int[][] classes, int extraStudents) {
        PriorityQueue<Pair> pq = new PriorityQueue<>(Comparator.comparingDouble(p -> -p.ratioChange));
        int[][] temp = classes;
        double ans = 0.0;
        for (int i = 0; i < classes.length; i++) {
            double r1 = (double) classes[i][0] / classes[i][1];
            double r2 = (double) (classes[i][0] + 1) / (classes[i][1] + 1);
            pq.add(new Pair(r2 - r1, i));
        }
        while (extraStudents-- > 0) {
            int ind = pq.poll().index;
            temp[ind][0]++;
            temp[ind][1]++;
            double r1 = (double) temp[ind][0] / temp[ind][1];
            double r2 = (double) (temp[ind][0] + 1) / (temp[ind][1] + 1);
            pq.add(new Pair(r2 - r1, ind));
        }
        double sum = 0.0;
        for (int[] i : temp) {
            sum += (double) i[0] / i[1];
        }
        return sum / temp.length;
   }
}