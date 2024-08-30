/**
 * Simple stopwatch object that can 
 * be used to measure the elapsed
 * time for parts of a program's 
 * execution.
 * @author rick
 */

#include <chrono>

using time_point 
         = std::chrono::time_point<std::chrono::high_resolution_clock>;

class Stopwatch {
	/** The time the stopwatch started. */
	time_point start_time;
	/** The elapsed time that the stopwatch has been running. */
	double elapsed_time;
	/** Indicates the stopwatch's current running state. */
	bool is_running;
public:
	/** Initializes a new stopwatch object. */
	Stopwatch();
	
	/** Resets the stopwatch object in preparation for a new timing. */
	void reset();

	/** Starts the stopwatch running. */
	void start();

	/** 
	 * Stops the stopwatch; the stopwatch later may be resumed, 
	 * but the time while stopped is not counted.
	 */
	void stop();

	/** Returns the stopwatch's elapsed time in seconds. */
	double elapsed();
};

