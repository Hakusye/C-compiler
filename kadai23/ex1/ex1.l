%%

"+"      { return PLUS; }
"-"      { return MINUS; }
"*"      { return MULT; }
"/"      { return DIV; }
"%"      { return MOD; }
"^"      { return POW; }
[0-9]+   { yylval = atoi(yytext); return NUM; }
"\n"     { return NL; }
[ \t]+   { /* do nothing */ }
.        { /* do nothing */ }
