// Glowing and Saving Project
// Give cheap dubs for expensive skincare
// Jenna Krueger and Lan Bui

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void Cleansing();
void Moisturizing();
void Miscellaneous();

int main()
{
   int holdValue;
   char response; 
   cout << "Please pick from one of the Categories: \n";
   cout << "1: " << setw(16) << "Cleansing\n";
   cout << "2: " << setw(16) << "Moisturizing\n";
   cout << "3: " << setw(16) << "Miscellaneous\n";
   cout << "\nPlease enter the number for the category you want: ";
   cin >> holdValue;

   while ((holdValue < 1) || (holdValue > 3))
   {
      cout << "The answer you have provided is out of range. Please try again\n\n";
      cout << "Please pick from one of the Categories: \n";
      cout << "1: " << setw(16) << "Cleansing\n";
      cout << "2: " << setw(16) << "Moisturizing\n";
      cout << "3: " << setw(16) << "Miscellaneous\n";
      cout << "\nPlease enter the number for the category you want: ";
      cin >> holdValue;
   }

   if (holdValue == 1)
   {
      Cleansing();
   }
   else if (holdValue == 2)
   {
      Moisturizing();
   }
   
   else if (holdValue == 3)
   {
      Miscellaneous();
   }
   else
   {
      cout << "ERROR\a Something has gone wrong. Please exit program!!\n\n";
   }

   cout << endl << endl << "Would you like to make a recommendation/ request a product be added? (Respond y/n)\n";
   cin >> response; 

   if ((response == 'y') || (response == 'Y')) 
   {
      cout << "\n[Give option to take picture of product/ text box option to write response]\n\n";
   }
   
   return 0;
}


void Cleansing()
{
   int value;
   cout << "\n\n\nPlease choose the product you would like a cheaper version of: \n\n";
   cout << "Number   " << "Product " << setw(43) << "Cost\n";
   cout << "-----------------------------------------------------------\n\n";
   cout << "1:       " << "Bioderma Micellar Water" << setw(28) << "$15\n\n";
   cout << "2:       " << "Biologique Recherche's p50 1970" << setw(20) << "$95\n\n";
   cout << "3:       " << "Drunk Elephant T.L.C. Sukari Baby Facial" << setw(11) << "$80\n\n";
   cout << "4:       " << "First Aid Beauty's Facial Radiance Pads" << setw(12) << "$36\n\n";
   cout << "5:       " << "Tatcha Rice Polish Foaming Enzyme Powder" << setw(11) << "$65\n\n";
   cout << "6:       " << "Farmacy's Green Clean Cleansing Balm" << setw(15) << "$34\n\n";
   cout << "7:       " << "Drunk Elephant Beste No. 9 Jelly Cleanser" << setw(6) << "$32\n\n";
   cout << "8:       " << "Bobbi Brown Soothing Cleansing Oil" << setw(17) << "$50\n\n";
   cout << "Product Number? ";
   cin >> value;

   switch (value)
   {
   case 1:
      cout << "\n\nEXPENSIVE PRODUCT: Bioderma Micellar Water for $15\n";
      cout << "------------------------------------------------------\n";
      cout << "CHEAPER DUPE: Garnier Micellar Cleanse Water for $7\n";
      break;
   case 2:
      cout << "\n\nEXPENSIVE PRODUCT: Biologique Recherche's p50 1970 for $95\n";
      cout << "--------------------------------------------------------------\n";
      cout << "CHEAPER DUPE: Tarte's Knockout Tingle Treatment Toner for $39\n";
      break;
   case 3:
      cout << "\n\nEXPENSIVE PRODUCT: Drunk Elephant T.L.C. Sukari Baby Facial for $80\n";
      cout << "-----------------------------------------------------------------------\n";
      cout << "CHEAPER DUPE: The Ordinary's AHA 30% Peeling Solution for $7.20\n";
      break;
   case 4:
      cout << "\n\nEXPENSIVE PRODUCT: First Aid Beauty's Facial Radiance Pads for $36\n";
      cout << "----------------------------------------------------------------------\n";
      cout << "CHEAPER DUPE: Nip and Fab Glycolic Fix Night Pads Extreme for $22.95\n";
      break;
   case 5:
      cout << "\n\nEXPENSIVE PRODUCT: Tatcha Rice Polish Foaming Enzyme Powder for $65\n";
      cout << "-----------------------------------------------------------------------\n";
      cout << "CHEAPER DUPE: Tosowoong's Enzyme Powder Wash for $10\n";
      break;
   case 6:
      cout << "\n\nEXPENSIVE PRODUCT: Farmacy's Green Clean Cleansing Balm for $34\n";
      cout << "-------------------------------------------------------------------\n";
      cout << "CHEAPER DUPE: Banila Co's Clean It Zero Cleansing Balm for $27\n";
      break;
   case 7:
      cout << "\n\nEXPENSIVE PRODUCT: Drunk Elephant Beste No. 9 Jelly Cleanser for $32\n";
      cout << "------------------------------------------------------------------------\n";
      cout << "CHEAPER DUPE: CeraVe Foaming Facial Cleanser for $14\n";
      break;
   case 8:
      cout << "\n\nEXPENSIVE PRODUCT: Bobbi Brown Soothing Cleansing Oil for $50\n";
      cout << "-----------------------------------------------------------------\n";
      cout << "CHEAPER DUPE: The Face Shop Rice Water Bright Light Cleansing Oil for $13\n";
      break;
   default:
      cout << "The value you input was not recognized by our systems. Please rerun the program and try again.\n";
      break;
   }

}

