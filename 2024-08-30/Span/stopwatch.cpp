/**
 * Simple stopwatch object that can 
 * be used to measure the elapsed
 * time for parts of a program's 
 * execution.
 * @author rick
 */

#include "stopwatch.h"

/** Initializes a new stopwatch object. */
Stopwatch::Stopwatch() {
	reset();
}

/** Resets the stopwatch object in preparation for a new timing. */
void Stopwatch::reset() {
	is_running = false;
    elapsed_time = 0.0;
}

/** Starts the stopwatch running. */
void Stopwatch::start() {
	if (!is_running) {
		is_running = true;
        start_time = std::chrono::high_resolution_clock::now();
	}
}

/** 
 * Stops the stopwatch; the stopwatch later may be resumed, 
 * but the time while stopped is not counted.
 */
void Stopwatch::stop() {
	if (is_running) {
        auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast
                      <std::chrono::duration<double>>(stop - start_time)
                      .count(); 

		elapsed_time += time;
		is_running = false;
	}
}

/** Returns the stopwatch's elapsed time in seconds. */
double Stopwatch::elapsed() {
	if (!is_running) {
		return elapsed_time;
	} else {
		return 0;
	}
}

