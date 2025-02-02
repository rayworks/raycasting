#ifndef TEXTURE_BUFFER_H
#define TEXTURE_BUFFER_H

#include <SDL.h>

/**
 * Fills the given wall texture buffer with the given color.
 * 
 * Makes a texture with the given color. 
 * The color is surrounded with a dark border. 
 * 
 * @param texture_buffer texture buffer to be filled for the wall
 * @param color color to create the texture from 
 */
void fill_wall_texture(Uint32 *texture_buffer, Uint32 color);

#endif