// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
#define COMBO_MUST_TAP_MS 100

/ {
    combos {
        compatible = "zmk,combos";
        combo_unlock {
            timeout-ms = <50>;
            key-positions = <30 31>;
            bindings = <&sl 8>;
        };
    };
};
