var num : real;
begin

  readln(num);
  if (num > 0) then
    writeln('NUM=', num:2:2, ' POSITIVO')
  else if (num = 0) then
    writeln('NUM=', num:2:2, ' NULO')
  else 
    writeln('NUM=',num:2:2, ' NEGATIVO');
end.
