/********************************************************\
File Name: main.c
Author: Liri (5/4/2020)
Purpose: This file create structure that represents box,
		 calculate base face area of box, surface area,
		 and volume of the box
\********************************************************/

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