class Solution {
	public:
	int getLPSLength(string &s) {
		int m = s.size();
		int arr[m];
		arr[0] = 0;
		int l = 0;

		for (int i = 1; i < m; i++) {

			if (s[i] == s[l]) {
				l++;
				arr[i] = l;
			}
			else {

				if (l == 0) {
					arr[i] = 0;
				}
				else {
					l = arr[l - 1];
					i--;
				}
			}
		}
		return arr[m-1];

	}
};