#pragma once

#include <d3d11.h>
#include <string>
#include "loaders/TGALoader.h"
#include "ResourceFormat.h"

class TextureData {
public:
	static const std::string DEFAULT_TEXTURE_LOCATION;

public:
	TextureData();
	TextureData(const std::string& filename);
	~TextureData();

	void load(const std::string& filename);

	unsigned int getWidth() const;
	unsigned int getHeight() const;
	unsigned int getBytesPerPixel() const;
	unsigned char* getTextureData() const;
	glm::vec4 getPixel(unsigned int x, unsigned int y);

private:
	ResourceFormat::TextureData m_data;

};