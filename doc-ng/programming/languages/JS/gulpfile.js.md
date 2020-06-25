const gulp = require('gulp'),
      sass = require('gulp-sass'),
      uglify= require('uglify'),






gulp.task("default", ()=> {
    gulp.src()
    .pipe()
    .pipe()
    .pipe()
    .......
    gulp.dest();

});



gulp-image
sass
uglify
clean-css
remane
bumber

----------------------------------------------------------------------------------

# introduction-to-gulp-and-browserify-
introduction to gulp and browserify 

To run the project run
`npm install -g gulp`
`npm install`
`gulp browserify`

var gulp = require('gulp');
var browserify = require('gulp-browserify');
var concat = require('gulp-concat');

gulp.task('browserify', function() {
	gulp.src('./js/App.js')
	.pipe(browserify({}))
	.pipe(concat('build.js'))
	.pipe(gulp.dest('./dest'))
});