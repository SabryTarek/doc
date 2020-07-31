sass
=====
- Nested Rules
#main p {
  color: #00ff00;
  width: 97%;

  .redbox {
    background-color: #ff0000;
    color: #000000;
  }
}
is compiled to:

#main p {
  color: #00ff00;
  width: 97%; }
  #main p .redbox {
    background-color: #ff0000;
    color: #000000; }
------------------------------------------------------------------------------------------
- Nested Properties
.funky {
  font: {
    family: fantasy;
    size: 30em;
    weight: bold;
  }
}
is compiled to:

.funky {
  font-family: fantasy;
  font-size: 30em;
  font-weight: bold; }
- ------------------------------------------------------------------------------------------
- Referencing Parent Selectors: &
a {
  font-weight: bold;
  text-decoration: none;
  &:hover { text-decoration: underline; }
  body.firefox & { font-weight: normal; }
}
is compiled to:

a {
  font-weight: bold;
  text-decoration: none; }
  a:hover {
    text-decoration: underline; }
  body.firefox a {
    font-weight: normal; }
------------------------------------------------------------------------------------------
- variables $width || #{$width}  !global flag  -> make it global vatiable
------------------------------------------------------------------------------------------
Directives
----------

- @extend -> inheritance

.error {
  border: 1px #f00;
  background-color: #fdd;
}
.seriousError {
  @extend .error;
  border-width: 3px;
}

is compiled to:

.error, .seriousError {
  border: 1px #f00;
  background-color: #fdd;
}

.seriousError {
  border-width: 3px;
}
------------------------------------------------------------------------------------------
- @import "";    -> If you have a SCSS or Sass file that you want to import but don't want to compile to a CSS file, you can add an underscore to the beginning of the filename.
- 
@import "foo.scss"; == @import "foo";

@import "rounded-corners", "text-shadow";

.example {
  color: red;
}

#main {
  @import "example";
}
would compile to

#main .example {
  color: red;
}
------------------------------------------------------------------------------------------
- @mixin  @include

@mixin large-text {
  font: {
    family: Arial;
    size: 20px;
    weight: bold;
  }
  color: #ff0000;
}
.page-title {
  @include large-text;
  padding: 4px;
  margin-top: 10px;
}
is compiled to:

.page-title {
  font-family: Arial;
  font-size: 20px;
  font-weight: bold;
  color: #ff0000;
  padding: 4px;
  margin-top: 10px; }
Arguments
  @mixin sexy-border($color, $width) {
  border: {
    color: $color;
    width: $width;
    style: dashed;
  }
}

p { @include sexy-border(blue, 1in); }
is compiled to:

p {
  border-color: blue;
  border-width: 1in;
  border-style: dashed; }
  ------------------------------------------------------------------------------------------
- @function double($n){@return $n * 2}
  h1{
    with: double(4);
  }
  ------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------
- @if @else if
$type: monster;
p {
  @if $type == ocean {
    color: blue;
  } @else if $type == matador {
    color: red;
  } @else if $type == monster {
    color: green;
  } @else {
    color: black;
  }
}

is compiled to:

p {
  color: green; }
- @for $i through $total {}
@for $i from 1 through 3 {
  .item-#{$i} { width: 2em * $i; }
}
is compiled to:

.item-1 {
  width: 2em; }
.item-2 {
  width: 4em; }
.item-3 {
  width: 6em; }
- @each $animal in puma, sea-slug, egret, salamander {
  .#{$animal}-icon {
    background-image: url('/images/#{$animal}.png');
  }
}
is compiled to:

.puma-icon {
  background-image: url('/images/puma.png'); }
.sea-slug-icon {
  background-image: url('/images/sea-slug.png'); }
.egret-icon {
  background-image: url('/images/egret.png'); }
.salamander-icon {
  background-image: url('/images/salamander.png'); }
------------------------------------------------------------------------------------------
- @each
@each $animal, $color, $cursor in (puma, black, default),
                                  (sea-slug, blue, pointer),
                                  (egret, white, move) {
  .#{$animal}-icon {
    background-image: url('/images/#{$animal}.png');
    border: 2px solid $color;
    cursor: $cursor;
  }
}
is compiled to:

.puma-icon {
  background-image: url('/images/puma.png');
  border: 2px solid black;
  cursor: default; }
.sea-slug-icon {
  background-image: url('/images/sea-slug.png');
  border: 2px solid blue;
  cursor: pointer; }
.egret-icon {
  background-image: url('/images/egret.png');
  border: 2px solid white;
  cursor: move; }

@each $header, $size in (h1: 2em, h2: 1.5em, h3: 1.2em) {
  #{$header} {
    font-size: $size;
  }
}
is compiled to:

h1 {
  font-size: 2em; }
h2 {
  font-size: 1.5em; }
h3 {
  font-size: 1.2em; }
------------------------------------------------------------------------------------------
- @while
$i: 6;
@while $i > 0 {
  .item-#{$i} { width: 2em * $i; }
  $i: $i - 2;
}
is compiled to:

.item-6 {
  width: 12em; }

.item-4 {
  width: 8em; }

.item-2 {
  width: 4em; }
------------------------------------------------------------------------------------------
- opretor


- Output Style (4) -> --style command-line flag

  - :nested -> use tabs to show parant, default Sass style
    - #main {
  color: #fff;
  background-color: #000; }
  #main p {
    width: 10em; }

.huge {
  font-size: 10em;
  font-weight: bold;
  text-decoration: underline; }
  - :expanded -> human-made CSS style
    - #main {
  color: #fff;
  background-color: #000;
}
#main p {
  width: 10em;
}

.huge {
  font-size: 10em;
  font-weight: bold;
  text-decoration: underline;
}
  - :compact -> takes up less space than Nested or Expanded
    - #main { color: #fff; background-color: #000; }
#main p { width: 10em; }

.huge { font-size: 10em; font-weight: bold; text-decoration: underline; }
  - :compressed -> takes up the minimum amount of space possible
    - #main{color:#fff;background-color:#000}#main p{width:10em}.huge{font-size:10em;font-weight:bold;text-decoration:underline}




------------------------------------------------------------------------------------------
* Resources
  - https://gist.github.com/AllThingsSmitty/3bcc79da563df756be46
  - http://sass-lang.com/documentation/Sass/Script/Functions.html