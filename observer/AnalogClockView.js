function AnalogClockView() {

    this.register = function (Model) {
        this.Model = Model;
        this.Model.attach(this);
    };

    this.unregister = function (Model) {
        this.Model.detach(this);
    };

    this.update = function (Model) {
        if (this.Model === Model) {
            var analogClockElement = document.getElementById("analogClockContainer");
            analogClockElement.innerHTML = "Analog: " + Model.getCounter();
        }   
    };
}