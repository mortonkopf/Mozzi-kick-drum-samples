# Mozzi-kick-drum-samples
collection of .h files for Mozzi arduino audio library

just some very low-fi kick drum samples to use with Mozzi audio lirary for arduino.

these are converted from RAW using 8bit, not the usual 16bit, so that I can fit more samples onto the Teensy 3.2 board.

Dont expect super sound quality, its made to fit into a very small microcontroller.

To compile some samples yourself, for converting .raw files to the .h header files needed in the Mozzi sketch:

.raw files can be converted from .wav files in Audacity.

audacity menu > file > open

select wav file

highlight and delete sections not wanted

go to Menu > tracks > mix > Mix Stereo down to Mono (files must be mono)

go to file > Export > export Audio (or Export Selected Audio)

choose export file type as “other uncompressed files”
Header = RAW (Headerless)
Encoding = signed 8-Bit PCM (8 bit is smallest size .h file in the end)
then save.

This will produce the RAW file for the converter to use in the terminal window.

open terminal window,

type in: your directory location; eg YOUR_MACHINE_NAME:~ Home$ 
space, then python, then char2mozzi.py with directory location route, the quote marks and the raw file name with its location route, space, then in quotation marks the destination file name, then space, then sample rate. Eg:

YOUR_MACHINE_NAME:~ Home$ python /Users/Home/mozziKicks/python/char2mozzi.py "/Users/Home/wavFiles/kickbank2/APOL8.raw" "/Users/Home/wavFiles/kickbank1/KICKX1_int8.h" KICKX1 4096



Mozzi can be found here: https://sensorium.github.io/Mozzi/

