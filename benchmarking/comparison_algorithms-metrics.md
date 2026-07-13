# Algorithmic Efficiency Comparison

## Raw Measurements

### Naive Algorithm (O(n²))
* Run 1: 2.085887 seconds
* Run 2: 2.079248 seconds
* Run 3: 2.077378 seconds

### Single-pass Algorithm (O(n))
* Run 1: 0.000084 seconds
* Run 2: 0.000078 seconds
* Run 3: 0.000076 seconds

---

## Statistical Analysis

* **Average Naive Time:** 2.080838 seconds
* **Average Single-pass Time:** 0.000079 seconds

### Relative Difference
The Naive algorithm ($O(n^2)$) is approximately **26,213 times slower** than the Single-pass algorithm ($O(n)$) on this environment.

---

## Sustainability Insight
The $O(n^2)$ implementation forces the CPU to remain active and draw high power for over 2 seconds, whereas the optimized $O(n)$ version completes the exact same functional task in a fraction of a millisecond. Scaled across production environments or cloud infrastructure, using the single-pass approach results in a massive reduction of total compute-hours, directly shrinking the carbon footprint and energy costs of the application.
