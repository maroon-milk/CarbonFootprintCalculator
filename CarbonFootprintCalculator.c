#include<stdio.h>
#include <ctype.h>
#include <stdlib.h>


int main(){
    
        
    float ac, Electricity, TV, cocacola, solarenergy;   //Domestic related consumption
    float CNG, LPG, diesel, petrol, LPGVEHC, coal;                                               //Resource consumption
    float beef, chicken, egg, fish, mutton, pork, veg, milk, foodwastage, water, cookingoil; //Food consumption
    float motorcycle, aeroplane, bus, train, autorickshaw, car, bicycle, CarbonFootprint;

    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("* !Welcome to Yash Anand's Carbon Footprint Calculator! *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("Press enter to continue");
    getchar();

    printf("\nThis calculator was created as the pre-existing Carbon Footprint calculators appeared to have a limitation with their criteria in their calculations.\n");
    printf("Additionally, none of these calculators were OpenSource, which means that they would not allow the user to add/remove specific activities to/from the calculator's criteria\n");
    printf("This lack of freedom to modify the criteria as per user's needs, would make the results incomplete and inaccurate.\n");
    printf("This is how the creation of this Carbon Footprint Calculator came into being where we welcome all to make positive modifications to help make it even better.\n");

    printf("\nAre you ready to calculate your Carbon Footprints?\n");
    printf("Press enter to continue");
    getchar();

    printf("\n* * * * * * * * * * * * * * * * * * * * *\n");
    printf("* Round 1: Domestic Energy Consumption! *\n");
    printf("* * * * * * * * * * * * * * * * * * * * *\n");
    printf("Press enter to continue\n");
    getchar();

    printf("\nQ01. How much AIR CONDITIONER do you use kWh/month?\n(As a general rule, an AC of 1 ton uses 1 kWh, 2 ton uses 2 kWh, 3 ton uses 3 kWh of electricity per hour.\n");
    while (scanf("%f", &ac) != 1 || ac < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);
    } printf("The C02e Emmision of your consumption is %f Kg/Month\n", ac * 0.241);
    
    printf("\nQ02. How much in kWh/month is your ELECTRICITY consumption?\n");
    while (scanf("%f", &Electricity) != 1 || Electricity < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("Your C02e Emmision of your consumption is %f Kg/Month\n", Electricity * 0.82);

    printf("\nQ03. How much TV do you use kWh/month?\n(Most TVs use 0.08 to 0.4 kWh/Hour\n");
    while (scanf("%f", &TV) != 1 || TV < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", TV * 0.088);

    printf("\nQ04. How much solar energy do you consume from SOLAR PANELS in kWh/Month\n");
    while (scanf("%f", &solarenergy) != 1 || solarenergy < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", solarenergy * 0.041);

    printf("\n* * * * * * * * * * * * * * * * *\n");
    printf("* Round 2: Resource Consumption *\n");
    printf("* * * * * * * * * * * * * * * * *\n");
    printf("Press enter to continue\n");
    getchar();
    
    printf("\nQ05. How much CNG do you consume Kg/month?\n");
    while (scanf("%f", &CNG) != 1 || CNG < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", CNG * 0.144);

    printf("\nQ06. How much PETROL do you consume Litres/month?\n");
    while (scanf("%f", &petrol) != 1 || petrol < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", petrol * 2.3);

    printf("\nQ07. How much LPG do you consume Kg/month?\n");
    while (scanf("%f", &LPG) != 1 || LPG < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", LPG * 3.0);

    printf("\nQ08. How much DIESEL do you consume Litres/month?\n");
    while (scanf("%f", &diesel) != 1 || diesel < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", diesel * 2.6);

    printf("\nQ09. How much LPG for your vehicle do you consume kg/month?\n");  
    while (scanf("%f", &LPGVEHC) != 1 || LPGVEHC < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", LPGVEHC * 3.06);

    printf("\nQ10. How much COAL do you consume Kg/Month?\n");
    while (scanf("%f", &coal) != 1 || coal < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", coal * 2500000);

    printf("\nQ11. How much WATER do you use as general usage litres/month?\n(This includes drinking water)\n");
    while (scanf("%f", &water) != 1 || water < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", water * 0.298);
    
    printf("\n* * * * * * * * * * * * * * *\n");
    printf("* Round 3: Food Consumption *\n");
    printf("* * * * * * * * * * * * * * *\n");
    printf("Press enter to continue\n");
    getchar();

    printf("\nQ12. How much BEEF do you consume Kg/Month?\n");
    while (scanf("%f", &beef) != 1 || beef < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", beef * 27);

    printf("\nQ13. How much CHICKEN do you consume Kg/Month?\n");
    while (scanf("%f", &chicken) != 1 || chicken < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", chicken * 6.9);

    printf("\nQ14. How many EGGS do you consume Kg/Month?\n(1Kg = 20 Eggs)\n");
    while (scanf("%f", &egg) != 1 || egg < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", egg * 4.8);

    printf("\nQ15. How much FISH do you consume Kg/Month?\n");
    while (scanf("%f", &fish) != 1 || fish < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", fish * 1.34);

    printf("\nQ16. How much MUTTON do you consume Kg/Month?\n");
    while (scanf("%f", &mutton) != 1 || mutton < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", mutton * 39.2);

    printf("\nQ17. How much PORK do you consume Kg/month?\n");
    while (scanf("%f", &pork) != 1 || pork < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", pork * 12.1);

    printf("\nQ18. How much VEGETABLES do you consume kg/Month?\n");
    while (scanf("%f", &veg) != 1 || veg < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", veg * 2.0);

    printf("\nQ19. How much MILK do you consume Litres/Month?\n");
    while (scanf("%f", &milk) != 1 || milk < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", milk * 0.91);

    printf("\nQ20. How much FOOD do you WASTE kg/Month?\n");
    while (scanf("%f", &foodwastage) != 1 || foodwastage < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", foodwastage * 2.5);

    printf("\nQ21. How much COCA-COLA do you consume Litres/Month\n");
    while (scanf("%f", &cocacola) != 1 || cocacola < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", cocacola * 0.17);

    printf("\nQ22. How much COOKING OIL do you consume Litres/Month?\n");
    while (scanf("%f", &cookingoil) != 1 || cookingoil < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", cookingoil * 3.81);


    printf("\n* * * * * * * * * * * *\n");
    printf("* Round 4: Traveling! *\n");
    printf("* * * * * * * * * * * *\n");
    printf("Press enter to continue\n");
    getchar();

    printf("\nQ23. How much do you travel by MOTORCYCLE km/Month?\n");
    while (scanf("%f", &motorcycle) != 1 || motorcycle < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", motorcycle * 0.08);

    printf("\nQ24. How much do you travel by AEROPLANE Km/Month?\n");
    while (scanf("%f", &aeroplane) != 1 || aeroplane < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", aeroplane * 0.146);

    printf("\nQ25. How much do you travel by BUS Km/Month?\n");
    while (scanf("%f", &bus) != 1 || bus < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", bus * 0.103);

    printf("\nQ26. How much do you travel by TRAIN Km/Month?\n");
    while (scanf("%f", &train) != 1 || train < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", train * 0.10);

    printf("\nQ27. How much do you travel by AUTORICKSHAW Km/Month?\n");
    while (scanf("%f", &autorickshaw) != 1 || autorickshaw < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", autorickshaw*0.05);

    printf("\nQ28. How much do you travel by CAR Km/Month?\n");
    while (scanf("%f", &car) != 1 || car < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", car * 0.31);

    printf("\nQ29. How much distance do you travel by BICYCLE in Km/Month?\n");
    while (scanf("%f", &bicycle) != 1 || bicycle < 0) {
        printf("Invalid input. Please try again.\n");
        fflush(stdin);}
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", bicycle * 0.0205052);    
    
    CarbonFootprint = ((Electricity*0.82) + (water*0.298) + (ac * 0.241) + (TV * 0.088) + (LPG*3.0) + (cocacola * 0.17) + (solarenergy * 0.041) + (CNG * 0.144) + (petrol * 2.3) + (diesel * 2.6) + (LPGVEHC*3.06) + (coal*2500000) + (beef*27) + (chicken * 6.9) + (egg * 4.8) + (fish * 1.34) + (mutton*39.2) + (pork*12.1) + (veg*2) + (milk*0.91) + (foodwastage*2.5) + (cookingoil * 3.81) + (motorcycle*0.08) + (aeroplane*0.146) + (bus*0.103) + (train*0.10) + (autorickshaw*0.05) + (car*0.31) + (bicycle*0.0205052));

    printf("\nYour carbon footprint is %f Kg per Month.\n", CarbonFootprint);
    printf("Press ENTER To Compare Your Result With India's Per Capita Carbon Footprint\n");
    getchar();
    printf("For comparison, India's per capita carbon footprint in 2021 was 1900 Kg per YEAR & your carbon footprint per year was %f\n", CarbonFootprint * 12);

    printf("\n\nThank You For Using Yash Anand's Carbon Footprint Calculator!\n");
    printf("Press enter to continue");
    getchar();

    return 0;
    }
