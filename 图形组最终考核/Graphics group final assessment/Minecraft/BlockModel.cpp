#include "BlockModel.h"

using namespace DirectX;

Model* BlockModel::GetBedRockModel(TextureManager& textureManager, ModelManager& modelManager)
{
    Model* pModel = modelManager.CreateFromGeometry("BedRock", Geometry::CreateBox());
    textureManager.CreateFromFile("..\\Texture\\block\\bedrock.jpg");
    pModel->SetDebugObjectName("BedRock");
    pModel->materials[0].Set<std::string>("$Diffuse", "..\\Texture\\block\\bedrock.jpg");
    pModel->materials[0].Set<XMFLOAT4>("$AmbientColor", XMFLOAT4(0.1f, 0.1f, 0.1f, 1.0f));
    pModel->materials[0].Set<XMFLOAT4>("$DiffuseColor", XMFLOAT4(0.1f, 0.1f, 0.1f, 1.0f));
    pModel->materials[0].Set<XMFLOAT4>("$SpecularColor", XMFLOAT4(0.1f, 0.1f, 0.1f, 1.0f));
    pModel->materials[0].Set<float>("$SpecularPower", 16.0f);
    pModel->materials[0].Set<XMFLOAT4>("$ReflectColor", XMFLOAT4());
    return pModel;
}

Model* BlockModel::GetDirtModel(TextureManager& textureManager, ModelManager& modelManager)
{
    Model* pModel = modelManager.CreateFromGeometry("Dirt", Geometry::CreateBox());
    textureManager.CreateFromFile("..\\Texture\\block\\dirt.jpg");
    pModel->SetDebugObjectName("Dirt");
    pModel->materials[0].Set<std::string>("$Diffuse", "..\\Texture\\block\\dirt.jpg");
    pModel->materials[0].Set<XMFLOAT4>("$AmbientColor", XMFLOAT4(0.2f, 0.2f, 0.2f, 1.0f));
    pModel->materials[0].Set<XMFLOAT4>("$DiffuseColor", XMFLOAT4(0.6f, 0.6f, 0.6f, 1.0f));
    pModel->materials[0].Set<XMFLOAT4>("$SpecularColor", XMFLOAT4(0.2f, 0.2f, 0.2f, 1.0f));
    pModel->materials[0].Set<float>("$SpecularPower", 16.0f);
    pModel->materials[0].Set<XMFLOAT4>("$ReflectColor", XMFLOAT4());
    return pModel;
}

Model* BlockModel::GetStoneModel(TextureManager& textureManager, ModelManager& modelManager)
{
    Model* pModel = modelManager.CreateFromGeometry("Stone", Geometry::CreateBox());
    textureManager.CreateFromFile("..\\Texture\\block\\stone.jpg");
    pModel->SetDebugObjectName("Stone");
    pModel->materials[0].Set<std::string>("$Diffuse", "..\\Texture\\block\\stone.jpg");
    pModel->materials[0].Set<XMFLOAT4>("$AmbientColor", XMFLOAT4(0.2f, 0.2f, 0.2f, 1.0f));
    pModel->materials[0].Set<XMFLOAT4>("$DiffuseColor", XMFLOAT4(0.4f, 0.4f, 0.4f, 1.0f));
    pModel->materials[0].Set<XMFLOAT4>("$SpecularColor", XMFLOAT4(0.1f, 0.1f, 0.1f, 1.0f));
    pModel->materials[0].Set<float>("$SpecularPower", 16.0f);
    pModel->materials[0].Set<XMFLOAT4>("$ReflectColor", XMFLOAT4());
    return pModel;
}

