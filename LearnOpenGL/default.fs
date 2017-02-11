#version 330
in vec3 ourColor;
in vec2 ourTexCoord;

out vec4 color;

uniform sampler2D ourTexture;

void main()
{
    color = texture(ourTexture, ourTexCoord);
}