#include "generate.h"
studentas generate(int nd_sk) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(0,1);
    studentas st;
    switch (dist(mt)) {
        case 0: {
            std::uniform_int_distribution<int> dist(0,44);
            switch (dist(mt)) {
                case 0:
                    st.vard = "Lukas";
                    break;
                case 1:
                    st.vard = "Matas";
                    break;
                case 2:
                    st.vard = "Nojus";
                    break;
                case 3:
                    st.vard = "Dominykas";
                    break;
                case 4:
                    st.vard = "Dovydas";
                    break;
                case 5:
                    st.vard = "Rokas";
                    break;
                case 6:
                    st.vard = "Mantas";
                    break;
                case 7:
                    st.vard = "Jonas";
                    break;
                case 8:
                    st.vard = "Jokubas";
                    break;
                case 9:
                    st.vard = "Kajus";
                    break;
                case 10:
                    st.vard = "Ignas";
                    break;
                case 11:
                    st.vard = "Martynas";
                    break;
                case 12:
                    st.vard = "Benas";
                    break;
                case 13:
                    st.vard = "Arnas";
                    break;
                case 14:
                    st.vard = "Tomas";
                    break;
                case 15:
                    st.vard = "Emilis";
                    break;
                case 16:
                    st.vard = "Augustas";
                    break;
                case 17:
                    st.vard = "Deividas";
                    break;
                case 18:
                    st.vard = "Karolis";
                    break;
                case 19:
                    st.vard = "Danielius";
                    break;
                case 20:
                    st.vard = "Paulius";
                    break;
                case 21:
                    st.vard = "Domantas";
                    break;
                case 22:
                    st.vard = "Domas";
                    break;
                case 23:
                    st.vard = "Justas";
                    break;
                case 24:
                    st.vard = "Gabrielius";
                    break;
                case 25:
                    st.vard = "Adomas";
                    break;
                case 26:
                    st.vard = "Kristupas";
                    break;
                case 27:
                    st.vard = "Gustas";
                    break;
                case 28:
                    st.vard = "Titas";
                    break;
                case 29:
                    st.vard = "Joris";
                    break;
                case 30:
                    st.vard = "Laurynas";
                    break;
                case 31:
                    st.vard = "Edvinas";
                    break;
                case 32:
                    st.vard = "Armandas";
                    break;
                case 33:
                    st.vard = "Eimantas";
                    break;
                case 34:
                    st.vard = "Vilius";
                    break;
                case 35:
                    st.vard = "Pijus";
                    break;
                case 36:
                    st.vard = "Erikas";
                    break;
                case 37:
                    st.vard = "Tadas";
                    break;
                case 38:
                    st.vard = "Nedas";
                    break;
                case 39:
                    st.vard = "Markas";
                    break;
                case 40:
                    st.vard = "Ugnius";
                    break;
                case 41:
                    st.vard = "Ernestas";
                    break;
                case 42:
                    st.vard = "Aronas";
                    break;
                case 43:
                    st.vard = "Daniel";
                    break;
                case 44:
                    st.vard = "Vakaris";
                    break;
            }
            switch (dist(mt)) {
                case 0:
                    st.pavard = "Adomaitis";
                    break;
                case 1:
                    st.pavard = "Alekna";
                    break;
                case 2:
                    st.pavard = "Anusauskas";
                    break;
                case 3:
                    st.pavard = "Armonas";
                    break;
                case 4:
                    st.pavard = "Asanavicius";
                    break;
                case 5:
                    st.pavard = "Azubalis";
                    break;
                case 6:
                    st.pavard = "Azuolas";
                    break;
                case 7:
                    st.pavard = "Bakas";
                    break;
                case 8:
                    st.pavard = "Balcytis";
                    break;
                case 9:
                    st.pavard = "Bartosevicius";
                    break;
                case 10:
                    st.pavard = "Baublys";
                    break;
                case 11:
                    st.pavard = "Biciunas";
                    break;
                case 12:
                    st.pavard = "Bukauskas";
                    break;
                case 13:
                    st.pavard = "Butkevicius";
                    break;
                case 14:
                    st.pavard = "Cepononis";
                    break;
                case 15:
                    st.pavard = "Dziugelis";
                    break;
                case 16:
                    st.pavard = "Fiodorovas";
                    break;
                case 17:
                    st.pavard = "Gaizauskas";
                    break;
                case 18:
                    st.pavard = "Gapsys";
                    break;
                case 19:
                    st.pavard = "Gedvilas";
                    break;
                case 20:
                    st.pavard = "Gentvilas";
                    break;
                case 21:
                    st.pavard = "Gentvilas";
                    break;
                case 22:
                    st.pavard = "Glaveckas";
                    break;
                case 23:
                    st.pavard = "Grazulis";
                    break;
                case 24:
                    st.pavard = "Griskevicius";
                    break;
                case 25:
                    st.pavard = "Gudauskas";
                    break;
                case 26:
                    st.pavard = "Jarutis";
                    break;
                case 27:
                    st.pavard = "Jonaitis";
                    break;
                case 28:
                    st.pavard = "Jonauskas";
                    break;
                case 29:
                    st.pavard = "Jovaisa";
                    break;
                case 30:
                    st.pavard = "Juozapaitis";
                    break;
                case 31:
                    st.pavard = "Karbauskis";
                    break;
                case 32:
                    st.pavard = "Kasciunas";
                    break;
                case 33:
                    st.pavard = "Kepenis";
                    break;
                case 34:
                    st.pavard = "Kernagis";
                    break;
                case 35:
                    st.pavard = "Kindurys";
                    break;
                case 36:
                    st.pavard = "Kreivys";
                    break;
                case 37:
                    st.pavard = "Kukuraitis";
                    break;
                case 38:
                    st.pavard = "Kupcinskas";
                    break;
                case 39:
                    st.pavard = "Labanavicius";
                    break;
                case 40:
                    st.pavard = "Landsbergis";
                    break;
                case 41:
                    st.pavard = "Lopata";
                    break;
                case 42:
                    st.pavard = "Majauskas";
                    break;
                case 43:
                    st.pavard = "Maldeikis";
                    break;
                case 44:
                    st.pavard = "Masiulis";
                    break;
            }
            break;
        }
        case 1: {
            std::uniform_int_distribution<int> dist(0,44);
            switch (dist(mt)) {
                case 0:
                    st.vard = "Gabija";
                    break;
                case 1:
                    st.vard = "Emilija";
                    break;
                case 2:
                    st.vard = "Gabriele";
                    break;
                case 3:
                    st.vard = "Kamile";
                    break;
                case 4:
                    st.vard = "Ugne";
                    break;
                case 5:
                    st.vard = "Austeja";
                    break;
                case 6:
                    st.vard = "Ieva";
                    break;
                case 7:
                    st.vard = "Viktorija";
                    break;
                case 8:
                    st.vard = "Vilte";
                    break;
                case 9:
                    st.vard = "Urte";
                    break;
                case 10:
                    st.vard = "Greta";
                    break;
                case 11:
                    st.vard = "Rugile";
                    break;
                case 12:
                    st.vard = "Goda";
                    break;
                case 13:
                    st.vard = "Karolina";
                    break;
                case 14:
                    st.vard = "Migle";
                    break;
                case 15:
                    st.vard = "Auguste";
                    break;
                case 16:
                    st.vard = "Evelina";
                    break;
                case 17:
                    st.vard = "Liepa";
                    break;
                case 18:
                    st.vard = "Ema";
                    break;
                case 19:
                    st.vard = "Deimante";
                    break;
                case 20:
                    st.vard = "Saule";
                    break;
                case 21:
                    st.vard = "Leja";
                    break;
                case 22:
                    st.vard = "Paulina";
                    break;
                case 23:
                    st.vard = "Kotryna";
                    break;
                case 24:
                    st.vard = "Aiste";
                    break;
                case 25:
                    st.vard = "Sofija";
                    break;
                case 26:
                    st.vard = "Patricija";
                    break;
                case 27:
                    st.vard = "Guste";
                    break;
                case 28:
                    st.vard = "Smilte";
                    break;
                case 29:
                    st.vard = "Amelija";
                    break;
                case 30:
                    st.vard = "Karina";
                    break;
                case 31:
                    st.vard = "Agne";
                    break;
                case 32:
                    st.vard = "Eva";
                    break;
                case 33:
                    st.vard = "Akvile";
                    break;
                case 34:
                    st.vard = "Monika";
                    break;
                case 35:
                    st.vard = "Rusne";
                    break;
                case 36:
                    st.vard = "Marija";
                    break;
                case 37:
                    st.vard = "Lukne";
                    break;
                case 38:
                    st.vard = "Laura";
                    break;
                case 39:
                    st.vard = "Samanta";
                    break;
                case 40:
                    st.vard = "Egle";
                    break;
                case 41:
                    st.vard = "Kornelija";
                    break;
                case 42:
                    st.vard = "Erika";
                    break;
                case 43:
                    st.vard = "Simona";
                    break;
                case 44:
                    st.vard = "Milana";
                    break;
            }
            switch (dist(mt)) {
                case 0:
                    st.pavard = "Alekna";
                    break;
                case 1:
                    st.pavard = "Aleknaite";
                    break;
                case 2:
                    st.pavard = "Liucija";
                    break;
                case 3:
                    st.pavard = "Armonaite";
                    break;
                case 4:
                    st.pavard = "Asanaviciute";
                    break;
                case 5:
                    st.pavard = "Baskiene";
                    break;
                case 6:
                    st.pavard = "Bilotaite";
                    break;
                case 7:
                    st.pavard = "Budbergyte";
                    break;
                case 8:
                    st.pavard = "Budbergyte";
                    break;
                case 9:
                    st.pavard = "Daniele";
                    break;
                case 10:
                    st.pavard = "Dobrovolska";
                    break;
                case 11:
                    st.pavard = "Dumbrava";
                    break;
                case 12:
                    st.pavard = "Gedviliene";
                    break;
                case 13:
                    st.pavard = "Girskiene";
                    break;
                case 14:
                    st.pavard = "Jovaisa";
                    break;
                case 15:
                    st.pavard = "Jukna";
                    break;
                case 16:
                    st.pavard = "Kubiliene";
                    break;
                case 17:
                    st.pavard = "Kuzmickiene";
                    break;
                case 18:
                    st.pavard = "Kacinskaite";
                    break;
                case 19:
                    st.pavard = "Kanopa";
                    break;
                case 20:
                    st.pavard = "Leipute";
                    break;
                case 21:
                    st.pavard = "Lengviniene";
                    break;
                case 22:
                    st.pavard = "Lydeka";
                    break;
                case 23:
                    st.pavard = "Linge";
                    break;
                case 24:
                    st.pavard = "Miliute";
                    break;
                case 25:
                    st.pavard = "Mogeniene";
                    break;
                case 26:
                    st.pavard = "Morkunaite";
                    break;
                case 27:
                    st.pavard = "Nagiene";
                    break;
                case 28:
                    st.pavard = "Norkiene";
                    break;
                case 29:
                    st.pavard = "Navickiene";
                    break;
                case 30:
                    st.pavard = "Osmianskiene";
                    break;
                case 31:
                    st.pavard = "Pakarklyte";
                    break;
                case 32:
                    st.pavard = "Pociuniene";
                    break;
                case 33:
                    st.pavard = "Sejoniene";
                    break;
                case 34:
                    st.pavard = "Skaiste";
                    break;
                case 35:
                    st.pavard = "Salaseviciute";
                    break;
                case 36:
                    st.pavard = "Sakaliene";
                    break;
                case 37:
                    st.pavard = "Simonyte";
                    break;
                case 38:
                    st.pavard = "Sirinskiene";
                    break;
                case 39:
                    st.pavard = "Siugzdiniene";
                    break;
                case 40:
                    st.pavard = "Tamasuniene";
                    break;
                case 41:
                    st.pavard = "Targamadze";
                    break;
                case 42:
                    st.pavard = "Starkeviciute";
                    break;
                case 43:
                    st.pavard = "Juska";
                    break;
                case 44:
                    st.pavard = "Bagdonaite";
                    break;
            }
            break;
        }

    }
    for (int i = 0; i < nd_sk; i++) {
        st.nd.push_back((rand() % 10) + 1);
    }
    st.ekzam = (rand() % 10) + 1;
    return st;
}