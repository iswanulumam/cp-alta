/**
=======================================
Array of Objects  Mastery: Invoke Spell
=======================================
[INSTRUKSI]
Kael the Invoker memiliki 3 orb yaitu Quas (q), Wex (w), dan Exort (e). Jika orb ini
dikombinasikan maka akan menghasilkan salah satu dari 10 spell yang berbeda!
Diberikan function invokeSpell yang menerima parameter input, dan spell apa saja yang
dimiliki oleh Invoker sudah disediakan dalam bentuk array.
Function akan mengembalikan nama spell dari input yang dimasukkan oleh user, ex:
- input = 'eeq', output = 'Forge Spirit' (karena q = 1, w = 0, e = 2)
- input = 'www', output = 'EMP' (karena q = 0, w = 3, e = 0)
- input = 'wqz', output = 'Combination does not exist' (karena kombinasi tidak ditemukan)

NOTE:
Meskipun input terbalik atau tidak urut (ex: 'qwe', 'ewq', 'weq'), maka akan tetap mengeluarkan
spell yang sama!

Aturan Coding:
--------------
- tidak boleh menggunakan .map, .filter dan .reduce!

*/

// console.log(compare({ q: 3, w: 0, e: 0, spellName: 'Cold Snap' }, { q: 3, w: 0, e: 0 }));

function invokeSpell (input) {
  const spells = [
      { q: 3, w: 0, e: 0, spellName: 'Cold Snap' },
      { q: 0, w: 2, e: 1, spellName: 'Alacrity' },
      { q: 1, w: 0, e: 2, spellName: 'Forge Spirit' },
      { q: 0, w: 0, e: 3, spellName: 'Sunstrike' },
      { q: 1, w: 2, e: 0, spellName: 'Tornado' },
      { q: 0, w: 3, e: 0, spellName: 'EMP' },
      { q: 0, w: 1, e: 2, spellName: 'Chaos Meteor' },
      { q: 1, w: 1, e: 1, spellName: 'Deafening Blast' },
      { q: 2, w: 0, e: 1, spellName: 'Ice Wall' },
      { q: 2, w: 1, e: 0, spellName: 'Ghost Walk' },
  ];
  let compare = function(value, tabel) {
    let same = true;
    for (let i in tabel) {
      if (tabel[i] !== value[i]) {
        same = false;
      }
    }
    return same ? value.spellName : false;
  }

  let tabel = {};
  for (let i in input) {
    if (tabel[input[i]]) {
      tabel[input[i]]++;
    } else {
      tabel[input[i]] = 1;
    }
  }

  let result = '';
  for (let spell of spells) {
    if (compare(spell, tabel) !== false) {
      result = compare(spell, tabel);
    }
  }

  return result !== '' ? result : 'Combination does not exist';
}

console.log(invokeSpell('qweq')); // Deafening Blast
console.log(invokeSpell('ewq')); // Deafening Blast
console.log(invokeSpell('qqq')); // Cold Snap
console.log(invokeSpell('wwq')); // Tornado
console.log(invokeSpell('wwe')); // Alacrity
console.log(invokeSpell('wew')); // Alacrity
console.log(invokeSpell('wqa')); // Combination does not exist

/*

function invokeSpell (input) {
  const spells = [
      { q: 3, w: 0, e: 0, spellName: 'Cold Snap' },
      { q: 0, w: 2, e: 1, spellName: 'Alacrity' },
      { q: 1, w: 0, e: 2, spellName: 'Forge Spirit' },
      { q: 0, w: 0, e: 3, spellName: 'Sunstrike' },
      { q: 1, w: 2, e: 0, spellName: 'Tornado' },
      { q: 0, w: 3, e: 0, spellName: 'EMP' },
      { q: 0, w: 1, e: 2, spellName: 'Chaos Meteor' },
      { q: 1, w: 1, e: 1, spellName: 'Deafening Blast' },
      { q: 2, w: 0, e: 1, spellName: 'Ice Wall' },
      { q: 2, w: 1, e: 0, spellName: 'Ghost Walk' },
  ];

  let map = {};
  for (let i in input) {
    if (map[input[i]] === undefined) {
      map[input[i]] = 1;
    } else {
      map[input[i]]++;
    }
  }

  var compare = function (obj1, obj2) {
    let same = true;
    for (let i in obj2) {
      if (obj1[i] !== obj2[i]) {
        same = false;
      }
    }
    return same ? obj1.spellName : false;
  }

  let result = '';
  for (let spell of spells) {
    if (compare(spell, map) !== false) {
      result = compare(spell, map);
    }
  }
  return result !== ''  ? result : 'Combination does not exist';
}

*/