void Moisturizing()
{
   int value;
   cout << "\n\n\nPlease choose the product you would like a cheaper version of: \n\n";
   cout << "Number   " << "Product " << setw(58) << "Cost\n";
   cout << "-----------------------------------------------------------\n\n";
   cout << "1:       " << "Smashbox Photo Finish Oil Primer" << setw(35) << "$42\n\n";
   cout << "2:       " << "Drunk Elephant Virgin Marula Luxury Face Oil" << setw(23) << "$72\n\n";
   cout << "3:       " << "Mario Badescu Facial Spray with Aloe Herbs and Rosewater" << setw(11) << "$12\n\n";
   cout << "4:       " << "Tatcha Water Cream" << setw(49) << "$68\n\n";
   cout << "5:       " << "Dr. Jart's Tiger Grass Serum" << setw(39) << "$49\n\n";
   cout << "6:       " << "Ole Henriksen's Truth Serum" << setw(40) << "$50\n\n";
   cout << "7:       " << "SkinMedica TNS Essential Serum" << setw(37) << "$265\n\n";
   cout << "8:       " << "Sk-II Facial Treatment Essence" << setw(37) << "$235\n\n";
   cout << "9:       " << "La Mer's Creme de la Mer" << setw(43) << "$345\n\n";
   cout << "10:      " << "Sunday Riley ICE Ceramide Moisturizing Creme" << setw(23) << "$65\n\n";
   cout << "11:      " << "Kiehl's Midnight Recovery Concentrate" << setw(30) << "$52\n\n";
   cout << "Product Number? ";
   cin >> value;

   switch (value)
   {
   case 1:
      cout << "\n\nEXPENSIVE PRODUCT: Smashbox Photo Finish Oil Primer for $42\n";
      cout << "---------------------------------------------------------------\n";
      cout << "CHEAPER DUPE: Nyx's Hydra Touch Oil Primer for $14\n\n";
      break;
   case 2:
      cout << "\n\nEXPENSIVE PRODUCT: Drunk Elephant Virgin Marula Luxury Face Oil for $72\n";
      cout << "---------------------------------------------------------------------------\n";
      cout << "CHEAPER DUPE: InstaNatural's Organic Marula Oil for $15\n\n";
      break;
   case 3:
      cout << "\n\nEXPENSIVE PRODUCT: Mario Badescu Facial Spray with Aloe Herbs and Rosewater for $12\n";
      cout << "---------------------------------------------------------------------------------------\n";
      cout << "CHEAPER DUPE: Garnier's SkinActive Soothing Facial Mist for $8\n\n";
      break;
   case 4:
      cout << "\n\nEXPENSIVE PRODUCT: Tatcha Water Cream for $68\n";
      cout << "--------------------------------------------------\n";
      cout << "CHEAPER DUPES: Neutrogena's Hydro Boost Gel Cream for $18\n";
      cout << "CHEAPER DUPES: MAKEP:REM's Hydrate Me Micro Tension Cream for $30\n\n";
      break;
   case 5:
      cout << "\n\nEXPENSIVE PRODUCT: Dr. Jart's Tiger Grass Serum for $49\n";
      cout << "-----------------------------------------------------------\n";
      cout << "CHEAPER DUPE: Purito's Centella Green Level Buffect Serum for $17.25\n\n";
      break;
   case 6:
      cout << "\n\nEXPENSIVE PRODUCT: Ole Henriksen's Truth Serum for $50\n";
      cout << "----------------------------------------------------------\n";
      cout << "CHEAPER DUPE: LilyAna Naturals' Vitamin C Serum for $24\n\n";
      break;
   case 7:
      cout << "\n\nEXPENSIVE PRODUCT: SkinMedica TNS Essential Serum for $265\n";
      cout << "--------------------------------------------------------------\n";
      cout << "CHEAPER DUPE: Eve Hansen Hydrating Hyaluronic Acid Serum for $22.98\n\n";
      break;
   case 8:
      cout << "\n\nEXPENSIVE PRODUCT: Sk-II Facial Treatment Essence for $235\n";
      cout << "--------------------------------------------------------------\n";
      cout << "CHEAPER DUPE: Secret Key's Starting Treatment Essence for $18\n\n";
      break;
   case 9:
      cout << "\n\nEXPENSIVE PRODUCT: La Mer's Creme de la Mer for $345\n";
      cout << "---------------------------------------------------------\n\n";
      cout << "CHEAPER DUPE: Nivea Creme for $7.30\n";
      break;
   case 10:
      cout << "\n\nEXPENSIVE PRODUCT: Sunday Riley ICE Ceramide Moisturizing Creme for $65\n";
      cout << "---------------------------------------------------------------------------\n";
      cout << "CHEAPER DUPE: CeraVe Moisturizing Cream for $16\n\n";
      break;
   case 11:
      cout << "\n\nEXPENSIVE PRODUCT: Kiehl's Midnight Recovery Concentrate for $52\n";
      cout << "--------------------------------------------------------------------\n";
      cout << "CHEAPER DUPE: Radha Beauty Rosehip Oil for $20\n\n";
      break;
   default:
      cout << "The value you input was not recognized by our systems. Please rerun the program and try again.\n\n";
      break;
   }

}

