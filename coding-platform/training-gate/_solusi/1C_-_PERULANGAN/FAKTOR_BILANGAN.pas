program faktor;

var
  n, i: longint;
begin
  read(n);
  for i := n downto 1 do
  if n mod i = 0 then
  writeln(i); 
end.