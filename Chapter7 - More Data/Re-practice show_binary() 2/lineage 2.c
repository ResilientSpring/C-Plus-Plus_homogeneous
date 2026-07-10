int show_binary(unsigned int u) {

	for (int t = 128; t > 0; t = t >> 1) {

		if (t & u)
			printf("1");
		else
			printf("0");

	}


}