void Miscellaneous()
{
   int value;
   cout << "\n\n\nPlease choose the product you would like a cheaper version of: \n\n";
   cout << "Number   " << "Product " << setw(43) << "Cost\n";
   cout << "-----------------------------------------------------------\n\n";
   cout << "1:       " << "Peter Thomas Roth Pumpkin Enzyme Mask" << setw(15) << "$60\n\n";
   cout << "2:       " << "Glam Glow's Supermud Mask" << setw(27) << "$25\n\n";
   cout << "3:       " << "Sunday Riley's Good Genes" << setw(27) << "$85\n\n";
   cout << "4:       " << "Clairsonic" << setw(42) << "$90\n\n";
   cout << "5:       " << "Lareige's Lip Sleeping Mask" << setw(25) << "$22\n\n";
   cout << "Product Number? ";
   cin >> value;

   switch (value)
   {
   case 1:
      cout << "\n\nEXPENSIVE PRODUCT: Peter Thomas Roth Pumpkin Enzyme Mask for $60\n";
      cout << "--------------------------------------------------------------------\n";
      cout << "CHEAPER DUPE: Andalou Natural's Pumpkin Honey Glycolic Mask for $12.79\n\n";
      break;
   case 2:
      cout << "\n\nEXPENSIVE PRODUCT: Glam Glow's Supermud Mask for $25\n";
      cout << "--------------------------------------------------------\n";
      cout << "CHEAPER DUPE: Derma E's Purifying 2-in-1 Charcoal Mask for $19.50\n\n";
      break;
   case 3:
      cout << "\n\nEXPENSIVE PRODUCT: Sunday Riley's Good Genes for $85\n";
      cout << "--------------------------------------------------------\n";
      cout << "CHEAPER DUPE: The Ordinary's Lactic Acid for $6.80\n\n";
      break;
   case 4:
      cout << "\n\nEXPENSIVE PRODUCT: Clairsonic for $90\n";
      cout << "-----------------------------------------\n";
      cout << "CHEAPER DUPE: Olay ProX for $25.12\n\n";
      break;
   case 5:
      cout << "\n\nEXPENSIVE PRODUCT: Lareige's Lip Sleeping Mask for $22\n";
      cout << "----------------------------------------------------------\n";
      cout << "CHEAPER DUPE: Care:Nel Lip Mask for $12\n\n";
      break;
   default:
      cout << "The value you input was not recognized by our systems. Please rerun the program and try again.\n\n";
      break;
   }

}