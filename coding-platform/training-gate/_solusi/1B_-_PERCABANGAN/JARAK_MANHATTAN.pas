program jarakmanhattan;
var
  x1, y1, x2, y2: longint;
begin
  read(x1);
  read(y1);
  read(x2);
  read(y2);
  writeln(abs(x1-x2)+abs(y1-y2));
end.