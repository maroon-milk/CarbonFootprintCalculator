#include <stdio.h>

int main(){
    int FamMem, start;
    int ac, Electricity, TV, internet, solarenergy;                                            //Domestic electricity related consumption
    int NGP, LPG, diesel, petrol, LPGVEHC, coal;                                               //Resource consumption
    int beef, chicken, egg, fish, mutton, pork, veg, milk, foodwastage, ro, water, cookingoil; //Food consumption
    int motorcycle, aeroplane, bus, train, autorickshaw, car, bicycle;
    int sharing, CarbonFootprint, score;

    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("* !Welcome to YACFC - Yash Anand's Carbon Footprint Calculator! *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("Press any number to continue.\n");
    scanf("%d", &start);

    printf("\nThis calcutor was created because the pre-existing sites & calculators appeared to have a limitation with their criterias for calculating carbon footprints.\n\n");
    printf("Additionally, none of these calculators were OpenSource, which means that they would not allow the user to add/remove specific activities to/from the calculator's criterias\n\n");
    printf("This lack of freedom to modify the criterias as per user's needs, would make the results incomplete and inaccurate.\n\n");
    printf("Finally, this is how the creation of YACFC came into being - which is an Indian based Carbon Footprint Calculator that welcomes all to make modifications to help make it even better.\n\n");

    printf("Press any number to continue.\n\n");
    scanf("%d", &start);

    printf("So - are you ready to learn about your CO2/KG emissions? If so, Please press any number to start!\n");
    scanf("%d", &start);

    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("* Round 1: Domestic Energy Consumption! Press Any Number To start *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    scanf("%d", &start);

    printf("\nQ1. Do you have access to Solar Energy?\nPress 1 for Yes & 0 for No.\n");
    scanf("%f", &solarenergy);

    printf("\nQ2. How much AIR CONDITIONER do you use kWh/month?\n");
    scanf("%f", &ac);
    printf("The C02 Emmision of your consumption is %d\n", ac * 0.936);
    
    printf("\nQ3. How much ELECTRICITY do you use kWh/month?\n");
    scanf("%f", &Electricity);

    printf("\nQ4. How much TV do you use hour/month?\n");
    scanf("%f", &TV);

    printf("\nQ5. In order to find your digital footprints, tell your internet usage in hour/month\n\n");
    scanf("%f", &internet);

    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("* Round 2: Resource Consumption! Press Any Number To start! *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    scanf("%d", &start);
    
    printf("\nQ6. How much gas/CNG do you consume from your Natural Gas Pipeline kWh/month?\n");
    scanf("%f", &NGP);

    printf("\nQ7. How much LPG do you consume kg/month?\n");
    scanf("%f", &LPG);

    printf("\nQ8. How much LPG for your vehicle do you consume kg/month?\n");
    scanf("%f", &LPGVEHC);  

    printf("\nQ9. How much Petrol do you consume litres/month?\n");
    scanf("%f", &petrol);

    printf("\nQ10. How much Diesel do you consume litres/month?\n");
    scanf("%f", &diesel);

    printf("\nQ11. How much coal do you consume kg/month?\n");
    scanf("%f", &coal);

    printf("\nQ12. How much water do you use litres/month?\n");
    scanf("%f", &water);
    
    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("* Round 3: Food Consumption! Press Any Number To start! *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    scanf("%d", &start);

    printf("\nQ13. How much beef do you consume kg/month?\n");
    scanf("%f", &beef);

    printf("\nQ14. How much chicken do you consume kg/month?\n");
    scanf("%f", &chicken);

    printf("\nQ15. How many eggs do you consume kg/month?\n");
    scanf("%f", &egg);

    printf("\nQ16. How much fish do you consume kg/month?\n");
    scanf("%f", &fish);

    printf("\nQ17. How much mutton do you consume kg/month?\n");
    scanf("%f", &mutton);

    printf("\nQ18. How much pork do you consume kg/month?\n");
    scanf("%f", &pork);

    printf("\nQ19. How much vegetables do you consume kg/month?\n");
    scanf("%f", &veg);

    printf("\nQ20. How much milk do you consume kg/month?\n");
    scanf("%f", &milk);

    printf("\nQ21. How much food do you waste kg/month?\n");
    scanf("%f", &foodwastage);

    printf("\nQ22. How much water do you consume from your RO litres/month?\n");
    scanf("%f", &ro);

    printf("\nQ23. How much cooking oil do you consume litres/month?\n\n");
    scanf("%f", &cookingoil);

    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("* Round 4: Traveling! Press Any Number To start! *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    scanf("%d", &start);

    printf("\nQ24. How much do you travel by motorcycle km/month?\n");
    scanf("%f", &motorcycle);

    printf("\nQ25. How much do you travel by aeroplane km/month?\n");
    scanf("%f", &aeroplane);

    printf("\nQ26. How much do you travel by bus km/month?\n");
    scanf("%f", &bus);

    printf("\nQ27. How much do you travel by train km/month?\n");
    scanf("%f", &train);

    printf("\nQ28. How much do you travel by autorickshaw km/month?\n");
    scanf("%f", &autorickshaw);

    printf("\nQ29. How much do you travel by car km/month?\n");
    scanf("%f", &car);

    printf("\nQ30. Do you use bicycle from travelling in a month?\nPress 1 for Yes & 0 for No.\n");
    scanf("%f", &bicycle);

    CarbonFootprint = ((ac * 0.936) + (Electricity * 0.82) + (TV * 0.00048) + (internet * 0.0006) + (solarenergy * 0) + (NGP * 0.2) + (petrol * 2.33) + (LPG * 1.5) + (diesel * 2.68) + (LPGVEHC*3.06) + (coal*2750) + (beef*27) + (chicken * 6.9) + (egg * 0.9) + fish * 3.3 + (mutton*39.2) + (pork*7.6) + (veg*0.5) + (milk*0.91) + (foodwastage*0.61) + (ro*0.72) + (water*0.011) + (cookingoil * 3.02) + (motorcycle*0.08) + (aeroplane*0.184) + (bus*0.09) + (train*0.04) + (autorickshaw*0.04) + (car*0.15) + (bicycle*0.125));

    printf("\nYour carbon footprint is %f kg per month.\n", CarbonFootprint);
    printf("Press any number to be graded for your result.\n");
    scanf("%d", &start);

    printf("\nKindly take you grading lightly as they are not an accurate representation of how much KG of CarbonFootprint qualifies as 'Good' or 'Bad'.\nYou scored: ");

    if (CarbonFootprint < 500) {
        printf("A+");
    } else if (CarbonFootprint >= 500 && CarbonFootprint < 1000) {
        printf("A");
    } else if (CarbonFootprint >= 1000 && CarbonFootprint < 1500) {
        printf("B+");
    } else if (CarbonFootprint >= 1500 && CarbonFootprint < 2000) {
        printf("B");
    } else if (CarbonFootprint >= 2000 && CarbonFootprint < 2500) {
        printf("C+");
    } else if (CarbonFootprint >= 2500 && CarbonFootprint < 3000) {
        printf("C");
    } else if (CarbonFootprint >= 3500 && CarbonFootprint < 4000) {
        printf("D+");
    } else if (CarbonFootprint >= 4000 && CarbonFootprint < 4500) {
        printf("D");
    } else if (CarbonFootprint >= 4500 && CarbonFootprint < 5000) {
        printf("E");
    } else if (CarbonFootprint >= 5000) {
        printf("FAILED");
    }

    printf("\n\nFor comparison, here is how other scores are graded:\n");
    printf("A+  = Between 0500 & 1000\n");
    printf("A   = Between 1000 & 1500\n");        
    printf("B+  = Between 1500 & 2000\n");
    printf("B   = Between 2000 & 2500\n");
    printf("C+  = Between 2500 & 3000\n");
    printf("C   = Between 3500 & 4000\n");
    printf("D+  = Between 4000 & 4500\n");
    printf("D   = Between 4500 & 5000\n");
    printf("E   = More than 5000");

    printf("\n\nThank You For Using Yash Anand's Carbon Footprint Calculator!\n\nPress Any Number To Exit.");
    scanf("%d", &start);


    return 0;
}
