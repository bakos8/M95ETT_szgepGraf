#include "scene.h"

#include <GL/glut.h>

#include <obj/load.h>
#include <obj/draw.h>

/**
*Initialize the objects, and their individual lighting properties.
*/
void init_teapot(Scene* scene)
{
	scene->teapot.teapot_direction = 1;
    load_model(&(scene->teapot.model), "models/Teapot.obj");
    scene->teapot.teapot_id = load_texture("textures/Teapot.png"); 

    scene->teapot.material.ambient.red = 2.0;
    scene->teapot.material.ambient.green = 2.0;
    scene->teapot.material.ambient.blue = 2.0;

    scene->teapot.material.diffuse.red = 2.0;
    scene->teapot.material.diffuse.green = 2.0;
    scene->teapot.material.diffuse.blue = 2.0;

    scene->teapot.material.specular.red = 0.0;
    scene->teapot.material.specular.green = 0.0;
    scene->teapot.material.specular.blue = 0.0;

    scene->teapot.material.shininess = 0.0;
}

void init_tv(Scene* scene)
{
    load_model(&(scene->tv.model), "models/TV.obj");
    scene->tv.tv_id = load_texture("textures/TV.png"); 

    scene->tv.material.ambient.red = 2.0;
    scene->tv.material.ambient.green = 2.0;
    scene->tv.material.ambient.blue = 2.0;

    scene->tv.material.diffuse.red = 2.0;
    scene->tv.material.diffuse.green = 2.0;
    scene->tv.material.diffuse.blue = 2.0;

    scene->tv.material.specular.red = 0.0;
    scene->tv.material.specular.green = 0.0;
    scene->tv.material.specular.blue = 0.0;

    scene->tv.material.shininess = 0.0;
}

void init_plant(Scene* scene)
{
    load_model(&(scene->plant.model), "models/plant.obj");
    scene->plant.plant_id = load_texture("textures/plant.jpg"); 

    scene->plant.material.ambient.red = 2.0;
    scene->plant.material.ambient.green = 2.0;
    scene->plant.material.ambient.blue = 2.0;

    scene->plant.material.diffuse.red = 2.0;
    scene->plant.material.diffuse.green = 2.0;
    scene->plant.material.diffuse.blue = 2.0;

    scene->plant.material.specular.red = 0.0;
    scene->plant.material.specular.green = 0.0;
    scene->plant.material.specular.blue = 0.0;

    scene->plant.material.shininess = 0.0;
}

void init_bigcupboard(Scene* scene)
{
    load_model(&(scene->bigcupboard.model), "models/closet.obj");
    scene->bigcupboard.bigcupboard_id = load_texture("textures/TVstand.jpg"); 

    scene->bigcupboard.material.ambient.red = 2.0;
    scene->bigcupboard.material.ambient.green = 2.0;
    scene->bigcupboard.material.ambient.blue = 2.0;

    scene->bigcupboard.material.diffuse.red = 2.0;
    scene->bigcupboard.material.diffuse.green = 2.0;
    scene->bigcupboard.material.diffuse.blue = 2.0;

    scene->bigcupboard.material.specular.red = 0.0;
    scene->bigcupboard.material.specular.green = 0.0;
    scene->bigcupboard.material.specular.blue = 0.0;

    scene->bigcupboard.material.shininess = 0.0;
}

void init_cupboard(Scene* scene)
{
    load_model(&(scene->cupboard.model), "models/TVstand.obj");
    scene->cupboard.cupboard_id = load_texture("textures/TVstand.jpg"); 

    scene->cupboard.material.ambient.red = 2.0;
    scene->cupboard.material.ambient.green = 2.0;
    scene->cupboard.material.ambient.blue = 2.0;

    scene->cupboard.material.diffuse.red = 2.0;
    scene->cupboard.material.diffuse.green = 2.0;
    scene->cupboard.material.diffuse.blue = 2.0;

    scene->cupboard.material.specular.red = 0.0;
    scene->cupboard.material.specular.green = 0.0;
    scene->cupboard.material.specular.blue = 0.0;

    scene->cupboard.material.shininess = 0.0;
}

void init_sofa(Scene* scene)
{
    load_model(&(scene->sofa.model), "models/couch.obj");
    scene->sofa.sofa_id = load_texture("textures/sofa.jpeg"); 

    scene->sofa.material.ambient.red = 2.0;
    scene->sofa.material.ambient.green = 2.0;
    scene->sofa.material.ambient.blue = 2.0;

    scene->sofa.material.diffuse.red = 2.0;
    scene->sofa.material.diffuse.green = 2.0;
    scene->sofa.material.diffuse.blue = 2.0;

    scene->sofa.material.specular.red = 0.0;
    scene->sofa.material.specular.green = 0.0;
    scene->sofa.material.specular.blue = 0.0;

    scene->sofa.material.shininess = 0.0;
}

