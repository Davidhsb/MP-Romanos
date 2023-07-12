#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "romanos.hpp"


TEST_CASE( "Numeros romanos - algarismos unicos", "[romanos]" ) {
    REQUIRE(validate_convert("I") == 1 );
    REQUIRE(validate_convert("V") == 5);
    REQUIRE(validate_convert("X") == 10);
    REQUIRE(validate_convert("L") == 50);
    REQUIRE(validate_convert("C") == 100);
    REQUIRE(validate_convert("D") == 500);
    REQUIRE(validate_convert("M") == 1000);
}
TEST_CASE( "Numeros romanos - algarismos invalidos", "[romanos]" ) {
    REQUIRE(validate_convert("G") == -1 );
    REQUIRE(validate_convert("IXI") == -1);
    REQUIRE(validate_convert("XVV") == -1);
    REQUIRE(validate_convert("MMIM") == -1);
    REQUIRE(validate_convert("XVIV") == -1);
    REQUIRE(validate_convert("XXXXXX") == -1);
    REQUIRE(validate_convert("XVIX") == -1);
    REQUIRE(validate_convert("MMMMMMM") == -1);
    REQUIRE(validate_convert("CCCCCC") == -1);
    REQUIRE(validate_convert("IIIIIII") == -1);
}
TEST_CASE( "Numeros romanos - algarismos validos", "[romanos]" ){
    REQUIRE(validate_convert("XV") == 15);
    REQUIRE(validate_convert("XIX") == 19);
    REQUIRE(validate_convert("MMM") == 3000);
    REQUIRE(validate_convert("CDXXVII") == 427);
    REQUIRE(validate_convert("DCXXXVII") == 637);
    REQUIRE(validate_convert("MMDI") == 2501);
    REQUIRE(validate_convert("CCC") == 300);
    REQUIRE(validate_convert("XXX") == 30);
    REQUIRE(validate_convert("IX") == 9);
    REQUIRE(validate_convert("III") == 3);
    REQUIRE(validate_convert("XI") == 11);
}