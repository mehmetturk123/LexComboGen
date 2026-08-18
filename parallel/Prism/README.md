## Paper figures and statistical analyses recreated in GraphPad Prism

All Python-based statistical analyses, speedup claims, and figures from the
`stats_scripts` workspace have been reconstructed directly within GraphPad Prism.

The following configurations and workflows were implemented:
- **stat1 (Cross-Machine Consistency):** Paired run-times of the serial iMEBKE engine on TRUBA and Section-4 CPU were structured to enable Wilcoxon signed-rank and paired t-tests on log ratios.
- **stat2 (Serial vs. Parallel p=1):** Summary statistics (mean, SD, n=30) for serial and parallel p=1 configurations were compiled to run Welch's unequal-variance t-tests.
- **stat3 (Depth Sweep Comparison):** Mean, SD, and N=30 values of D=5 vs. per-instance best sweep depths were entered in Column Tables to perform Welch's t-tests.
- **stat4 (Workload Bounds):** Combinatorial queue limits (1/w0) and heaviest-task limits (C/Wmax) were plotted alongside observed speedups (S16 and S56) in Grouped Tables to verify load-balancing gains.
- **stat5 (Scaling and Variance):** All 77 configuration CoV% values were arranged in a single-column table to generate a Box & Whiskers plot with superimposed points, validating the 3.5% stability threshold.
- **fig5 (Strong Scaling):** An XY (Mean & SD) data table was formatted to plot strong scaling speedups for three representative instances, complete with propagated error bars and custom horizontal gridline thresholds representing C/W_max bounds.
- **fig6 (Depth Sensitivity):** An XY (Mean & SD) log-scale table with major gray gridlines was configured to plot median run times against prefix depth D.
