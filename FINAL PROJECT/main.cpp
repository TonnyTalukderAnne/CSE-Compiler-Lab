#include<bits/stdc++.h>
#include "new.h"
using namespace std;

int main() {
    dekhao("TONNYLang e tomar shagotom!");

    dekhao("Doya kore duita songkha dao:");
    int a = nau();
    int b = nau();

    int jog = Jogkoro(a, b);
    int biyog = komao(a, b);
    int gun = Gunkoro(a, b);
    int vag = vagkoro(a, b);

    dekhao("Jogfol: " + to_string(jog));
    dekhao("Biyogfol: " + to_string(biyog));
    dekhao("Gunfol: " + to_string(gun));
    dekhao("Vagfol: " + to_string(vag));

    if (a > b) {
        dekhao("a b theke boro");
    } else {
        dekhao("nahole b boro");
    }

    dekhao("Protibar loop:");
    for (int i = 1; i <= 3; i++) {
        cout << "protibar: " << i << endl;
    }

    int c = 0;
    dekhao("Jotokkhon loop:");
    while (c < 3) {
        cout << "jotokkhon: " << c << endl;
        c++;
    }

    int d = 2;
    switch (d) {
        case 1:
            dekhao("obostha 1");
            break;
        case 2:
            dekhao("obostha 2");
            break;
        default:
            dekhao("konobosthai nai");
    }

    for (int i = 0; i < 5; i++) {
        if (i == 2) continue;
        cout << "cholteythako: " << i << endl;
    }

    int result = kajkoro(4);
    dekhao("kajkoro result: " + to_string(result));
    cout << "ferotkoro: " << ferotkoro(result) << endl;

    dhoronManush amr;
    amr.nam = "Tonny";
    amr.boyosh = 21;
    amr.infoDekhao();

    cheshtakoro_dhoro_example();

    bool shotti = true;
    bool mittha = false;

    if (shotti && !mittha) {
        dekhao("Eta shotti ebong mittha noy.");
    }

    if (shotti || mittha) {
        dekhao("Eta shotti othoba mittha.");
    }

    return 0;
}