void init_table(Scene* scene)
{
    load_model(&(scene->table.model), "models/table.obj");
    scene->table.table_id = load_texture("textures/chair.png"); 

    scene->table.material.ambient.red = 2.0;
    scene->table.material.ambient.green = 2.0;
    scene->table.material.ambient.blue = 2.0;

    scene->table.material.diffuse.red = 2.0;
    scene->table.material.diffuse.green = 2.0;
    scene->table.material.diffuse.blue = 2.0;

    scene->table.material.specular.red = 0.0;
    scene->table.material.specular.green = 0.0;
    scene->table.material.specular.blue = 0.0;

    scene->table.material.shininess = 0.0;
}

void init_table2(Scene* scene)
{
    load_model(&(scene->table.model), "models/table.obj");
    scene->table.table_id = load_texture("textures/chair.png"); 

    scene->table.material.ambient.red = 2.0;
    scene->table.material.ambient.green = 2.0;
    scene->table.material.ambient.blue = 2.0;

    scene->table.material.diffuse.red = 2.0;
    scene->table.material.diffuse.green = 2.0;
    scene->table.material.diffuse.blue = 2.0;

    scene->table.material.specular.red = 0.0;
    scene->table.material.specular.green = 0.0;
    scene->table.material.specular.blue = 0.0;

    scene->table.material.shininess = 0.0;
}

void init_chair(Scene* scene)
{
    load_model(&(scene->chair.model), "models/chair_01.obj");
    scene->chair.chair_id = load_texture("textures/chair.png"); 

    scene->chair.material.ambient.red = 2.0;
    scene->chair.material.ambient.green = 2.0;
    scene->chair.material.ambient.blue = 2.0;

    scene->chair.material.diffuse.red = 2.0;
    scene->chair.material.diffuse.green = 2.0;
    scene->chair.material.diffuse.blue = 2.0;

    scene->chair.material.specular.red = 0.0;
    scene->chair.material.specular.green = 0.0;
    scene->chair.material.specular.blue = 0.0;

    scene->chair.material.shininess = 0.0;
}

void init_chair2(Scene* scene)
{
    load_model(&(scene->chair.model), "models/chair_01.obj");
    scene->chair.chair_id = load_texture("textures/chair.png"); 

    scene->chair.material.ambient.red = 2.0;
    scene->chair.material.ambient.green = 2.0;
    scene->chair.material.ambient.blue = 2.0;

    scene->chair.material.diffuse.red = 2.0;
    scene->chair.material.diffuse.green = 2.0;
    scene->chair.material.diffuse.blue = 2.0;

    scene->chair.material.specular.red = 0.0;
    scene->chair.material.specular.green = 0.0;
    scene->chair.material.specular.blue = 0.0;

    scene->chair.material.shininess = 0.0;
}

void init_chair3(Scene* scene)
{
    load_model(&(scene->chair.model), "models/chair_01.obj");
    scene->chair.chair_id = load_texture("textures/chair.png"); 

    scene->chair.material.ambient.red = 2.0;
    scene->chair.material.ambient.green = 2.0;
    scene->chair.material.ambient.blue = 2.0;

    scene->chair.material.diffuse.red = 2.0;
    scene->chair.material.diffuse.green = 2.0;
    scene->chair.material.diffuse.blue = 2.0;

    scene->chair.material.specular.red = 0.0;
    scene->chair.material.specular.green = 0.0;
    scene->chair.material.specular.blue = 0.0;

    scene->chair.material.shininess = 0.0;
}

void init_chair4(Scene* scene)
{
    load_model(&(scene->chair.model), "models/chair_01.obj");
    scene->chair.chair_id = load_texture("textures/chair.png"); 

    scene->chair.material.ambient.red = 2.0;
    scene->chair.material.ambient.green = 2.0;
    scene->chair.material.ambient.blue = 2.0;

    scene->chair.material.diffuse.red = 2.0;
    scene->chair.material.diffuse.green = 2.0;
    scene->chair.material.diffuse.blue = 2.0;

    scene->chair.material.specular.red = 0.0;
    scene->chair.material.specular.green = 0.0;
    scene->chair.material.specular.blue = 0.0;

    scene->chair.material.shininess = 0.0;
}

void init_house(Scene* scene)
{
    load_model(&(scene->house.model), "models/house.obj");
    scene->house.house_id = load_texture("textures/house.png"); 

    scene->house.material.ambient.red = 2.0;
    scene->house.material.ambient.green = 2.0;
    scene->house.material.ambient.blue = 2.0;

    scene->house.material.diffuse.red = 2.0;
    scene->house.material.diffuse.green = 2.0;
    scene->house.material.diffuse.blue = 2.0;

    scene->house.material.specular.red = 0.0;
    scene->house.material.specular.green = 0.0;
    scene->house.material.specular.blue = 0.0;

    scene->house.material.shininess = 0.0;
}

