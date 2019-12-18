program ffunction;

function Valid(n: integer): boolean;
begin
    Valid := (n >= 0) and (n <= 10);
end;

function Faktorial(n: integer): longint;
begin
    if (n = 0) then
        Faktorial := 1
    else
        Faktorial := n * Faktorial (n - 1);
end;

var
    bil: integer;
begin
    readln(bil);
    if (Valid(bil)) then
        writeln(Faktorial(bil))
    else
        writeln('ditolak');
end.