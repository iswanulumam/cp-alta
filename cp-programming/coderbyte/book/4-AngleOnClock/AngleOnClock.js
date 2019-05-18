
// @problem angel of clock

function ClockAngle(hour, min) {
  var h = 0.5 * (60 * hour + min);
  var m = 6 * min;
  var angel = Math.abs(h - m);
  return (angel > 180) ? 360 - angel : angel;
}

console.log(ClockAngle(1, 0));