/**
*Initialize the scene
*/
void init_scene(Scene* scene)
{
	init_teapot (scene);
	init_tv (scene);
	init_plant (scene);
	init_bigcupboard (scene);
	init_cupboard (scene);
	init_sofa (scene);
	init_table (scene);
	init_chair (scene);
	init_house (scene);
}

/**
*Settings for the teapot animation, light controls and moving objects.
*/
void update_scene(Scene* scene, double time)
{
	scene->set_chair_pos2 += scene->set_chair_pos_inc2 * time;
	
	scene->set_chair_pos += scene->set_chair_pos_inc * time;
	
    scene->light0_brightness += scene->light0_brightness_inc * time;

    if(scene->light0_brightness > 255.0){
        scene->light0_brightness = 255.0;
    }
    if(scene->light0_brightness < 0.0){
        scene->light0_brightness = 0.0;
    }
	
	scene->teapot.teapot_turning += time * scene->teapot.teapot_direction * 25;
		
	if(scene->teapot.teapot_turning >= 50){
		scene->teapot.teapot_direction = -1;
	} else if(scene->teapot.teapot_turning <= -50){
		scene->teapot.teapot_direction = 1;
	}
}

/**
*Set world lighting.
*/
void set_lighting(const Scene* scene)
{
	float brightness;
	brightness = scene->light0_brightness / 67;
	
    float ambient_light[] = { brightness, brightness, brightness, brightness };
    float diffuse_light[] = { brightness, brightness, brightness, brightness };
    float specular_light[] = { brightness, brightness, brightness, brightness };
    float position[] = { 0.0f, 0.0f, 10.0f, 1.0f };

    glLightfv(GL_LIGHT0, GL_AMBIENT, ambient_light);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse_light);
    glLightfv(GL_LIGHT0, GL_SPECULAR, specular_light);
    glLightfv(GL_LIGHT0, GL_POSITION, position);
}

/**
*Set the value of light0_brightness_inc.
*/
void set_light_brightness_inc(Scene* scene, float brightness)
{
	scene->light0_brightness_inc = brightness;
}

void set_chair_pos_inc(Scene* scene, float y)
{
	scene->set_chair_pos_inc = y;
}

void set_chair_pos_inc2(Scene* scene, float y)
{
	scene->set_chair_pos_inc2 = y;
}

void set_material(const Material* material)
{
    float ambient_material_color[] = {
        material->ambient.red,
        material->ambient.green,
        material->ambient.blue
    };

    float diffuse_material_color[] = {
        material->diffuse.red,
        material->diffuse.green,
        material->diffuse.blue
    };

    float specular_material_color[] = {
        material->specular.red,
        material->specular.green,
        material->specular.blue
    };

    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient_material_color);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diffuse_material_color);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular_material_color);

    glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, &(material->shininess));
}

/**
*Draw the objects.
*/
void draw_teapot(const Scene* scene)
{
	float rotation = scene->teapot.teapot_turning;
	glPushMatrix();
	
	glTranslatef(2.5, 2, 0.62);
	glPushMatrix();
	
	glRotatef(rotation, 0, 1, 1);
	glBindTexture(GL_TEXTURE_2D, scene->teapot.teapot_id);
	draw_model(&(scene->teapot.model));
	
	glPopMatrix();
	  	   
	glPopMatrix();
}

void draw_tv(const Scene* scene)
{
	glPushMatrix();
	
	glBindTexture(GL_TEXTURE_2D, scene->tv.tv_id);
	glScalef(0.015, 0.015, 0.015);
	glTranslatef(-190, -50, -3);
	glRotatef(270, 0.0, 0.0, 1.0);
	draw_model(&(scene->tv.model));
	   
	glPopMatrix();
}

void draw_plant(const Scene* scene)
{
	glPushMatrix();
	
	glBindTexture(GL_TEXTURE_2D, scene->plant.plant_id);
	glScalef(0.3, 0.3, 0.3);
	glTranslatef(-9.5, 7.5, -0.3);
	draw_model(&(scene->plant.model));
	   
	glPopMatrix();
}

void draw_bigcupboard(const Scene* scene)
{
	glPushMatrix();
	
	glBindTexture(GL_TEXTURE_2D, scene->bigcupboard.bigcupboard_id);
	glScalef(0.3, 0.3, 0.35);
	glTranslatef(-10, 2.5, -0.3);
	glRotatef(90, 0.0, 0.0, 1.0);
	draw_model(&(scene->bigcupboard.model));
	   
	glPopMatrix();
}

