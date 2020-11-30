Hello reviewer,

I'd like to point out some problems and challenges that I'm having with my project, as it may explain why 
the basics are not yet standing.

1. It is not easy to obtain a suitable digital music files. In my case, I was able to figure out a way, however,
it is rather tedious. For graphic rendering the Guido Projec Lib is best suitable and also compatible with Qt.
But, the GuidoLib can only read GMN (.gmn) files and these are not easily obtained.
For this, I must convert a rather common digital music file format MusicXML (.xml) into a .gnm format with 
the MusicXML Lib. This is where I'm having problems: Installing the library. The build is stopped and I get
the following error message (imgs 1 and 2). To me it is not clear how to fix this problem, thus I've not been
able to add this lib to my project.

2. Due to lack of clear documentation (or at least for me) I've not been able to figure out how to extract the
info I need from the either digital music file format and put it into a container (as you surely see or will
see, I've chosen std::vector, as they can be easily used for comparing stuff) or even whether the GuidoLib/
MusicXML Lib has a function which does the comparing for me. There is more I have to read in that department.
This also leads to the question from which format it would be best to extract the info from, i.e. should I 
only work with the xml file and then solely convert it to GMN for graphic rendering purposes or should I work 
with the GMN format directly. This is a problem I hope I can solve soon as I've found some documentation on
GuidoLib, but I still need to read through it.

3. At the moment I have nothing written to display any form of img as I've had problems finding any 
documentation for GuidoLib and Qt. However, today I was able to find a paper that may help.

4. Not everything is connected to the widget as there are functions missing. Don't know yet what is exactly
needed. 

All in all I think you can agree, I'm suuuuuper behind on anything and everything.

Thanks for taking the time and reading through my barely existing code.