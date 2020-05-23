#include <string>
#include "PSPMapper.h"

PSPMapper::PSPMapper() {
    stockGames["tk6"] = {6, 1, 2};
    stockGames["TK5"] = {6, 1, 2};
    stockGames["MortalKombat"] = {6, 1, 2};
    stockGames["SoulEater"] = {6, 1, 2};
    stockGames["Weekly"] = {6, 1, 2};
    stockGames["WWEAllStar"] = {6, 1, 2};
    stockGames["KidouSenshiGundam"] = {6, 1, 1};
    stockGames["NarutoShippuuden"] = {0, 5, 1};
    stockGames["Daxter"] = {0, 5, 1};
    stockGames["CangYiMSL2"] = {6, 1, 2};
    stockGames["NBA06"] = {0, 1, 1};
    stockGames["RidgeRacer2"] = {2, 5, 1};
    stockGames["HeatSeeker"] = {6, 2, 1};
    stockGames["InitialD"] = {2, 1, 1};
    stockGames["GTCar"] = {2, 1, 1};
    stockGames["wipeout"] = {5, 2, 1};
    stockGames["JiaTingJS"] = {6, 1, 1};
    stockGames["MouFaSNNY"] = {6, 1, 1};
    stockGames["taoguiZ"] = {0, 1, 1};
    stockGames["WuShuangDS"] = {0, 1, 1};
    stockGames["zs5"] = {0, 1, 1};
    stockGames["GuiltyGear"] = {6, 3, 2};
    stockGames["FateUnlimitedCode"] = {6, 5, 1};
    stockGames["SoulcaliburBrokenDestiny"] = {6, 1, 1};
    stockGames["PowerStoneCollection"] = {6, 5, 1};
    stockGames["StreetFighterAlpha3Max"] = {0, 4, 2};
    stockGames["DragonBallZ"] = {6, 4, 1};
    stockGames["bleach"] = {0, 2, 1};
    stockGames["PacManWorld3"] = {0, 1, 1};
    stockGames["MegaManX"] = {0, 5, 1};
    stockGames["LocoRoco"] = {3, 1, 1};
    stockGames["AuditionPortable"] = {6, 1, 1};
    stockGames["Luxor"] = {0, 1, 1};
    stockGames["Numpla10000Mon"] = {6, 1, 1};
    stockGames["7wonders"] = {6, 4, 1};
    stockGames["Numblast"] = {6, 1, 1};
    stockGames["FinalFantasy"] = {0, 2, 1};
    stockGames["CiKeXT"] = {0, 2, 1};
    stockGames["pes2012"] = {0, 2, 4};
    stockGames["gwlrP3"] = {0, 2, 1};

    controlFixes["psp0000"] = {
            "psp0000"
            "PSP Injector",
            "pandory-media-psp0000",
            "https://github.com/emuchicken/pandory-media/archive/psp0000.tar.gz",
    };

    controlFixes["pes2012"] = {
            "Pes 2012",
            "pandory-media-ULAS42289-pes2012",
            "https://github.com/emuchicken/pandory-media/archive/ULAS42289-pes2012.tar.gz",
            "",
            "ULAS42289_1.00_0.ini",
            "ULAS42289_1.00_1.ini",
            "ULAS42289_2p.ini",
            "KeyRecordpes2012.ini"
    };

    controlFixes["MortalKombat"] = {
            "Mortal Kombat",
            "pandory-media-ULES00353-MortalKombat",
            "https://github.com/emuchicken/pandory-media/archive/ULES00353-MortalKombat.tar.gz",
            "",
            "ULES00353_1.03_0.ini",
            "ULES00353_1.03_1.ini",
            "",
            "KeyRecordMortalKombat.ini"
    };

    controlFixes["GuiltyGear"] = {
            "Guilty Gear",
            "pandory-media-ULJM05355-GuiltyGear",
            "https://github.com/emuchicken/pandory-media/archive/ULJM05355-GuiltyGear.tar.gz",
            "",
            "ULJM05355_1.00_0.ini",
            "ULJM05355_1.00_1.ini",
            "ULJM05355_2p.ini",
            ""
    };

    controlFixes["Weekly"] = {
            "Weekly",
            "pandory-media-ULJM05450-Weekly",
            "https://github.com/emuchicken/pandory-media/archive/ULJM05450-Weekly.tar.gz",
            "",
            "ULJM05450_1.05_0.ini",
            "ULJM05450_1.05_1.ini",
            "ULJM05450_2p.ini",
            "KeyRecordMortalKombat.ini"
    };

    controlFixes["SoulcaliburBrokenDestiny"] = {
            "Soulcalibur Broken Destiny",
            "pandory-media-ULJS00202-SoulcaliburBrokenDestiny",
            "https://github.com/emuchicken/pandory-media/archive/ULJS00202-SoulcaliburBrokenDestiny.tar.gz",
            "",
            "ULJS00202_1.01_0.ini",
            "ULJS00202_1.01_1.ini",
            "ULJS00202_2p.ini",
            "KeyRecordSoulcaliburBrokenDestiny.ini"
    };

    controlFixes["TK5"] = {
            "Tekken 5",
            "pandory-media-ULUS10139-TK5",
            "https://github.com/emuchicken/pandory-media/archive/ULUS10139-TK5.tar.gz",
            "",
            "ULUS10139_1.00_0.ini",
            "ULUS10139_1.00_1.ini",
            "ULUS10139_2p.ini",
            "KeyRecordTK5.ini"
    };

    controlFixes["tk6"] = {
            "Tekken 6",
            "pandory-media-ULUS10466-tk6",
            "https://github.com/emuchicken/pandory-media/archive/ULUS10466-tk6.tar.gz",
            "",
            "ULUS10466_1.00_0.ini",
            "ULUS10466_1.00_1.ini",
            "ULUS10466_2p.ini",
            "KeyRecordtk6.ini"
    };

    controlFixes["WWEAllStars"] = {
            "WWE All-Stars",
            "pandory-media-ULUS10544-WWEAllStars",
            "https://github.com/emuchicken/pandory-media/archive/ULUS10544-WWEAllStars.tar.gz",
            "",
            "ULUS10544_1.00_0.ini",
            "ULUS10544_1.00_1.ini",
            "ULUS10544_2p.ini",
            "KeyRecordWWEAllStar.ini"
    };

    controlFixes["CangYiMSL2"] = {
            "CangYiMSL2",
            "pandory-media-ULUS10579-CangYiMSL2",
            "https://github.com/emuchicken/pandory-media/archive/ULUS10579-CangYiMSL2.tar.gz",
            "",
            "ULUS10579_1.01_0.ini",
            "ULUS10579_1.01_1.ini",
            "ULUS10579_2p.ini",
            ""
    };

    controlFixes["PowerStoneCollection"] = {
            "PowerStoneCollection",
            "pandory-media-ULUS10171-PowerStoneCollection",
            "https://github.com/emuchicken/pandory-media/archive/ULUS10171-PowerStoneCollection.tar.gz",
            "",
            "ULUS10171_1.00_0.ini",
            "",
            "",
            ""
    };
}

const std::map<std::string, pspConfigGameDef> &PSPMapper::getStockGames() const {
    return stockGames;
}

const std::map<std::string, downloadDefinition> &PSPMapper::getControlFixes() const {
    return controlFixes;
}