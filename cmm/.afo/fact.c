fact(n){
  if n<1 then return 0;
  else return n + fact(n-1);
  endif;
}

main{
  var n;

  read n;
  write fact(n);
  writeln;
}
