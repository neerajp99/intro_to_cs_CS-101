function LengthLPS(i, j):
	if i==j: return 1

	if X[i]==X[j]: // the characters at position i and j are the same
		if i+1==j: return 2 // things like "aa" and "bb"; i.e., i and j are identical and are next to each other
		else: return 2 + LengthLPS(i+1, j-1) // count 2 for the identical i and j, and then solve the subproblem in between
	else: return max( LengthLPS(i+1,j), LengthLPS(i,j-1) )
