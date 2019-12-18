program whilecounter;
var
  ctr: integer;
  a: integer;
begin
ctr := 0;
while not eof(input) do
begin
    readln(a);
    inc(ctr,a);    
end;
writeln(ctr);
end.