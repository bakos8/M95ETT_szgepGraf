#ifndef SCENE_H
#define SCENE_H

#include "camera.h"
#include "texture.h"

#include <obj/model.h>

typedef struct Teapot
{
    Model model;
    Material material;
    GLuint teapot_id;
	float teapot_turning;
	float teapot_direction;
} Teapot;

typedef struct TV
{
    Model model;
    Material material;
    GLuint tv_id;
} TV;

typedef struct Plant
{
    Model model;
    Material material;
    GLuint plant_id;
} Plant;

typedef struct Bigcupboard
{
    Model model;
    Material material;
    GLuint bigcupboard_id;
} Bigcupboard;

typedef struct Cupboard
{
    Model model;
    Material material;
    GLuint cupboard_id;
} Cupboard;

typedef struct Sofa
{
    Model model;
    Material material;
    GLuint sofa_id;
} Sofa;

typedef struct Table
{
    Model model;
    Material material;
    GLuint table_id;
} Table;

typedef struct Chair
{
    Model model;
    Material material;
    GLuint chair_id;
} Chair;

typedef struct House
{
    Model model;
    Material material;
    GLuint house_id;
} House;

typedef struct Scene
{
	Teapot teapot;
	TV tv;
	Plant plant;
	Bigcupboard bigcupboard;
	Cupboard cupboard;
    House house;
	Sofa sofa;
	Table table;
	Chair chair;
    Material material;
    GLuint texture_id;
	float light0_brightness;
	float light0_brightness_inc;
	float set_chair_pos;
	float set_chair_pos_inc;
	float set_chair_pos2;
	float set_chair_pos_inc2;
} Scene;

/**
 * Initialize the scene by loading models.
 */
void init_teapot(Scene* scene);
 
void init_tv(Scene* scene);

void init_plant(Scene* scene);

void init_bigcupboard(Scene* scene);

void init_cupboard(Scene* scene);

void init_sofa(Scene* scene);

void init_table(Scene* scene);
 
void init_chair(Scene* scene);

void init_house(Scene* scene);
 
void init_scene(Scene* scene);

/**
 * Declare set functions.
 */
void set_lighting(const Scene* scene);

void set_light_brightness_inc(Scene* scene, float brightness);

void set_chair_pos_inc(Scene* scene, float y);

void set_chair_pos_inc2(Scene* scene, float y);

/**
*Define material.
*/
void set_material(const Material* material);

/**
 * Draw the scene, and individual objects.
 */
void draw_teapot(const Scene* scene);

void draw_tv(const Scene* scene);

void draw_plant(const Scene* scene);
 
void draw_bigcupboard(const Scene* scene);

void draw_cupboard(const Scene* scene);

void draw_sofa(const Scene* scene);

void draw_table(const Scene* scene);

void draw_chair(Scene* scene);

void draw_house(const Scene* scene);

void draw_scene(const Scene* scene);

void update_scene(Scene* scene, double time);

/**
 * Draw the origin of the world coordinate system.
 */
void draw_origin();

#endif /* SCENE_H */
