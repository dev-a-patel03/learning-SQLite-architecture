int main(int argc, char **argv){
  sqlite3 *db;            /* Database connection */
  sqlite3_stmt *pStmt;    /* One SQL statement */
  int nCol;               /* Number of columns in the result set */

  db = sqlite3_open(argv[1]);
  pStmt = sqlite3_prepare(db, argv[2]);
  nCol = sqlite3_column_count(pStmt);
  while( sqlite3_step(pStmt)==SQLITE_ROW ){
    int i;
    printf("Row:\n");
    for(i=0; i<nCol; i++){
      printf("  %s = %s\n",
        sqlite3_column_name(pStmt, i),
        sqlite3_column_text(pStmt, i)
      );
    }
  }
  sqlite3_finalize(pStmt);
  sqlite3_close(db);
  return 0;
}
