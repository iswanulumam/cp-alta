/*

ROCKET - Operation Evaluator

Proses nested object di bawah ini menjadi operasi matematika dan hitung hasil akhirnya!
diberikan operator +, -, *, dan /. Abaikan pembulatan dan biarkan angka koma tetap ada.
Wajib menggunakan metode rekursif!

*/

function operationEvaluator(operation) {
  if (typeof operation == 'number') {
    return operation;
  } else if (operation.op == '+' && typeof operation.left == 'number') {
    return operation.left + operationEvaluator(operation.right);
  } else if (operation.op == '-' && typeof operation.left == 'number') {
    return operation.left - operationEvaluator(operation.right);
  } else if (operation.op == '*' && typeof operation.left == 'number') {
    return operation.left * operationEvaluator(operation.right);
  } else if (operation.op == '/' && typeof operation.left == 'number') {
    return operation.left / operationEvaluator(operation.right);
  } else if (operation.op == '+' && typeof operation.right != 'number') {
    return operationEvaluator(operation.right) + operationEvaluator(operation.left);
  } else if (operation.op == '-' && typeof operation.right != 'number') {
    return operationEvaluator(operation.right) - operationEvaluator(operation.left);
  } else if (operation.op == '*' && typeof operation.right != 'number') {
    return operationEvaluator(operation.right) * operationEvaluator(operation.left);
  } else if (operation.op == '/' && typeof operation.right != 'number') {
    return operationEvaluator(operation.right) / operationEvaluator(operation.left);
  }
}

var op1 = {
  left: 5,
  op: '-',
  right: {
    left: 3,
    op: '*',
    right: {
      left: 8,
      op: '-',
      right: {
        left: 200,
        op: '/',
        right: 5,
      }
    }
  }
};
// proses: 5 - (3 * (8 - (200 / 5)))
console.log(operationEvaluator(op1)); // 101

var op2 = {
  left: {
    left: 10,
    op: '*',
    right: {
      left: 2,
      op: '+',
      right: 1,
    },
  },
  op: '+',
  right: {
    left: 5,
    op: '*',
    right: {
      left: 1,
      op: '-',
      right: {
        left: 1,
        op: '+',
        right: 2,
      }
    }
  }
};
  
// proses: ((10 * (2 + 1)) * (5 * (1 - (1 + 2)))
console.log(operationEvaluator(op2)); // -300

var op3 = {
  left: {
    left: 10,
    op: '*',
    right: {
      left: 2,
      op: '+',
      right: 1,
    },
  },
  op: '*',
  right: {
    left: 5,
    op: '*',
    right: {
      left: 1,
      op: '-',
      right: {
        left: 1,
        op: '+',
        right: 2,
      }
    }
  }
};
  
// proses: ((10 * (2 + 1)) + (5 * (1 - (1 + 2)))
console.log(operationEvaluator(op3)); // 20