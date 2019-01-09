#include "header.h"
#include "func.h"

int rand_num(int a[][size]);
void printf_array(int a[][size]);

int main()
{
    int A[size][size];
    int i,j;

    srand(time(0));

    rand_num(A);
    printf_array(A);


    ALLEGRO_DISPLAY* display = NULL;
    ALLEGRO_BITMAP* bitmap = NULL;
    ALLEGRO_BITMAP* bitmap2 = NULL;
    ALLEGRO_BITMAP* bitmap3 = NULL;
    ALLEGRO_BITMAP* bitmap4 = NULL;
    ALLEGRO_BITMAP* bitmap5 = NULL;

    // Initialize Allegro
    al_init();
    al_init_image_addon();

    // Create allegro display
    display = al_create_display(DISPLAY_WIDTH, DISPLAY_HEIGHT);

    // Load bitmap
    bitmap = al_load_bitmap("./1.jpg");
    bitmap2 = al_load_bitmap("./2.jpg");
    bitmap3 = al_load_bitmap("./3.jpg");
    bitmap4 = al_load_bitmap("./4.jpg");
    bitmap5 = al_load_bitmap("./5.jpg");

    // Draw bitmap
    al_draw_bitmap(bitmap5,82,0,0);
    for(i=0;i<size;i++){
       for(j=0;j<size;j++) {
      if(A[i][j]==1){
    al_draw_bitmap(bitmap,291+41*j ,41+41*i , 0);
      }
      else if(A[i][j]==2){
    al_draw_bitmap(bitmap2,291+41*j , 41+41*i, 0);
      }
      else if(A[i][j]==3){
    al_draw_bitmap(bitmap3, 291+41*j, 41+41*i, 0);
       }
      else if(A[i][j]==4){
    al_draw_bitmap(bitmap4, 291+41*j, 41+41*i , 0);
      }
    }
    }
    // Flip display to show the drawing result
    al_flip_display();
    system("pause");

    // Cleanup
    al_destroy_bitmap(bitmap);
    al_destroy_bitmap(bitmap2);
    al_destroy_bitmap(bitmap3);
    al_destroy_bitmap(bitmap4);
    al_destroy_display(display);

    return 0;
}



