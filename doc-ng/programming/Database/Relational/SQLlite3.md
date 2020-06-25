[SQLite](https://www.sqlite.org/index.html)
===========================================
# sqlite version like python
- sqlite -> sqlite version 2
- sqlite3 -> sqlite version 3


sqlite <databsae_name> # if not exited will be create it EX: sqlite3 example.db


------------------------------------------------------------------------------------------------------------------------
$ sqlite3 example.db
$ sqlite3 example.db "<commands>"
------------------------------------------------------------------------------------------------------------------------
sqlite> CREATE TABLE Student(fname TEXT NOT NULL,lname TEXT NOT Null);
------------------------------------------------------------------------------------------------------------------------
sqlite> INSERT INTO Student VALUES("Sabry","Tarek");
sqlite> INSERT INTO Student VALUES("Mostafa","Tarek");
sqlite> INSERT INTO Student VALUES("Ahmmed","Hassan");
sqlite> INSERT INTO Student VALUES("Omar","Hassan");
sqlite> INSERT INTO Student VALUES("Heba","Hassan");
sqlite> INSERT INTO Student VALUES("Malak","Yasser");
sqlite> INSERT INTO Student VALUES("Moaz","Yasser");
------------------------------------------------------------------------------------------------------------------------
sqlite> SELECT * FROM Student;
Sabry|Tarek
Mostafa|Tarek
Ahmmed|Hassan
Omar|Hassan
Heba|Hassan
Malak|Yasser
Moaz|Yasser
------------------------------------------------------------------------------------------------------------------------
sqlite> SELECT fname FROM Student;
Sabry
Mostafa
Ahmmed
Omar
Heba
Malak
Moaz
------------------------------------------------------------------------------------------------------------------------
sqlite> SELECT lname FROM Student;
Tarek
Tarek
Hassan
Hassan
Hassan
Yasser
Yasser
------------------------------------------------------------------------------------------------------------------------
sqlite> SELECT rowid FROM Student; # row id is automaticliy generated column which used as primry key when you don't spacifiy one
1
2
3
4
5
6
7
------------------------------------------------------------------------------------------------------------------------
sqlite> SELECT rowid,fname,lname FROM Student;
1|Sabry|Tarek
2|Mostafa|Tarek
3|Ahmmed|Hassan
4|Omar|Hassan
5|Heba|Hassan
6|Malak|Yasser
7|Moaz|Yasser
------------------------------------------------------------------------------------------------------------------------
sqlite> SELECT * FROM Student WHERE lname IS "Tarek"; # IS used for exact matches
Sabry|Tarek
Mostafa|Tarek
------------------------------------------------------------------------------------------------------------------------
sqlite> SELECT * FROM Student WHERE lname LIKE "tarek"; # LIKE used for partial matches
Sabry|Tarek
Mostafa|Tarek
------------------------------------------------------------------------------------------------------------------------
sqlite> DELETE FROM Student WHERE lname IS "Yasser";
sqlite> SELECT rowid,fname,lname FROM Student;
1|Sabry|Tarek
2|Mostafa|Tarek
3|Ahmmed|Hassan
4|Omar|Hassan
5|Heba|Hassan
------------------------------------------------------------------------------------------------------------------------
sqlite> ALTER TABLE Student ADD COLUMN phone TEXT;
------------------------------------------------------------------------------------------------------------------------
sqlite> UPDATE Student SET phone="01112566485" WHERE fname IS "Sabry";
sqlite> SELECT *  FROM Student;
Sabry|Tarek|01112566485
Mostafa|Tarek|
Ahmmed|Hassan|
Omar|Hassan|
Heba|Hassan|
------------------------------------------------------------------------------------------------------------------------
sqlite> UPDATE Student SET phone="01*********";
sqlite> SELECT *  FROM Student;
Sabry|Tarek|01*********
Mostafa|Tarek|01*********
Ahmmed|Hassan|01*********
Omar|Hassan|01*********
Heba|Hassan|01*********
------------------------------------------------------------------------------------------------------------------------
CRUD Operations:
- Create
- Read
- Update
- Delete
------------------------------------------------------------------------------------------------------------------------
> Referances:
- [sqlitetutorial](http://www.sqlitetutorial.net)
- [tutorialpoints].https://tutorialpoints.com/sqlite/)

- [sqlitebrowser](https://sqlitebrowser.org/)


------------------------------------------------------------------------------------------------------------------------
sqlite> .help
.auth ON|OFF           Show authorizer callbacks
.backup ?DB? FILE      Backup DB (default "main") to FILE
.bail on|off           Stop after hitting an error.  Default OFF
.binary on|off         Turn binary output on or off.  Default OFF
.cd DIRECTORY          Change the working directory to DIRECTORY
.changes on|off        Show number of rows changed by SQL
.check GLOB            Fail if output since .testcase does not match
.clone NEWDB           Clone data into NEWDB from the existing database
.databases             List names and files of attached databases
.dbinfo ?DB?           Show status information about the database
.dump ?TABLE? ...      Dump the database in an SQL text format
                         If TABLE specified, only dump tables matching
                         LIKE pattern TABLE.
.echo on|off           Turn command echo on or off
.eqp on|off|full       Enable or disable automatic EXPLAIN QUERY PLAN
.exit                  Exit this program
.fullschema ?--indent? Show schema and the content of sqlite_stat tables
.headers on|off        Turn display of headers on or off
.help                  Show this message
.import FILE TABLE     Import data from FILE into TABLE
.imposter INDEX TABLE  Create imposter table TABLE on index INDEX
.indexes ?TABLE?       Show names of all indexes
                         If TABLE specified, only show indexes for tables
                         matching LIKE pattern TABLE.
.limit ?LIMIT? ?VAL?   Display or change the value of an SQLITE_LIMIT
.lint OPTIONS          Report potential schema issues. Options:
                         fkey-indexes     Find missing foreign key indexes
.load FILE ?ENTRY?     Load an extension library
.log FILE|off          Turn logging on or off.  FILE can be stderr/stdout
.mode MODE ?TABLE?     Set output mode where MODE is one of:
                         ascii    Columns/rows delimited by 0x1F and 0x1E
                         csv      Comma-separated values
                         column   Left-aligned columns.  (See .width)
                         html     HTML <table> code
                         insert   SQL insert statements for TABLE
                         line     One value per line
                         list     Values delimited by "|"
                         quote    Escape answers as for SQL
                         tabs     Tab-separated values
                         tcl      TCL list elements
.nullvalue STRING      Use STRING in place of NULL values
.once FILENAME         Output for the next SQL command only to FILENAME
.open ?OPTIONS? ?FILE? Close existing database and reopen FILE
                         The --new option starts with an empty file
.output ?FILENAME?     Send output to FILENAME or stdout
.print STRING...       Print literal STRING
.prompt MAIN CONTINUE  Replace the standard prompts
.quit                  Exit this program
.read FILENAME         Execute SQL in FILENAME
.restore ?DB? FILE     Restore content of DB (default "main") from FILE
.save FILE             Write in-memory database into FILE
.scanstats on|off      Turn sqlite3_stmt_scanstatus() metrics on or off
.schema ?PATTERN?      Show the CREATE statements matching PATTERN
                          Add --indent for pretty-printing
.selftest ?--init?     Run tests defined in the SELFTEST table
.separator COL ?ROW?   Change the column separator and optionally the row
                         separator for both the output mode and .import
.sha3sum ?OPTIONS...?  Compute a SHA3 hash of database content
.shell CMD ARGS...     Run CMD ARGS... in a system shell
.show                  Show the current values for various settings
.stats ?on|off?        Show stats or turn stats on or off
.system CMD ARGS...    Run CMD ARGS... in a system shell
.tables ?TABLE?        List names of tables
                         If TABLE specified, only list tables matching
                         LIKE pattern TABLE.
.testcase NAME         Begin redirecting output to 'testcase-out.txt'
.timeout MS            Try opening locked tables for MS milliseconds
.timer on|off          Turn SQL timer on or off
.trace FILE|off        Output each SQL statement as it is run
.vfsinfo ?AUX?         Information about the top-level VFS
.vfslist               List all available VFSes
.vfsname ?AUX?         Print the name of the VFS stack
.width NUM1 NUM2 ...   Set column widths for "column" mode
                         Negative values right-justify

------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <sqlite3.h> 

int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;

   rc = sqlite3_open("test.db", &db);

   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }
   sqlite3_close(db);
}    
                     