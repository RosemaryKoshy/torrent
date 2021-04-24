# torrent

BitTorrent client in C++ using libtorrent

I think I should probably do that final project, but I don't have that many ideas honestly. I enjoy programming and have
programmed a cache-server for Eitan's Systems course. I've also taken OS with Eitan. And I enjoyed the mini-project
because I think Python makes that kind of thing easy. Maybe I should make a BitTorrent client

1. Implement/Import the BitTorrent v2 protocol (Baseline)
2. Use checksums to make sure files are not corrupted
3. Download/seed multiple files simultaneously
4. Assign priorities/bandwidth to downloads
5. Set upload/download speed limits
6. Schedule downloads/seeds for specific times I guess one of my big questions is to what degree I can rely on
   libraries, which tend to obscure lower-level networking stuff. The application would probably have a text-based
   interface, so I can focus development on the networking & features. I don't like programming alone but since this
   replaces the final I guess I'll have to. What do you think? Thanks.

Because I program on Linux, Linux would be the supported OS. I'd use libtorrent and C++, which should be sufficiently
low-level that I can learn something but without forcing me to reinvent the wheel.

Things to hand in: Your nicely written code (i.e., comments, good variable names, and efficient), a README indicating
what I should run/what order to test it out, and a short writeup (e.g., 1 or 2 pages) describing any design decisions
you might have made (e.g., "I used TCP because reason X.") and any potential extensions you see viable for the project
(i.e., stuff you'd like to add to it, if you had the time/motivation, and how you might go about adding them). Think of
the short writeup closer to a 'development diary' where you explain decisions made during development and sketch out how
the project can grow beyond what you deliver.

Grading: Similar to mini-projects, meaning 15 points are for coding style. The rest are obtained if your project
operates as expected following the formula "more challenge goals means your code is allowed to have more weird corner
case bugs".

Due: May 10th by 2:30 PM
