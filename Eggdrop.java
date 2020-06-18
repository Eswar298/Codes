.An egg that survives a fall can be used again.
…..A broken egg must be discarded.
…..The effect of a fall is the same for all eggs.
…..If an egg breaks when dropped, then it would break if dropped from a higher floor.
…..If an egg survives a fall then it would survive a shorter fall.
…..It is not ruled out that the first-floor windows break eggs, nor is it ruled out that the 36th-floor do not cause an egg to break.

If only one egg is available and we wish to be sure of obtaining the right result, the experiment can be carried out in only one way.
Drop the egg from the first-floor window; if it survives, drop it from the second-floor window. Continue upward until it breaks. 
In the worst case, this method may require 36 droppings. Suppose 2 eggs are available. What is the least number of egg-droppings 
that isguaranteed to work in all cases?
The problem is not actually to find the critical floor, but merely to decide floors from which eggs should be dropped so 
that the total number of trials are minimized.

                             At kth floor
                                   solve(egg,floor)
                                   /             \
                                breaks           does not break
                                /                   \
                       solve(egg-1,k-1)             solve(egg,floor-k)
                       
                This is for worst case   temp = max(solve(egg-1,k-1),so)lve(egg,floor-k))
                min attempts min = min(min,temp)

public class GFG { 

	/* Function to get minimum number of 
	trials needed in worst case with n 
	eggs and k floors */
	static int eggDrop(int n, int k) 
	{ 
		// If there are no floors, then 
		// no trials needed. OR if there 
		// is one floor, one trial needed. 
		if (k == 1 || k == 0) 
			return k; 

		// We need k trials for one egg 
		// and k floors 
		if (n == 1) 
			return k; 

		int min = Integer.MAX_VALUE; 
		int x, res; 

		// Consider all droppings from 
		// 1st floor to kth floor and 
		// return the minimum of these 
		// values plus 1. 
		for (x = 1; x <= k; x++) { 
			res = Math.max(eggDrop(n - 1, x - 1), 
						eggDrop(n, k - x)); 
			if (res < min) 
				min = res; 
		} 

		return min + 1; 
	} 

	// Driver code 
	public static void main(String args[]) 
	{ 
		int n = 2, k = 10; 
		System.out.print("Minimum number of "
						+ "trials in worst case with "
						+ n + " eggs and " + k 
						+ " floors is " + eggDrop(n, k)); 
	} 
	// This code is contributed by Ryuga. 
} 
