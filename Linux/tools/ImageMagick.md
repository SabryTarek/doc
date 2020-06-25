[ImageMagick](http://www.imagemagick.org/)
==========================================

> imagemagick:

- free software suite fto create, edit, compose and display of bitmap images
- convert input-file [options] output-file
- Use ImageMagick to translate, flip, mirror, rotate, scale, shear and transform images, adjust image  colors,
       apply various special effects, or draw text, lines, polygons, ellipses and Bézier curves
> interfaces:
- MagickCore (C)
- MagickWand (C)
- ChMagick (Ch)
- Magick++ (C++)
- JMagick (Java)
- L-Magick (Lisp)
- PascalMagick (Pascal)
- PerlMag‐ick (Perl)
- MagickWand for PHP (PHP)
- PythonMagick (Python)
- RMagick (Ruby)
- TclMagick (Tcl/TK).

# Most of you are probably accustom to editing images one at a time with a graphical user interface (GUI) with such programs as gimp or Photoshop. However, a GUI is not always convenient. Suppose you want to process an image dynamically from  a  web script  or you want to apply the same operations to many images or repeat a specific operation at different times to the same or different image. For these types of operations, the command-line image processing utility is appropriate

- ImageMagick includes a number of command-line utilities for manipulating images:
magick
convert between image formats as well as resize an image, blur, crop, despeckle, dither, draw on, flip, join, re-sample, and much more.
magick-script
use this scripting language interpreter to convert between image formats as well as resize an image, blur, crop, despeckle, dither, draw on, flip, join, re-sample, and much more.
We also support tools for compatibility with ImageMagick version 6:

animate
animate an image sequence on any X server.
compare
mathematically and visually annotate the difference between an image and its reconstruction.
composite
overlap one image over another.
conjure
interpret and execute scripts written in the Magick Scripting Language (MSL).
convert
convert between image formats as well as resize an image, blur, crop, despeckle, dither, draw on, flip, join, re-sample, and much more.
display
display an image or image sequence on any X server.
identify
describe the format and characteristics of one or more image files.
import
save any visible window on an X server and outputs it as an image file. You can capture a single window, the entire screen, or any rectangular portion of the screen.
mogrify
resize an image, blur, crop, despeckle, dither, draw on, flip, join, re-sample, and much more. Mogrify overwrites the original image file, whereas, convert writes to a different image file.
montage
create a composite image by combining several separate images. The images are tiled on the composite image optionally adorned with a border, frame, image name, and more.
stream
a lightweight tool to stream one or more pixel components of the image or portion of the image to your choice of storage formats. It writes the pixel components as they are read from the input image a row at a time making stream desirable when working with large images or when you require raw pixel components.
If these tools are not available on your computer, you can instead utilize them as a subcommand of the magick command. For example,

magick identify -verbose myImage.png

---------------------------------------------------------------------------------------------------------------
- ImageMagick depends on a number of external resources including configuration files, loadable modules, fonts, and environment variables

- The ImageMagick command-line tools exit with a status of 0 if the command line arguments have a proper syntax and no problems are encountered. Expect a descriptive message and an exit status of 1 if any exception occurs such as improper syntax, a problem reading or writing an image, or any other problem that prevents the command from completing successfully


---------------------------------------------------------------------------------------------------------------

 # scrot as in screen+shot


# [ImageGraphics](http://www.imagegraphics.org/)
is a clone of imagemagick
