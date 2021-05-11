#include "camera.h"

#include <GL/glut.h>

#include <math.h>

void init_camera(Camera* camera)
{
    camera->position.x = 0.0;
    camera->position.y = 0.0;
    camera->position.z = 1.0;
    camera->rotation.x = 0.0;
    camera->rotation.y = 0.0;
    camera->rotation.z = 0.0;
    camera->speed.x = 0.0;
    camera->speed.y = 0.0;
    camera->speed.z = 0.0;

    is_preview_visible = FALSE;
}

void update_camera(Camera* camera, double time)
{
    double angle;
    double side_angle;

    angle = degree_to_radian(camera->rotation.z);
    side_angle = degree_to_radian(camera->rotation.z + 90.0);

    camera->position.x += cos(angle) * camera->speed.y * time;
    camera->position.y += sin(angle) * camera->speed.y * time;
    camera->position.x += cos(side_angle) * camera->speed.x * time;
    camera->position.y += sin(side_angle) * camera->speed.x * time;
}

void set_view(const Camera* camera)
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glRotatef(-(camera->rotation.x + 90), 1.0, 0, 0);
    glRotatef(-(camera->rotation.z - 90), 0, 0, 1.0);
    glTranslatef(-camera->position.x, -camera->position.y, -camera->position.z);
}

void rotate_camera(Camera* camera, double horizontal, double vertical)
{
    camera->rotation.z += horizontal;
    camera->rotation.x += vertical;

    if (camera->rotation.z < 0) {
        camera->rotation.z += 360.0;
    }

    if (camera->rotation.z > 360.0) {
        camera->rotation.z -= 360.0;
    }

    if (camera->rotation.x < 0) {
        camera->rotation.x += 360.0;
    }

    if (camera->rotation.x > 360.0) {
        camera->rotation.x -= 360.0;
    }
}

void set_camera_speed(Camera* camera, double speed)
{
    camera->speed.y = speed;
}

void set_camera_side_speed(Camera* camera, double speed)
{
    camera->speed.x = speed;
}

void show_texture_preview()
{
    glDisable(GL_LIGHTING);
    glDisable(GL_DEPTH_TEST);
    glEnable(GL_COLOR_MATERIAL);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glColor3f(1, 1, 1);

    glBegin(GL_QUADS);
    glTexCoord2f(0, 0);
    glVertex3f(-1, 1, -3);
    glTexCoord2f(1, 0);
    glVertex3f(1, 1, -3);
    glTexCoord2f(1, 1);
    glVertex3f(1, -1, -3);
    glTexCoord2f(0, 1);
    glVertex3f(-1, -1, -3);
    glEnd();

    glDisable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
}

void show_menu_preview()
{
	char str[100];
    char str2[100];
    char str3[100];
    char str4[100];
    char str5[100];
    char str6[100];
    char str7[100];
    char str8[100];
    char str9[100];
	char str10[100];
	char str11[100];
	char str12[100];

    glDisable(GL_LIGHTING);
    glDisable(GL_DEPTH_TEST);
    glEnable(GL_COLOR_MATERIAL);
    glBindTexture(GL_TEXTURE_2D, 0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glColor4f(0.0, 0.0, 0.0, 0.7);

    glDepthMask(GL_FALSE);
    glEnable(GL_BLEND);
    glBlendFunc(GL_ONE, GL_ONE_MINUS_SRC_ALPHA);

    glBegin(GL_QUADS);
    glVertex3f(-1.5, 1.0, -3.0);
    glVertex3f(-1.5, 1.0, -3.0);
    glVertex3f(-1.5, 1.0, -3.0);
    glVertex3f(-1.5, 1.0, -3.0);
    glEnd();

    glDisable(GL_BLEND);
    glDepthMask(GL_TRUE);

    sprintf(str, "Controls");
    sprintf(str2, "'W'-Forward");
    sprintf(str3, "'S'-Backward");
    sprintf(str4, "'A'-Left");
    sprintf(str5, "'D'-Right"); 
    sprintf(str6, "'+' to increase brightness");
    sprintf(str7, "''-' to decrease brightness");
    sprintf(str8, "'I' 'O' move chairs");
    sprintf(str9, "'K' 'L' move chairs");
	sprintf(str10, "use LMB to look around");
	sprintf(str11, "Huge thanks to Horanek David for");
	sprintf(str12, "helping with the project");
	
	glColor3f(1.0, 1.0, 1.0);
	
	glRasterPos3f(-1.45, 0.7, -3);
	draw_string(GLUT_BITMAP_HELVETICA_18, &str);

    glRasterPos3f(-1.45, 0.5, -3);
    draw_string(GLUT_BITMAP_HELVETICA_12, &str2);
    
    glRasterPos3f(-1.45, 0.35, -3);
    draw_string(GLUT_BITMAP_HELVETICA_12, &str3);

    glRasterPos3f(-1.45, 0.2, -3);
    draw_string(GLUT_BITMAP_HELVETICA_12, &str4);

    glRasterPos3f(-1.45, 0.05, -3);
    draw_string(GLUT_BITMAP_HELVETICA_12, &str5);

    glRasterPos3f(-1.45, -0.1, -3);
    draw_string(GLUT_BITMAP_HELVETICA_12, &str6);

    glRasterPos3f(-1.45, -0.25, -3);
    draw_string(GLUT_BITMAP_HELVETICA_12, &str7);

    glRasterPos3f(0.3, 0.5, -3);
    draw_string(GLUT_BITMAP_HELVETICA_12, &str8);

    glRasterPos3f(0.3, 0.35, -3);
    draw_string(GLUT_BITMAP_HELVETICA_12, &str9);

    glRasterPos3f(0.3, 0.2, -3);
    draw_string(GLUT_BITMAP_HELVETICA_12, &str10);

	glRasterPos3f(0.3, -0.4, -3);
    draw_string(GLUT_BITMAP_HELVETICA_12, &str11);
	
	glRasterPos3f(0.3, -0.55, -3);
    draw_string(GLUT_BITMAP_HELVETICA_12, &str12);
	
    glDisable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
}

void draw_string(void *font, char* str[100])
{
    char* c;

    for (c = str; *c != '\0'; c++) {
		glutBitmapCharacter(font, *c);  
	}
}
