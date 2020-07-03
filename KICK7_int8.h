#ifndef KICK7_H_
#define KICK7_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"
 
#define KICK7_NUM_CELLS 5893
#define KICK7_SAMPLERATE 4096
 
CONSTTABLE_STORAGE(int8_t) KICK7_DATA [] = {0, -3, -8, -12, -13, -21, -40, -42,
-25, -6, 11, 16, -17, -74, -91, -72, -41, -13, -6, -47, -85, -56, 2, 17, 1, -28,
-73, -96, -96, -83, -26, 43, 43, -21, -94, -119, -114, -20, 95, 116, 120, 105,
25, -38, -50, -17, 54, 101, 107, 84, -19, -105, -115, -112, -91, -14, 42, 67,
100, 117, 120, 113, 81, -6, -74, -81, -56, -38, -20, -9, -21, -2, 63, 103, 114,
114, 61, -51, -65, -16, 29, 68, 83, 73, 73, 91, 105, 117, 125, 125, 117, 79,
-22, -66, -33, 16, 55, 88, 95, 90, 94, 102, 114, 125, 118, 46, -56, -92, -80, 8,
97, 115, 119, 110, 48, -9, -6, -10, -25, -23, -13, 7, 52, 91, 93, 66, 13, -41,
-34, 53, 98, 52, -36, -96, -112, -100, -28, 20, 29, 34, 27, 10, 5, -5, -29, -49,
-45, -24, -8, -2, 2, 1, -9, -20, -24, -16, -5, -11, -30, -34, -19, -5, 5, -3,
-50, -101, -110, -105, -92, -68, -44, -25, -21, -43, -72, -84, -80, -58, -32,
-35, -58, -70, -63, -49, -47, -57, -55, -45, -47, -54, -64, -86, -98, -94, -85,
-75, -61, -55, -55, -52, -49, -51, -59, -71, -83, -93, -93, -78, -68, -74, -75,
-66, -60, -55, -49, -47, -45, -44, -49, -65, -88, -96, -86, -60, -35, -20, -35,
-80, -102, -101, -90, -69, -40, -40, -64, -62, -40, -31, -33, -36, -47, -57,
-54, -50, -57, -71, -75, -66, -48, -19, 6, 9, 0, -22, -60, -80, -73, -66, -60,
-47, -33, -15, -9, -31, -46, -38, -26, -2, 25, 20, -6, -17, -21, -27, -35, -43,
-35, -11, 10, 25, 31, 14, 3, 17, 25, 16, 11, 6, -2, -8, -16, -21, -19, -20, -19,
-4, 9, 14, 19, 17, 16, 27, 34, 33, 33, 30, 23, 27, 40, 47, 34, 11, 5, 14, 22,
38, 56, 57, 50, 47, 39, 31, 31, 33, 37, 44, 43, 37, 42, 54, 62, 64, 60, 51, 43,
46, 57, 64, 69, 68, 57, 44, 38, 34, 33, 39, 51, 66, 78, 75, 67, 67, 65, 62, 65,
66, 64, 63, 62, 59, 64, 70, 65, 59, 56, 54, 53, 52, 52, 61, 71, 69, 68, 71, 66,
57, 53, 50, 53, 59, 60, 66, 75, 77, 76, 75, 72, 72, 70, 62, 60, 60, 53, 48, 48,
50, 60, 67, 68, 68, 61, 52, 55, 57, 55, 59, 61, 56, 56, 55, 48, 43, 43, 46, 54,
61, 65, 67, 67, 67, 64, 58, 50, 41, 36, 43, 51, 53, 56, 59, 58, 56, 54, 46, 39,
35, 31, 29, 28, 24, 19, 18, 19, 24, 31, 39, 48, 51, 40, 21, 12, 14, 19, 25, 31,
28, 18, 12, 10, 6, -4, -11, -6, 0, 1, 2, -3, -16, -22, -17, -9, -5, -8, -15,
-23, -34, -40, -36, -38, -46, -44, -39, -40, -33, -29, -40, -55, -60, -57, -51,
-54, -61, -63, -63, -61, -54, -52, -57, -62, -67, -71, -70, -72, -79, -82, -82,
-82, -80, -76, -70, -65, -71, -83, -89, -92, -93, -85, -77, -81, -87, -90, -92,
-93, -94, -96, -95, -94, -94, -94, -92, -91, -92, -94, -95, -96, -97, -97, -95,
-91, -91, -94, -97, -99, -98, -95, -94, -93, -94, -97, -97, -95, -96, -97, -98,
-97, -94, -89, -87, -84, -86, -92, -94, -96, -97, -92, -88, -87, -86, -87, -89,
-84, -79, -78, -73, -73, -77, -76, -78, -83, -82, -79, -76, -69, -68, -70, -68,
-68, -68, -66, -66, -67, -64, -61, -59, -58, -60, -58, -52, -50, -47, -42, -40,
-41, -46, -53, -56, -51, -44, -36, -32, -36, -39, -37, -32, -28, -25, -22, -19,
-19, -18, -17, -22, -24, -22, -21, -19, -12, -8, -3, 3, 1, -4, -3, -3, -4, 0, 4,
9, 17, 21, 24, 24, 17, 12, 14, 12, 10, 15, 20, 25, 30, 34, 38, 44, 46, 47, 47,
46, 44, 39, 35, 39, 44, 46, 49, 50, 48, 51, 56, 60, 67, 69, 66, 66, 66, 64, 66,
69, 71, 74, 73, 70, 69, 68, 70, 76, 79, 81, 85, 87, 85, 86, 87, 85, 85, 83, 83,
87, 88, 89, 93, 91, 87, 88, 92, 93, 97, 96, 93, 93, 93, 92, 96, 96, 94, 95, 95,
92, 93, 98, 102, 103, 101, 97, 94, 95, 96, 98, 97, 93, 92, 96, 100, 103, 103,
100, 98, 97, 98, 99, 99, 98, 96, 93, 92, 94, 97, 98, 100, 101, 100, 99, 98, 98,
97, 97, 96, 92, 88, 86, 88, 92, 97, 99, 95, 90, 86, 87, 92, 96, 96, 94, 91, 88,
87, 90, 90, 90, 86, 78, 74, 77, 81, 84, 85, 81, 75, 75, 78, 81, 80, 70, 61, 59,
59, 59, 64, 66, 61, 58, 56, 54, 57, 60, 54, 50, 48, 44, 43, 44, 40, 38, 38, 35,
34, 34, 29, 26, 26, 25, 26, 25, 20, 19, 20, 15, 13, 15, 15, 14, 12, 5, -1, -2,
-2, 0, 2, -1, -6, -12, -18, -20, -19, -20, -22, -24, -26, -30, -32, -33, -33,
-32, -33, -37, -39, -41, -45, -50, -50, -51, -52, -53, -56, -59, -62, -67, -69,
-67, -68, -73, -73, -71, -73, -74, -75, -78, -81, -84, -87, -85, -83, -86, -90,
-91, -90, -90, -90, -92, -94, -97, -99, -100, -100, -98, -98, -98, -97, -97,
-100, -102, -104, -103, -103, -106, -108, -108, -108, -108, -107, -107, -107,
-108, -111, -112, -111, -110, -110, -109, -110, -112, -112, -112, -112, -110,
-111, -112, -111, -111, -111, -110, -110, -110, -110, -110, -111, -110, -110,
-110, -111, -112, -114, -113, -112, -112, -112, -112, -114, -113, -112, -110,
-108, -108, -109, -109, -107, -108, -109, -110, -110, -110, -108, -107, -107,
-107, -106, -104, -101, -99, -101, -104, -107, -108, -107, -105, -103, -101,
-100, -98, -95, -94, -92, -90, -93, -95, -95, -93, -91, -89, -88, -88, -88, -87,
-83, -78, -74, -73, -75, -79, -80, -78, -72, -63, -58, -59, -61, -65, -67, -61,
-55, -53, -53, -57, -60, -58, -53, -48, -41, -36, -37, -37, -37, -37, -33, -28,
-28, -29, -31, -32, -27, -17, -11, -8, -8, -14, -16, -12, -6, -3, -3, -7, -6, 1,
6, 14, 20, 18, 12, 11, 12, 15, 22, 24, 23, 23, 23, 27, 34, 39, 40, 40, 37, 35,
37, 38, 39, 43, 46, 47, 48, 52, 56, 59, 61, 64, 68, 70, 68, 67, 70, 71, 71, 73,
73, 72, 73, 76, 79, 84, 87, 86, 87, 88, 90, 93, 94, 93, 90, 87, 86, 89, 93, 94,
94, 94, 95, 97, 101, 103, 104, 102, 101, 101, 101, 101, 102, 102, 102, 102, 103,
104, 103, 102, 101, 100, 101, 103, 103, 103, 104, 105, 106, 107, 107, 106, 107,
107, 108, 108, 108, 106, 106, 105, 106, 106, 106, 107, 108, 107, 106, 106, 106,
106, 106, 107, 107, 107, 107, 107, 107, 107, 107, 107, 106, 106, 104, 103, 104,
106, 108, 108, 107, 105, 102, 102, 102, 104, 104, 103, 101, 98, 96, 96, 97, 100,
101, 99, 98, 98, 98, 99, 99, 98, 95, 93, 92, 93, 94, 92, 88, 84, 82, 82, 84, 86,
84, 83, 81, 81, 83, 83, 81, 78, 74, 70, 67, 64, 62, 61, 62, 61, 60, 59, 57, 55,
56, 56, 53, 50, 45, 42, 41, 39, 38, 37, 32, 29, 31, 30, 28, 26, 20, 15, 14, 12,
13, 15, 14, 12, 8, 2, 1, 4, 4, 2, -1, -7, -10, -12, -13, -14, -15, -21, -23,
-22, -22, -21, -22, -24, -26, -29, -30, -28, -28, -32, -37, -41, -42, -42, -43,
-42, -42, -45, -47, -47, -49, -52, -53, -57, -62, -63, -65, -64, -61, -61, -61,
-59, -63, -67, -69, -71, -72, -72, -73, -74, -74, -77, -79, -79, -81, -82, -80,
-80, -82, -83, -84, -85, -83, -83, -84, -86, -88, -90, -91, -91, -92, -90, -89,
-91, -93, -94, -94, -95, -95, -97, -98, -98, -99, -99, -97, -97, -98, -98, -99,
-98, -96, -95, -96, -97, -98, -99, -99, -100, -100, -100, -101, -101, -100,
-100, -100, -98, -98, -99, -100, -102, -103, -102, -101, -101, -100, -100, -101,
-101, -100, -100, -99, -99, -100, -100, -101, -102, -102, -101, -100, -99, -97,
-96, -95, -94, -94, -93, -94, -96, -98, -98, -96, -93, -91, -91, -93, -95, -96,
-94, -90, -86, -81, -81, -83, -83, -84, -82, -78, -77, -77, -76, -77, -78, -76,
-78, -79, -77, -75, -71, -66, -63, -60, -57, -59, -60, -59, -60, -59, -52, -50,
-49, -50, -52, -50, -44, -42, -42, -43, -45, -42, -36, -33, -31, -30, -32, -31,
-28, -24, -18, -14, -14, -14, -14, -16, -15, -13, -12, -9, -6, -4, -3, -2, -1,
1, 4, 6, 8, 8, 8, 9, 11, 12, 13, 16, 19, 21, 22, 23, 25, 26, 28, 28, 28, 30, 34,
39, 42, 43, 41, 40, 41, 44, 46, 47, 48, 51, 53, 53, 52, 52, 53, 55, 56, 60, 62,
61, 61, 61, 61, 62, 64, 66, 68, 69, 70, 71, 71, 72, 74, 74, 74, 76, 78, 78, 79,
78, 76, 76, 77, 79, 82, 82, 83, 84, 84, 83, 82, 81, 82, 83, 84, 86, 88, 87, 86,
85, 84, 83, 82, 79, 80, 83, 85, 88, 88, 86, 83, 83, 84, 87, 88, 86, 87, 87, 86,
87, 87, 85, 85, 84, 84, 85, 84, 83, 84, 84, 83, 83, 84, 85, 87, 86, 84, 83, 81,
79, 82, 82, 81, 81, 79, 79, 82, 82, 81, 80, 78, 76, 77, 78, 77, 76, 73, 71, 72,
71, 71, 74, 75, 75, 75, 73, 69, 67, 63, 60, 60, 58, 55, 54, 53, 55, 59, 61, 61,
61, 59, 58, 57, 54, 53, 50, 46, 44, 44, 43, 42, 43, 42, 41, 39, 36, 35, 36, 36,
33, 32, 31, 31, 31, 29, 27, 28, 26, 24, 22, 18, 14, 11, 9, 10, 12, 11, 9, 8, 9,
9, 8, 5, 3, 1, -1, -1, -2, -3, -4, -4, -4, -3, -4, -8, -11, -12, -13, -15, -16,
-17, -17, -18, -21, -24, -25, -26, -26, -28, -29, -30, -32, -35, -37, -36, -36,
-37, -38, -39, -40, -40, -42, -45, -48, -50, -52, -51, -51, -52, -51, -51, -50,
-49, -52, -57, -60, -60, -60, -60, -61, -64, -67, -70, -73, -71, -68, -66, -66,
-69, -72, -72, -73, -74, -73, -73, -73, -73, -75, -78, -81, -84, -85, -84, -82,
-80, -79, -80, -81, -83, -86, -87, -85, -83, -83, -85, -88, -89, -90, -90, -88,
-87, -86, -85, -86, -88, -89, -90, -91, -90, -90, -90, -90, -90, -90, -89, -89,
-89, -90, -92, -93, -92, -91, -90, -90, -90, -90, -89, -89, -89, -89, -88, -87,
-87, -87, -87, -89, -90, -91, -90, -87, -84, -83, -83, -85, -87, -87, -86, -84,
-81, -81, -82, -84, -85, -84, -83, -81, -81, -80, -79, -78, -77, -76, -77, -77,
-76, -74, -72, -71, -73, -75, -76, -76, -75, -73, -72, -70, -67, -66, -65, -63,
-63, -63, -63, -62, -60, -57, -55, -55, -55, -55, -54, -52, -52, -51, -50, -49,
-48, -47, -47, -49, -50, -50, -49, -45, -41, -39, -37, -36, -35, -36, -36, -35,
-33, -31, -30, -29, -27, -26, -26, -27, -29, -29, -27, -23, -20, -18, -18, -20,
-19, -16, -13, -13, -13, -13, -13, -12, -12, -10, -8, -6, -4, 0, 2, 4, 6, 5, 4,
5, 6, 7, 9, 9, 10, 13, 14, 15, 17, 17, 16, 17, 18, 20, 24, 25, 27, 28, 28, 28,
29, 29, 31, 34, 37, 38, 37, 36, 36, 38, 42, 46, 46, 44, 41, 41, 42, 45, 48, 50,
51, 51, 52, 52, 51, 50, 52, 55, 58, 62, 64, 64, 63, 61, 63, 68, 71, 73, 73, 71,
70, 72, 73, 73, 74, 73, 74, 76, 76, 77, 79, 81, 83, 83, 82, 81, 83, 85, 87, 87,
85, 84, 84, 85, 87, 88, 87, 86, 87, 87, 87, 89, 89, 89, 88, 87, 88, 91, 92, 92,
91, 90, 89, 89, 91, 92, 92, 91, 89, 88, 88, 90, 92, 94, 93, 92, 91, 90, 91, 92,
94, 95, 95, 94, 92, 91, 91, 91, 92, 92, 91, 89, 87, 87, 87, 87, 89, 89, 89, 88,
86, 85, 85, 85, 85, 84, 83, 82, 82, 83, 84, 84, 82, 81, 81, 80, 80, 79, 78, 77,
75, 73, 73, 74, 74, 73, 72, 70, 68, 67, 68, 69, 69, 67, 64, 62, 60, 60, 61, 63,
63, 61, 58, 55, 52, 52, 53, 53, 53, 50, 48, 48, 47, 45, 46, 45, 45, 44, 42, 41,
43, 44, 44, 42, 37, 34, 33, 32, 33, 33, 31, 28, 27, 26, 25, 23, 24, 25, 26, 26,
23, 20, 19, 19, 20, 22, 23, 20, 16, 13, 10, 10, 10, 9, 10, 10, 10, 10, 9, 6, 3,
1, -2, -3, -3, -4, -5, -6, -9, -9, -8, -8, -6, -5, -8, -12, -17, -22, -22, -18,
-16, -15, -15, -18, -19, -19, -19, -17, -18, -23, -28, -31, -34, -35, -33, -32,
-31, -32, -36, -38, -38, -36, -35, -37, -41, -46, -49, -48, -43, -39, -36, -37,
-43, -49, -52, -54, -53, -50, -50, -52, -54, -57, -57, -55, -56, -57, -56, -57,
-57, -58, -61, -65, -67, -69, -67, -64, -63, -63, -62, -63, -63, -64, -67, -69,
-68, -67, -68, -69, -72, -75, -74, -73, -72, -72, -73, -75, -76, -76, -75, -73,
-72, -74, -76, -79, -80, -79, -77, -77, -77, -78, -79, -80, -80, -80, -80, -79,
-80, -81, -82, -84, -85, -83, -81, -81, -81, -83, -84, -84, -85, -86, -85, -85,
-85, -84, -85, -86, -88, -88, -87, -85, -82, -81, -81, -83, -86, -88, -88, -87,
-84, -82, -83, -85, -85, -84, -83, -80, -80, -81, -81, -82, -82, -81, -81, -80,
-78, -77, -76, -75, -75, -75, -73, -72, -72, -73, -74, -73, -73, -73, -72, -70,
-68, -66, -66, -66, -66, -66, -66, -65, -63, -61, -60, -59, -58, -59, -62, -61,
-57, -54, -52, -53, -55, -56, -55, -55, -53, -51, -50, -48, -46, -45, -45, -47,
-49, -49, -45, -43, -43, -41, -40, -41, -41, -40, -40, -39, -38, -37, -34, -32,
-30, -26, -25, -27, -29, -31, -31, -28, -26, -27, -29, -28, -26, -21, -16, -17,
-19, -21, -21, -19, -18, -18, -19, -20, -21, -19, -15, -13, -9, -8, -9, -9, -8,
-7, -5, -5, -8, -10, -9, -6, -2, 2, 4, 6, 6, 4, 2, 0, -2, -1, 2, 5, 8, 10, 13,
16, 16, 15, 12, 11, 12, 15, 17, 20, 20, 19, 18, 19, 22, 26, 30, 29, 26, 22, 18,
19, 24, 27, 28, 28, 29, 32, 35, 37, 36, 34, 31, 30, 31, 33, 36, 38, 38, 37, 36,
36, 37, 40, 42, 43, 44, 44, 45, 46, 46, 46, 47, 49, 50, 50, 50, 50, 50, 50, 51,
52, 53, 54, 54, 55, 55, 55, 55, 56, 56, 57, 59, 59, 59, 59, 58, 57, 59, 59, 59,
60, 60, 60, 60, 61, 61, 64, 66, 66, 66, 64, 62, 63, 64, 65, 66, 66, 64, 65, 65,
64, 63, 63, 62, 63, 63, 62, 62, 63, 63, 65, 67, 66, 65, 63, 62, 63, 63, 62, 61,
60, 59, 61, 64, 64, 65, 64, 63, 63, 62, 60, 59, 57, 56, 56, 57, 58, 57, 58, 58,
59, 58, 56, 54, 54, 54, 54, 56, 56, 56, 56, 55, 54, 54, 54, 53, 53, 53, 52, 49,
47, 45, 44, 45, 48, 50, 50, 47, 44, 41, 40, 41, 42, 44, 44, 43, 40, 39, 38, 39,
41, 42, 41, 38, 35, 33, 35, 36, 36, 34, 30, 29, 31, 33, 34, 34, 29, 25, 24, 24,
27, 29, 28, 25, 23, 22, 22, 21, 20, 18, 17, 15, 16, 16, 15, 14, 14, 14, 15, 15,
14, 13, 13, 12, 11, 11, 9, 8, 7, 5, 4, 3, 2, 2, 5, 6, 7, 6, 3, 0, -2, -2, -1, 0,
0, -2, -3, -4, -4, -3, -3, -4, -4, -5, -6, -7, -9, -10, -11, -11, -10, -8, -8,
-9, -12, -14, -14, -13, -13, -14, -15, -19, -22, -22, -22, -20, -18, -18, -20,
-22, -24, -25, -24, -24, -25, -26, -27, -26, -24, -24, -26, -28, -31, -31, -30,
-28, -27, -27, -30, -31, -32, -32, -32, -32, -33, -34, -35, -36, -36, -36, -37,
-38, -37, -36, -35, -34, -33, -33, -35, -37, -41, -41, -40, -39, -37, -35, -36,
-39, -40, -41, -41, -39, -39, -37, -35, -36, -37, -39, -41, -41, -39, -38, -38,
-39, -42, -43, -42, -40, -37, -35, -34, -35, -35, -36, -37, -37, -38, -39, -38,
-37, -36, -36, -37, -37, -37, -36, -35, -34, -34, -35, -36, -38, -39, -39, -37,
-35, -33, -31, -32, -34, -34, -34, -36, -37, -36, -36, -34, -34, -36, -38, -41,
-42, -39, -35, -33, -33, -35, -37, -36, -34, -31, -30, -31, -34, -38, -42, -42,
-40, -38, -37, -36, -38, -40, -40, -39, -37, -33, -32, -32, -34, -36, -39, -39,
-38, -37, -36, -35, -34, -32, -32, -33, -35, -38, -40, -39, -36, -33, -32, -33,
-35, -34, -32, -31, -31, -33, -34, -35, -35, -35, -35, -35, -36, -37, -37, -37,
-35, -33, -31, -30, -31, -32, -33, -34, -35, -34, -35, -35, -35, -34, -33, -32,
-31, -30, -29, -30, -32, -32, -32, -31, -29, -29, -28, -28, -29, -28, -25, -23,
-22, -23, -24, -26, -27, -25, -24, -23, -23, -24, -24, -22, -19, -17, -18, -19,
-20, -20, -20, -19, -19, -20, -20, -19, -19, -18, -18, -18, -17, -16, -15, -15,
-15, -16, -17, -16, -14, -12, -12, -12, -12, -12, -11, -12, -12, -12, -12, -12,
-12, -11, -9, -8, -6, -5, -5, -7, -8, -8, -8, -6, -5, -5, -6, -7, -7, -5, -2, 2,
5, 4, 2, 0, -1, 0, 1, 3, 3, 3, 1, -1, -3, -2, -1, 2, 6, 9, 9, 9, 8, 9, 10, 11,
10, 8, 7, 7, 7, 9, 11, 11, 11, 11, 13, 16, 16, 15, 13, 11, 11, 14, 17, 18, 19,
18, 17, 19, 22, 24, 24, 24, 23, 21, 21, 21, 23, 26, 26, 26, 26, 27, 27, 30, 31,
32, 32, 30, 28, 29, 30, 33, 34, 34, 31, 29, 28, 29, 33, 36, 37, 37, 36, 36, 37,
38, 39, 39, 39, 39, 40, 41, 41, 40, 39, 39, 40, 42, 44, 45, 45, 43, 43, 45, 46,
48, 48, 47, 45, 44, 45, 48, 49, 48, 45, 43, 43, 44, 47, 49, 50, 51, 51, 50, 48,
46, 44, 44, 46, 48, 50, 52, 53, 52, 51, 50, 49, 50, 52, 53, 54, 53, 51, 50, 50,
52, 54, 55, 54, 51, 48, 47, 50, 53, 55, 54, 51, 48, 48, 51, 55, 58, 58, 55, 52,
51, 53, 56, 58, 59, 57, 54, 51, 50, 53, 58, 60, 60, 55, 51, 49, 50, 53, 58, 60,
59, 56, 55, 55, 57, 58, 57, 56, 55, 55, 56, 57, 56, 52, 49, 50, 53, 58, 60, 59,
55, 52, 50, 51, 54, 55, 55, 54, 51, 49, 50, 50, 52, 54, 53, 51, 47, 44, 42, 43,
44, 43, 44, 43, 42, 44, 45, 46, 45, 41, 36, 34, 33, 33, 36, 38, 38, 37, 34, 31,
31, 32, 34, 33, 31, 29, 29, 29, 28, 26, 23, 20, 20, 22, 25, 24, 21, 16, 13, 12,
13, 14, 14, 12, 9, 7, 8, 10, 11, 11, 9, 7, 6, 4, 5, 6, 5, 3, 2, -1, -4, -6, -8,
-7, -5, -5, -5, -6, -8, -10, -10, -10, -10, -10, -13, -16, -18, -20, -19, -17,
-16, -18, -21, -24, -25, -24, -23, -22, -21, -21, -23, -25, -28, -29, -28, -27,
-25, -25, -28, -34, -37, -37, -36, -35, -34, -33, -34, -35, -37, -39, -41, -42,
-43, -43, -44, -46, -48, -49, -49, -47, -45, -44, -45, -46, -50, -53, -54, -55,
-55, -54, -53, -55, -56, -55, -54, -52, -52, -54, -56, -57, -60, -61, -63, -66,
-67, -65, -62, -59, -59, -62, -65, -66, -67, -66, -65, -67, -69, -72, -73, -72,
-69, -68, -67, -67, -67, -68, -69, -70, -72, -73, -74, -75, -74, -73, -74, -73,
-71, -69, -67, -68, -71, -73, -73, -72, -69, -68, -71, -74, -75, -75, -72, -69,
-70, -74, -76, -76, -74, -71, -71, -73, -74, -73, -70, -67, -65, -66, -68, -68,
-69, -69, -69, -69, -68, -67, -67, -67, -67, -68, -68, -65, -64, -64, -64, -66,
-67, -67, -66, -64, -61, -60, -60, -60, -60, -59, -57, -56, -57, -58, -60, -62,
-62, -61, -59, -57, -55, -54, -53, -53, -54, -56, -57, -57, -55, -52, -51, -51,
-53, -54, -54, -52, -49, -47, -46, -46, -47, -48, -50, -51, -50, -49, -46, -43,
-42, -41, -42, -44, -46, -45, -43, -41, -40, -41, -43, -45, -43, -38, -34, -33,
-35, -38, -40, -41, -40, -38, -36, -35, -35, -35, -37, -37, -35, -33, -31, -30,
-32, -32, -32, -33, -33, -33, -33, -32, -31, -30, -27, -24, -22, -21, -22, -26,
-27, -27, -24, -19, -15, -15, -15, -16, -17, -15, -13, -11, -9, -8, -9, -10,
-11, -13, -13, -11, -9, -6, -3, -1, -1, -3, -5, -6, -5, -1, 3, 5, 5, 5, 5, 6, 5,
5, 4, 5, 7, 9, 8, 6, 6, 9, 13, 16, 18, 17, 16, 16, 18, 20, 20, 18, 16, 16, 18,
21, 24, 26, 26, 26, 24, 24, 26, 29, 31, 31, 29, 27, 28, 31, 34, 37, 38, 37, 36,
36, 36, 37, 38, 38, 38, 37, 36, 39, 43, 45, 45, 42, 39, 39, 42, 45, 47, 46, 43,
40, 39, 40, 43, 44, 44, 42, 41, 40, 42, 45, 48, 48, 48, 47, 47, 48, 49, 49, 48,
47, 45, 45, 47, 49, 51, 51, 50, 49, 49, 50, 52, 53, 54, 54, 53, 51, 50, 50, 50,
51, 50, 49, 50, 51, 52, 53, 52, 50, 49, 49, 52, 55, 57, 57, 54, 50, 48, 47, 48,
51, 54, 55, 54, 53, 50, 47, 46, 45, 46, 48, 50, 52, 51, 49, 48, 47, 47, 48, 49,
49, 50, 50, 48, 45, 43, 42, 43, 46, 51, 54, 55, 53, 50, 48, 47, 46, 46, 46, 45,
44, 45, 45, 48, 49, 48, 48, 47, 45, 46, 46, 45, 45, 43, 43, 44, 46, 46, 46, 45,
44, 44, 44, 43, 42, 41, 40, 39, 40, 41, 43, 45, 47, 47, 46, 44, 42, 41, 39, 37,
36, 36, 38, 40, 40, 38, 37, 37, 40, 41, 40, 38, 37, 39, 42, 41, 37, 32, 30, 33,
37, 38, 36, 33, 31, 33, 36, 37, 36, 33, 31, 32, 34, 36, 36, 35, 32, 29, 27, 27,
29, 30, 30, 30, 29, 27, 26, 25, 25, 26, 27, 27, 27, 25, 23, 22, 21, 21, 21, 21,
22, 24, 26, 27, 25, 22, 19, 17, 16, 16, 16, 17, 18, 18, 17, 17, 17, 17, 17, 16,
15, 14, 12, 11, 11, 10, 9, 9, 10, 11, 11, 11, 11, 11, 10, 8, 7, 7, 8, 8, 8, 7,
5, 2, 0, 0, 0, -1, -2, -2, -3, -2, -2, -2, -1, 0, -2, -3, -5, -7, -8, -8, -7,
-7, -8, -9, -9, -9, -8, -7, -7, -9, -10, -11, -13, -14, -15, -16, -16, -15, -14,
-14, -14, -14, -15, -16, -17, -18, -19, -20, -20, -20, -20, -20, -21, -22, -23,
-22, -21, -20, -20, -22, -24, -26, -26, -26, -26, -26, -28, -29, -30, -29, -28,
-28, -28, -29, -30, -31, -31, -31, -32, -33, -34, -35, -37, -39, -38, -37, -36,
-36, -37, -37, -37, -37, -37, -37, -38, -39, -39, -38, -38, -38, -40, -42, -44,
-44, -43, -42, -43, -45, -46, -47, -48, -48, -47, -46, -46, -45, -46, -47, -47,
-46, -44, -43, -43, -45, -47, -48, -48, -47, -46, -47, -49, -50, -50, -50, -50,
-50, -49, -49, -49, -50, -51, -52, -52, -51, -52, -52, -51, -52, -52, -52, -52,
-52, -51, -50, -51, -51, -52, -52, -51, -51, -52, -53, -54, -53, -51, -50, -51,
-52, -52, -51, -50, -50, -52, -55, -56, -56, -55, -53, -51, -50, -50, -51, -51,
-51, -49, -48, -48, -48, -50, -51, -51, -50, -49, -48, -48, -48, -48, -46, -45,
-44, -45, -47, -48, -49, -47, -46, -45, -46, -46, -46, -45, -44, -44, -45, -45,
-45, -44, -43, -42, -42, -41, -40, -39, -39, -40, -41, -40, -38, -37, -35, -35,
-37, -38, -38, -36, -34, -33, -34, -35, -36, -37, -36, -35, -34, -33, -33, -33,
-33, -33, -32, -31, -30, -29, -29, -28, -28, -27, -26, -25, -25, -24, -24, -24,
-23, -22, -21, -21, -22, -22, -22, -21, -19, -19, -20, -23, -25, -24, -20, -16,
-14, -15, -17, -19, -19, -17, -13, -11, -10, -10, -12, -15, -16, -14, -12, -9,
-7, -8, -10, -11, -11, -9, -6, -3, -2, -2, -4, -4, -4, -2, -1, -2, -4, -5, -4,
-2, 1, 1, -1, -2, -1, 1, 4, 6, 5, 2, -1, 0, 2, 6, 8, 8, 5, 3, 3, 6, 9, 10, 8, 5,
2, 2, 5, 9, 12, 14, 14, 12, 9, 9, 11, 14, 15, 13, 9, 5, 5, 9, 14, 18, 17, 14,
12, 11, 12, 15, 17, 17, 16, 15, 14, 15, 17, 18, 17, 15, 14, 14, 16, 18, 19, 17,
15, 15, 17, 21, 23, 23, 23, 23, 24, 24, 24, 23, 21, 20, 19, 20, 21, 21, 21, 23,
24, 27, 28, 28, 28, 27, 26, 26, 25, 24, 24, 24, 24, 25, 26, 27, 29, 30, 30, 31,
31, 30, 30, 30, 30, 30, 30, 30, 30, 31, 32, 33, 33, 32, 31, 30, 29, 29, 30, 31,
31, 31, 32, 33, 34, 35, 35, 34, 33, 32, 30, 29, 30, 32, 33, 33, 32, 31, 30, 31,
33, 35, 35, 35, 33, 33, 34, 35, 36, 36, 35, 34, 33, 33, 32, 34, 34, 36, 37, 38,
38, 37, 36, 35, 35, 36, 37, 37, 37, 36, 35, 35, 35, 37, 39, 39, 39, 38, 37, 36,
36, 36, 36, 36, 37, 37, 37, 36, 36, 36, 37, 37, 37, 36, 36, 36, 36, 36, 35, 34,
34, 33, 34, 35, 37, 38, 38, 36, 34, 33, 32, 33, 35, 36, 36, 37, 37, 36, 35, 34,
33, 32, 33, 34, 34, 34, 34, 34, 35, 36, 36, 35, 33, 32, 31, 30, 29, 30, 31, 31,
32, 33, 34, 34, 33, 32, 31, 31, 31, 31, 30, 28, 27, 27, 29, 31, 32, 32, 30, 28,
27, 27, 27, 27, 27, 26, 27, 28, 30, 32, 32, 31, 29, 26, 26, 28, 31, 33, 32, 31,
29, 29, 29, 30, 30, 30, 28, 27, 26, 26, 27, 28, 29, 29, 29, 29, 29, 30, 29, 27,
25, 23, 23, 24, 27, 28, 29, 28, 27, 27, 28, 27, 26, 24, 22, 20, 20, 21, 24, 26,
26, 25, 24, 23, 24, 26, 27, 26, 24, 22, 21, 22, 23, 23, 23, 22, 22, 22, 22, 23,
22, 20, 19, 18, 18, 18, 18, 18, 17, 17, 16, 16, 17, 17, 17, 16, 15, 14, 13, 13,
13, 13, 12, 11, 10, 11, 12, 13, 13, 11, 9, 7, 7, 8, 8, 7, 5, 3, 3, 4, 6, 7, 5,
3, 2, 3, 3, 3, 1, 0, -1, 0, 1, 2, 0, -1, -2, -3, -3, -4, -6, -8, -11, -12, -12,
-11, -10, -9, -9, -8, -9, -10, -12, -14, -15, -16, -16, -16, -17, -18, -19, -19,
-19, -19, -18, -18, -18, -19, -20, -22, -24, -25, -26, -25, -23, -23, -24, -27,
-30, -32, -31, -30, -28, -29, -31, -33, -34, -34, -33, -32, -31, -32, -33, -35,
-37, -37, -37, -37, -39, -41, -43, -44, -43, -43, -43, -45, -46, -46, -45, -44,
-44, -46, -48, -49, -49, -50, -50, -52, -54, -55, -56, -56, -55, -54, -55, -56,
-57, -57, -58, -58, -58, -58, -59, -60, -61, -62, -63, -64, -65, -66, -66, -68,
-69, -68, -67, -66, -67, -68, -71, -73, -74, -73, -72, -71, -71, -72, -72, -72,
-72, -72, -73, -73, -75, -76, -77, -77, -77, -78, -78, -78, -75, -73, -73, -74,
-76, -77, -78, -77, -76, -76, -77, -78, -79, -78, -76, -75, -74, -74, -75, -76,
-77, -77, -77, -77, -77, -77, -78, -77, -77, -76, -76, -74, -73, -71, -71, -73,
-74, -74, -74, -74, -74, -74, -74, -74, -74, -74, -74, -73, -72, -73, -73, -73,
-73, -71, -70, -69, -69, -69, -69, -69, -69, -68, -67, -66, -66, -65, -64, -63,
-62, -62, -62, -62, -62, -61, -60, -58, -57, -58, -58, -59, -58, -58, -58, -59,
-60, -59, -56, -53, -51, -50, -50, -50, -50, -49, -50, -50, -51, -50, -49, -48,
-47, -47, -46, -44, -42, -41, -41, -41, -42, -42, -41, -41, -40, -40, -40, -39,
-37, -35, -34, -33, -32, -33, -34, -34, -33, -31, -30, -29, -29, -29, -28, -26,
-24, -22, -21, -23, -25, -26, -24, -21, -17, -16, -17, -20, -21, -21, -19, -17,
-16, -16, -16, -15, -14, -13, -11, -9, -8, -7, -6, -6, -7, -7, -7, -6, -5, -3,
-2, 0, 1, 3, 3, 3, 2, 1, 2, 4, 6, 6, 6, 6, 7, 9, 11, 12, 12, 12, 12, 12, 11, 12,
13, 14, 15, 15, 16, 17, 19, 21, 23, 23, 23, 23, 23, 24, 25, 26, 27, 27, 27, 28,
30, 33, 35, 35, 35, 34, 34, 35, 37, 38, 39, 40, 39, 39, 40, 42, 44, 46, 46, 45,
45, 46, 47, 48, 48, 47, 48, 50, 53, 54, 54, 53, 53, 53, 54, 56, 58, 58, 57, 56,
56, 57, 58, 59, 60, 61, 62, 63, 63, 63, 62, 61, 63, 65, 66, 67, 68, 68, 69, 69,
70, 70, 70, 70, 70, 70, 69, 70, 70, 72, 73, 74, 74, 73, 73, 74, 74, 74, 75, 75,
76, 77, 79, 80, 80, 80, 78, 77, 77, 79, 80, 80, 79, 78, 79, 80, 80, 81, 82, 83,
83, 83, 82, 81, 80, 81, 83, 84, 84, 83, 83, 82, 81, 80, 80, 80, 82, 83, 85, 85,
85, 85, 84, 83, 82, 82, 82, 82, 82, 82, 82, 82, 82, 82, 83, 84, 84, 85, 84, 83,
81, 79, 77, 76, 77, 78, 78, 78, 78, 78, 78, 79, 79, 78, 78, 77, 76, 75, 75, 75,
74, 73, 72, 72, 73, 73, 74, 74, 73, 71, 69, 69, 68, 68, 68, 67, 66, 65, 64, 64,
64, 64, 64, 64, 63, 62, 62, 61, 60, 60, 59, 58, 57, 56, 56, 55, 55, 54, 53, 52,
51, 51, 51, 50, 48, 47, 46, 46, 46, 45, 44, 42, 41, 41, 41, 41, 40, 39, 37, 37,
36, 35, 35, 34, 33, 32, 32, 31, 30, 30, 30, 29, 27, 25, 24, 23, 23, 24, 25, 24,
23, 21, 19, 18, 17, 17, 17, 17, 16, 14, 12, 11, 11, 11, 10, 9, 8, 7, 7, 6, 5, 4,
3, 3, 3, 3, 2, 1, -1, -3, -5, -7, -7, -7, -7, -8, -9, -9, -10, -11, -11, -12,
-13, -14, -14, -15, -15, -16, -17, -18, -19, -20, -21, -21, -22, -23, -24, -26,
-27, -28, -29, -29, -29, -28, -28, -29, -29, -31, -32, -34, -34, -35, -35, -36,
-36, -37, -37, -37, -37, -38, -40, -40, -41, -42, -42, -43, -43, -44, -43, -44,
-44, -45, -47, -48, -49, -49, -49, -49, -50, -52, -53, -54, -54, -52, -51, -51,
-53, -55, -57, -58, -58, -58, -58, -58, -59, -59, -58, -58, -58, -58, -59, -59,
-60, -60, -61, -62, -62, -62, -62, -63, -63, -64, -64, -64, -65, -65, -65, -64,
-65, -66, -67, -68, -68, -67, -65, -65, -64, -65, -66, -66, -66, -66, -65, -65,
-65, -66, -67, -67, -67, -67, -67, -67, -68, -67, -67, -66, -65, -65, -66, -68,
-68, -68, -67, -65, -63, -63, -64, -66, -67, -68, -67, -66, -66, -67, -66, -66,
-65, -65, -66, -67, -67, -67, -65, -63, -63, -63, -64, -65, -66, -67, -67, -67,
-67, -65, -64, -64, -66, -67, -67, -65, -62, -60, -60, -61, -62, -63, -63, -62,
-62, -63, -63, -63, -62, -61, -59, -58, -58, -59, -60, -60, -60, -59, -59, -59,
-60, -59, -58, -56, -55, -55, -56, -57, -57, -57, -56, -55, -54, -55, -55, -55,
-54, -52, -51, -50, -50, -52, -54, -53, -52, -50, -48, -49, -51, -52, -51, -49,
-46, -45, -46, -48, -49, -48, -46, -43, -41, -41, -42, -43, -44, -44, -42, -40,
-39, -39, -40, -40, -39, -37, -36, -36, -36, -36, -34, -32, -31, -32, -33, -34,
-35, -34, -33, -31, -29, -29, -29, -29, -29, -29, -28, -27, -27, -27, -27, -26,
-25, -24, -23, -23, -23, -24, -25, -25, -23, -21, -20, -19, -20, -21, -21, -21,
-21, -20, -20, -19, -18, -17, -17, -17, -17, -16, -15, -14, -14, -15, -15, -14,
-14, -13, -13, -12, -11, -10, -9, -8, -8, -8, -7, -7, -7, -7, -8, -8, -8, -7,
-6, -4, -3, -2, -2, -2, -3, -2, -1, 0, -1, -1, -1, 0, 1, 1, 2, 2, 2, 3, 4, 4, 4,
4, 4, 5, 6, 6, 6, 7, 8, 9, 9, 9, 10, 10, 9, 9, 9, 9, 10, 11, 12, 13, 14, 13, 13,
13, 13, 14, 16, 16, 17, 16, 15, 15, 16, 18, 19, 18, 17, 16, 16, 17, 18, 18, 18,
18, 18, 19, 20, 21, 21, 20, 19, 19, 19, 20, 21, 22, 21, 20, 20, 20, 21, 22, 22,
22, 22, 22, 23, 23, 23, 22, 23, 24, 24, 23, 23, 23, 24, 25, 25, 25, 24, 24, 25,
25, 25, 25, 24, 24, 24, 24, 25, 25, 25, 25, 25, 25, 26, 26, 26, 25, 24, 24, 24,
25, 25, 25, 25, 25, 25, 25, 25, 25, 26, 26, 25, 24, 23, 23, 24, 25, 24, 24, 23,
23, 23, 23, 23, 24, 24, 24, 24, 23, 23, 23, 23, 23, 23, 22, 21, 21, 21, 21, 21,
20, 21, 21, 22, 22, 21, 21, 21, 21, 21, 21, 21, 20, 20, 20, 20, 20, 20, 20, 19,
19, 18, 18, 18, 18, 17, 17, 17, 17, 17, 17, 17, 17, 16, 16, 16, 16, 15, 15, 15,
14, 14, 15, 15, 15, 14, 14, 14, 14, 13, 13, 14, 13, 13, 12, 12, 12, 11, 12, 12,
11, 11, 11, 11, 11, 11, 11, 10, 10, 10, 9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
7, 7, 7, 7, 7, 7, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3,
3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, };

#endif /* KICK7_H_ */
