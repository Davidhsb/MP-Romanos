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
