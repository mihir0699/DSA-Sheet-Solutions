string Solution::countAndSay(int A) {
	vector<string> num(A + 1, "");
	num[1] = "1";
	A--;
	int i = 1;
	while (A--) {
		for (int j = 0; j < num[i].size(); j++) {
			int k = j;
			while (j < num[i].size() - 1 && num[i][j] == num[i][j + 1])
				j++;

			int cnt = j - k + 1;
			num[i + 1] += to_string(cnt) + num[i][k];

		}
		i++;
	}

	return num[i];

}
