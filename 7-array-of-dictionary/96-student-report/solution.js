/*

Students Report

Diberikan sebuah function bernama getReport.
Function akan menerima sebuah parameter array of object dengan format:
[
  { name: <nama student>, score: <score student>, classCode: <kode kelas>},
  { name: <nama student>, score: <score student>, classCode: <kode kelas>},
...
]
Data di atas merupakan campuran seluruh nilai student dari kelas manapun.
Function akan memproses array of object tersebut untuk membuat sebuah report dalam bentuk array of object dengan format:
[
  { classCode: <kode kelas>, passed: <array berisi nama student yg lulus>, failed: <array berisi nama student yg failed> },
  { classCode: <kode kelas>, passed: <array berisi nama student yg lulus>, failed: <array berisi nama student yg failed> },
...
]
Data yang diharapkan merupakan akumulasi student yang lulus dan tidak dari setiap kelas.
Standard kelulusan adalah minimum 70.
*/

function getReport(studentGrades) {
  let data = [];

  let dataA = { classCode: 'A', passed: [], failed: [] };
  let dataB = { classCode: 'B', passed: [], failed: [] };
  let dataC = { classCode: 'C', passed: [], failed: [] };

  for (let student of studentGrades) {
    if (student.classCode === 'A') {
      if (student.score >= 70) {
        dataA.passed.push(student.name);
      } else {
        dataA.failed.push(student.name);
      }
    }
    if (student.classCode === 'B') {
      if (student.score >= 70) {
        dataB.passed.push(student.name);
      } else {
        dataB.failed.push(student.name);
      }
    }
    if (student.classCode === 'C') {
      if (student.score >= 70) {
        dataC.passed.push(student.name);
      } else {
        dataC.failed.push(student.name);
      }
    }
  }
  return [dataA, dataB, dataC];
}

var grades1 = [
  { name: 'John', score: 80, classCode: 'A' },
  { name: 'Mike', score: 60, classCode: 'B' },
  { name: 'Budi', score: 70, classCode: 'C' },
  { name: 'Siti', score: 50, classCode: 'A' },
  { name: 'Aaron', score: 10, classCode: 'A' },
  { name: 'Arthur', score: 10, classCode: 'C' },
  { name: 'Osass', score: 10, classCode: 'B' },
  { name: 'Yolo', score: 90, classCode: 'C' },
];

console.log(getReport(grades1));

/*
[
  {
    classCode: 'A',
    passed: [ 'John' ],
    failed: [ 'Siti', 'Aaron' ]
  },
  {
    classCode: 'B',
    passed: [],
    failed: [ 'Mike', 'Osass' ]
  },
  {
    classCode: 'C',
    passed: [ 'Budi', 'Yolo' ],
    failed: [ 'Arthur' ]
  },
]
*/