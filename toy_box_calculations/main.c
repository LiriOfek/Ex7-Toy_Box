/********************************************************\
File Name: main.c
Author: Liri (5/4/2020)
Purpose: This file create structure that represents box,
		 calculate base face area of box, surface area,
		 and volume of the box
\********************************************************/

#define INITIAL_NUMBER (0)
#define STRING_GET_BOX_WIDTH ("Enter box width: ")
#define STRING_GET_BOX_LENGTH ("Enter box length: ")
#define STRING_GET_BOX_HIGHT ("Enter box hight: ")
#define GET_FLOAT ("%f")
#define PRINT_BASE_FACE_AREA ("Base face area: %f\n")
#define PRINT_SURFACE_AREA ("Surface area: %f\n")
#define PRINT_BOX_VOLUME ("Box volume: %f\n")

#include <stdio.h>

struct box {
	/*struct that contain the dimention of box*/
	float width;
	float length;
	float hight;
};

struct box make_box(float witdth, float length, float hight) {
	/********************************************************\
	* Function name - make_box
	*
	* Function Purpose - make box struct with the given dimensions
	*
	* Parameters - IN float witdth - box width
	*			   IN float length - box length
	*			   IN float hight - box hight
	*			   OUT struct box toy_box - struct of the box with
	*								         the given dimentions
	*
	* Return Value - struct of the box with the given dimentions
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - this function create box struct, containing the given dimensions
	*
	* Author - Liri
	\********************************************************/
	struct box toy_box;

	toy_box.width = witdth;
	toy_box.length = length;
	toy_box.hight = hight;
	return toy_box;
}

float calculate_face_area(float width_face, float length_face) {
	/********************************************************\
	* Function name - calculate_face_area
	*
	* Function Purpose - calculate the face area
	*
	* Parameters - IN float width_face - width of face
	*			   IN float length_face - length of face
	*			   OUT float face area
	*
	* Return Value - area of given face
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - this function calculate the area of given face
	*
	* Author - Liri
	\********************************************************/
	return width_face * length_face;
}

float calculate_surface_area(struct box toy_box) {
	/********************************************************\
	* Function name - calculate_surface_area
	*
	* Function Purpose - calculate the face area
	*
	* Parameters - IN struct box toy_box - struct of the box dimensions
	*
	* Return Value - surface area of given box
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - this function calculate the surface area of given box, by
	*			  function that calculate face area
	*
	* Author - Liri
	\********************************************************/
	float base_face_area = INITIAL_NUMBER;
	float front_face_area = INITIAL_NUMBER;
	float side_face_area = INITIAL_NUMBER;
	float surface_area = INITIAL_NUMBER;

	base_face_area = calculate_face_area(toy_box.width, toy_box.length);
	front_face_area = calculate_face_area(toy_box.width, toy_box.hight);
	side_face_area = calculate_face_area(toy_box.length, toy_box.hight);

	surface_area = 2 * (base_face_area + front_face_area + side_face_area);

	return surface_area;
}

float calculate_box_volume(struct box toy_box) {
	/********************************************************\
	* Function name - calculate_box_volume
	*
	* Function Purpose - calculate the volume of given box
	*
	* Parameters - IN struct box toy_box - struct of the box dimensions
	*
	* Return Value - volume of given box
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - this function calculate the volume of given box, by
	*			  function that calculate face area
	*
	* Author - Liri
	\********************************************************/
	float base_face_area = INITIAL_NUMBER;
	float box_volume = INITIAL_NUMBER;

	base_face_area = calculate_face_area(toy_box.width, toy_box.length);
	box_volume = base_face_area * toy_box.hight;

	return box_volume;
}

void main() {
	/********************************************************\
	* Function name - main
	*
	* Function Purpose - get dimensions from user, create box structure
	*					 and fill it with the dimensions,
	*					 print the base face area, surface area, and the volume
	*
	*
	* Parameters - no Input/Output parameters
	*
	* Return Value - there isn't return value
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - get dimensions from user, create box structure
	*			  and fill it with the dimensions,
	*			  call functions that calculate the base face area,
	*			  surface area, and the volume
	*
	* Author - Liri
	\********************************************************/
	float box_width = INITIAL_NUMBER;
	float box_length = INITIAL_NUMBER;
	float box_hight = INITIAL_NUMBER;
	struct box toy_box;
	float base_face_area = INITIAL_NUMBER;
	float surface_area = INITIAL_NUMBER;
	float box_volume = INITIAL_NUMBER;

	/*get dimensions drom user*/
	printf(STRING_GET_BOX_WIDTH);
	scanf_s(GET_FLOAT, &box_width);
	printf(STRING_GET_BOX_LENGTH);
	scanf_s(GET_FLOAT, &box_length);
	printf(STRING_GET_BOX_HIGHT);
	scanf_s(GET_FLOAT, &box_hight);

	toy_box = make_box(box_width, box_length, box_hight);

	/*calclation of box parameters*/

	base_face_area = calculate_face_area(toy_box.width, toy_box.length);
	printf(PRINT_BASE_FACE_AREA, base_face_area);

	surface_area = calculate_surface_area(toy_box);
	printf(PRINT_SURFACE_AREA, surface_area);

	box_volume = calculate_box_volume(toy_box);
	printf(PRINT_BOX_VOLUME, box_volume);
}