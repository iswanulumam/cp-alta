function IsPrime(x: Longint): Boolean;
var
  i: Integer;
begin
  IsPrime := true;
  for i := 2 to trunc(sqrt(x)) do
    if x mod i = 0 then
    begin
      IsPrime := false;
      break;
    end;
end;

function power10(x: integer): Longint;
begin
  if x=0 then
    power10 := 1
  else
    power10 := power10(x-1)*10;
end;

function concat(x, y: integer): Longint;
var
  a, b, c, d, e: Integer;
  tmp: Longint;
begin
  a := x;
  b := y;
  c := 0;  
  while (b>0) do
  begin
    b := b div 10;
    inc(c);
  end;
  tmp := x*power10(c)+y;  
  concat := tmp;
end;

var
  sieve: array [0..10000] of Boolean;
  n, m, i, j: integer;
  x: Longint;
  ada: Boolean;
begin    
  fillchar(sieve, sizeof(sieve), true);
  sieve[0] := false;
  sieve[1] := false;

  for i := 2 to trunc(sqrt(10000)) do
    if (sieve[i]) then
    begin
      j := 2*i;
      while (j<=10000) do
      begin
        sieve[j] := false;
        inc(j, i);
      end;
    end;

  readln(n, m);
  ada := false;
  for i := n to m do
  begin
    if not sieve[i] then
      continue;
    for j := n to m do 
    begin
      if not sieve[j] then
        continue;

      x := concat(i, j);      
      if (x > 10000) then
      begin
        if IsPrime(x) then begin
          writeln(i, ' ', j);
          ada := true;
        end;
      end 
      else 
      begin
        if sieve[x] then begin
          writeln(i, ' ', j);
          ada := true;
        end;
      end;
    end;
  end;

  if not ada then
    writeln('TIDAK ADA');
end.