void draw_cupboard(const Scene* scene)
{
	glPushMatrix();
	
	glBindTexture(GL_TEXTURE_2D, scene->cupboard.cupboard_id);
	glScalef(0.9, 0.9, 0.9);
	glTranslatef(-1.5, -3.0, -0.3);
	draw_model(&(scene->cupboard.model));
	   
	glPopMatrix();
}

void draw_sofa(const Scene* scene)
{
	glPushMatrix();
	
	glBindTexture(GL_TEXTURE_2D, scene->sofa.sofa_id);
	glTranslatef(2.8, -1.8, -0.3);
	glRotatef(90, 0.0, 0.0, 1.0);
	draw_model(&(scene->sofa.model));
	 
	glPopMatrix();
}

void draw_table(const Scene* scene)
{
	glPushMatrix();
	
	glBindTexture(GL_TEXTURE_2D, scene->table.table_id);
	glScalef(0.008, 0.008, 0.008);
	glTranslatef(310.0, 250.0, -10);
	glRotatef(90, 1.0, 0.0, 0.0);
	draw_model(&(scene->table.model));
	   
	glPopMatrix();
}

void draw_table2(const Scene* scene)
{
	glPushMatrix();
	
	glBindTexture(GL_TEXTURE_2D, scene->table.table_id);
	glScalef(0.006, 0.007, 0.005);
	glTranslatef(240.0, -260.0, -10);
	glRotatef(90, 1.0, 0.0, 0.0);
	glRotatef(90, 0.0, 1.0, 0.0);
	draw_model(&(scene->table.model));
	   
	glPopMatrix();
}

void draw_chair(Scene* scene)
{
	float inc;
	inc = scene->set_chair_pos;
	glPushMatrix();
	
	glBindTexture(GL_TEXTURE_2D, scene->chair.chair_id);
	glTranslatef(2.8, 2.5+inc, -0.1);
	glRotatef(90, 1.0, 0.0, 0.0);
	draw_model(&(scene->chair.model));
	   
	glPopMatrix();
}

void draw_chair2(const Scene* scene)
{
	float inc;
	inc = scene->set_chair_pos;
	glPushMatrix();
	
	glBindTexture(GL_TEXTURE_2D, scene->chair.chair_id);
	glTranslatef(2.2, 2.5+inc, -0.1);
	glRotatef(90, 1.0, 0.0, 0.0);
	draw_model(&(scene->chair.model));
	   
	glPopMatrix();
}

void draw_chair3(const Scene* scene)
{
	float inc;
	inc = scene->set_chair_pos2;
	glPushMatrix();
	
	glBindTexture(GL_TEXTURE_2D, scene->chair.chair_id);
	glTranslatef(2.8, 1.5+inc, -0.1);
	glRotatef(90, 1.0, 0.0, 0.0);
	glRotatef(180, 0.0, 1.0, 0.0);
	draw_model(&(scene->chair.model));
	   
	glPopMatrix();
}

void draw_chair4(const Scene* scene)
{
	float inc;
	inc = scene->set_chair_pos2;
	glPushMatrix();
	
	glBindTexture(GL_TEXTURE_2D, scene->chair.chair_id);
	glTranslatef(2.2, 1.5+inc, -0.1);
	glRotatef(90, 1.0, 0.0, 0.0);
	glRotatef(180, 0.0, 1.0, 0.0);
	draw_model(&(scene->chair.model));
	   
	glPopMatrix();
}

void draw_house(const Scene* scene)
{
	glPushMatrix();
	
	glBindTexture(GL_TEXTURE_2D, scene->house.house_id);
	glScalef(2.0, 2.0, 2.0);
	glTranslatef(0.0, 0.0, -0.3);
	draw_model(&(scene->house.model));
	
	glPopMatrix();
}

/**
*Draw the main scene.
*/
void draw_scene(const Scene* scene)
{
	set_lighting(scene);
	draw_origin(scene);

	set_lighting(scene);
	draw_teapot(scene);
	draw_tv(scene);
	draw_plant(scene);
	draw_bigcupboard(scene);
	draw_cupboard(scene);
	draw_sofa(scene);
	draw_table(scene);
	draw_table2(scene);
	draw_chair(scene);
	draw_chair2(scene);
	draw_chair3(scene);
	draw_chair4(scene);
	draw_house(scene);
}

/**
*Draw the origin of the wolrd.
*/
void draw_origin()
{
    glBegin(GL_LINES);

    glColor3f(1, 0, 0);
    glVertex3f(0, 0, 0);
    glVertex3f(1, 0, 0);

    glColor3f(0, 1, 0);
    glVertex3f(0, 0, 0);
    glVertex3f(0, 1, 0);

    glColor3f(0, 0, 1);
    glVertex3f(0, 0, 0);
    glVertex3f(0, 0, 1);

    glEnd();
}