var model = new Model();

var digitClock = new DigitalClockView();
digitClock.register(model);

var analogClock = new AnalogClockView();
analogClock.register(model);

setInterval(function(){ model.notify(); }, 3000)