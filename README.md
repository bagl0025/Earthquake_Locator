# Earthquake_Locator

Earthquake location using Downhill Simplex

We know arrival times at seismic stations. We want to know the location, depth, and origin time of the earthquake.

1. Populate model with initial guess and perturbations of the initial guess.
2. Calculate travel times based on arrival times (we know where the seismometers are located).
3. Calculate misfit based on travel time difference.
4. Let Downhill Simplex find a solution that minimizes the misfit.
5. This will result in several models, pick the one with the best misfit.

Downhill Simplex works very well for the simple 2D Earth - and NO derivatives are needed.
Starting model is important - a really bad guess won’t work.
