/********************************************************\
File Name: main.c
Author: Liri (5/4/2020)
Purpose: This file create structure that represents box,
		 calculate base face area of box, surface area,
		 and volume of the box
\********************************************************/

#define INITIAL_NUMBER (0)

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