class Solution {
    public long dividePlayers(int[] skill) {
        Arrays.sort(skill);
        int n = skill.length;
        long d = skill[0] + skill[n - 1];
        int i = 0, j = n - 1;
        long s = 0;
        while (i < j) {
            if (skill[i] + skill[j] != d)
                return -1;
            s += skill[i++] * skill[j--];
        }
        return s;
    }
}