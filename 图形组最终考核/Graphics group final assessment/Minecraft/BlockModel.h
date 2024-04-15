#ifndef __BLOCKTEXTURE__H__
#define __BLOCKTEXTURE__H__

#include "ModelManager.h"
#include "TextureManager.h"
#include <DirectXMath.h>
#include <d3d11.h>

// 方块模型类
class BlockModel
{
public:
	Model* GetBedRockModel(TextureManager& textureManager, ModelManager& modelManager);	// 获取基岩材质
	Model* GetDirtModel(TextureManager& textureManager, ModelManager& modelManager);	// 获取泥土材质
	Model* GetStoneModel(TextureManager& textureManager, ModelManager& modelManager);	// 获取石头材质

};

#endif // !__BLOCKTEXTURE__H__

