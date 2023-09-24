#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct OVRMaterialData;
}
namespace System::IO {
class Stream;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class GameObject;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace UnityEngine {
class Texture2D;
}
namespace GlobalNamespace {
struct OVRMeshData;
}
namespace GlobalNamespace {
class OVRGLTFAnimatinonNode;
}
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
struct OVRChunkType;
}
namespace GlobalNamespace {
struct OVRTextureQualityFiltering;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
struct OVRTextureData;
}
namespace GlobalNamespace {
struct OVRGLTFScene;
}
namespace UnityEngine {
class Shader;
}
namespace GlobalNamespace {
struct OVRBinaryChunk;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0;
}
namespace GlobalNamespace {
class OVRGLTFLoader;
}
// Type: ::<>c__DisplayClass27_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8485))
// CS Name: OVRGLTFLoader::<>c__DisplayClass27_0
class CORDL_TYPE GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0(GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0(GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0& operator=(GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0&& o) noexcept = default;
  constexpr GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0& operator=(GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::OVRGLTFLoader __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OVRGLTFLoader value) ;

constexpr GlobalNamespace::OVRGLTFLoader __get___4__this() const;

 GlobalNamespace::OVRMaterialData __declspec(property(get=__get_matData, put=__set_matData))  matData;

constexpr void __set_matData(GlobalNamespace::OVRMaterialData value) ;

constexpr GlobalNamespace::OVRMaterialData __get_matData() const;


// Methods

static GlobalNamespace::GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0 New_ctor() ;

/// @brief Method .ctor addr 0x25b99cc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ProcessMesh>b__0 addr 0x25b99d4 size 0x24 virtual false final false
 void _ProcessMesh_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRGLTFLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8486))
// CS Name: OVRGLTFLoader
class CORDL_TYPE OVRGLTFLoader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass27_0 = GlobalNamespace::GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~OVRGLTFLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader", modifiers: " const&", def_value: None }]
constexpr OVRGLTFLoader(OVRGLTFLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader", modifiers: "&&", def_value: None }]
constexpr OVRGLTFLoader(OVRGLTFLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRGLTFLoader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRGLTFLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRGLTFLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRGLTFLoader& operator=(OVRGLTFLoader&& o) noexcept = default;
  constexpr OVRGLTFLoader& operator=(OVRGLTFLoader const& o) noexcept = default;
                


// Fields

 OVRSimpleJSON::JSONNode __declspec(property(get=__get_m_jsonData, put=__set_m_jsonData))  m_jsonData;

constexpr void __set_m_jsonData(OVRSimpleJSON::JSONNode value) ;

constexpr OVRSimpleJSON::JSONNode __get_m_jsonData() const;

 System::IO::Stream __declspec(property(get=__get_m_glbStream, put=__set_m_glbStream))  m_glbStream;

constexpr void __set_m_glbStream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_m_glbStream() const;

 GlobalNamespace::OVRBinaryChunk __declspec(property(get=__get_m_binaryChunk, put=__set_m_binaryChunk))  m_binaryChunk;

constexpr void __set_m_binaryChunk(GlobalNamespace::OVRBinaryChunk value) ;

constexpr GlobalNamespace::OVRBinaryChunk __get_m_binaryChunk() const;

 System::Collections::Generic::List_1<UnityEngine::GameObject> __declspec(property(get=__get_m_Nodes, put=__set_m_Nodes))  m_Nodes;

constexpr void __set_m_Nodes(System::Collections::Generic::List_1<UnityEngine::GameObject> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::GameObject> __get_m_Nodes() const;

 System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGLTFInputNode,GlobalNamespace::OVRGLTFAnimatinonNode> __declspec(property(get=__get_m_AnimationNodes, put=__set_m_AnimationNodes))  m_AnimationNodes;

constexpr void __set_m_AnimationNodes(System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGLTFInputNode,GlobalNamespace::OVRGLTFAnimatinonNode> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGLTFInputNode,GlobalNamespace::OVRGLTFAnimatinonNode> __get_m_AnimationNodes() const;

 UnityEngine::Shader __declspec(property(get=__get_m_Shader, put=__set_m_Shader))  m_Shader;

constexpr void __set_m_Shader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get_m_Shader() const;

 UnityEngine::Shader __declspec(property(get=__get_m_AlphaBlendShader, put=__set_m_AlphaBlendShader))  m_AlphaBlendShader;

constexpr void __set_m_AlphaBlendShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get_m_AlphaBlendShader() const;

 GlobalNamespace::OVRTextureQualityFiltering __declspec(property(get=__get_m_TextureQuality, put=__set_m_TextureQuality))  m_TextureQuality;

constexpr void __set_m_TextureQuality(GlobalNamespace::OVRTextureQualityFiltering value) ;

constexpr GlobalNamespace::OVRTextureQualityFiltering __get_m_TextureQuality() const;

 float_t __declspec(property(get=__get_m_TextureMipmapBias, put=__set_m_TextureMipmapBias))  m_TextureMipmapBias;

constexpr void __set_m_TextureMipmapBias(float_t value) ;

constexpr float_t __get_m_TextureMipmapBias() const;

static UnityEngine::Vector3 __declspec(property(get=__get_GLTFToUnitySpace, put=__set_GLTFToUnitySpace))  GLTFToUnitySpace;

static void __set_GLTFToUnitySpace(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_GLTFToUnitySpace() ;

static UnityEngine::Vector3 __declspec(property(get=__get_GLTFToUnityTangent, put=__set_GLTFToUnityTangent))  GLTFToUnityTangent;

static void __set_GLTFToUnityTangent(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_GLTFToUnityTangent() ;

static UnityEngine::Vector4 __declspec(property(get=__get_GLTFToUnitySpace_Rotation, put=__set_GLTFToUnitySpace_Rotation))  GLTFToUnitySpace_Rotation;

static void __set_GLTFToUnitySpace_Rotation(UnityEngine::Vector4 value) ;

static UnityEngine::Vector4 __get_GLTFToUnitySpace_Rotation() ;

static System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::OVRGLTFInputNode> __declspec(property(get=__get_InputNodeNameMap, put=__set_InputNodeNameMap))  InputNodeNameMap;

static void __set_InputNodeNameMap(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::OVRGLTFInputNode> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::OVRGLTFInputNode> __get_InputNodeNameMap() ;


// Methods

static GlobalNamespace::OVRGLTFLoader New_ctor(::StringW fileName) ;

/// @brief Method .ctor addr 0x25b470c size 0x38 virtual false final false
 void _ctor(::StringW fileName) ;

static GlobalNamespace::OVRGLTFLoader New_ctor(::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x25b4744 size 0x88 virtual false final false
 void _ctor(::ArrayW<uint8_t> data) ;

/// @brief Method LoadGLB addr 0x25b47cc size 0x554 virtual false final false
 GlobalNamespace::OVRGLTFScene LoadGLB(bool supportAnimation, bool loadMips) ;

/// @brief Method SetModelShader addr 0x25b550c size 0x8 virtual false final false
 void SetModelShader(UnityEngine::Shader shader) ;

/// @brief Method SetModelAlphaBlendShader addr 0x25b5514 size 0x8 virtual false final false
 void SetModelAlphaBlendShader(UnityEngine::Shader shader) ;

/// @brief Method SetTextureQualityFiltering addr 0x25b551c size 0x8 virtual false final false
 void SetTextureQualityFiltering(GlobalNamespace::OVRTextureQualityFiltering loadedTexturesQuality) ;

/// @brief Method SetMipMapBias addr 0x25b5524 size 0x1c virtual false final false
 void SetMipMapBias(float_t loadedTexturesMipmapBiasing) ;

/// @brief Method DetectTextureQuality addr 0x25b5540 size 0xc0 virtual false final false
static GlobalNamespace::OVRTextureQualityFiltering DetectTextureQuality(ByRef<UnityEngine::Texture2D> srcTexture) ;

/// @brief Method ApplyTextureQuality addr 0x25b5600 size 0x174 virtual false final false
static void ApplyTextureQuality(GlobalNamespace::OVRTextureQualityFiltering qualityLevel, ByRef<UnityEngine::Texture2D> destTexture) ;

/// @brief Method ValidateGLB addr 0x25b4d20 size 0x208 virtual false final false
 bool ValidateGLB(System::IO::Stream glbStream) ;

/// @brief Method ReadChunk addr 0x25b4f28 size 0xac virtual false final false
 ::ArrayW<uint8_t> ReadChunk(System::IO::Stream glbStream, GlobalNamespace::OVRChunkType type) ;

/// @brief Method ValidateChunk addr 0x25b4fd4 size 0x148 virtual false final false
 bool ValidateChunk(System::IO::Stream glbStream, GlobalNamespace::OVRChunkType type, ByRef<uint32_t> chunkLength) ;

/// @brief Method LoadGLTF addr 0x25b511c size 0x3f0 virtual false final false
 int32_t LoadGLTF(bool supportAnimation, bool loadMips) ;

/// @brief Method ProcessNode addr 0x25b5774 size 0x8ac virtual false final false
 void ProcessNode(OVRSimpleJSON::JSONNode node, int32_t nodeId, bool loadMips) ;

/// @brief Method ProcessMesh addr 0x25b64c0 size 0x143c virtual false final false
 GlobalNamespace::OVRMeshData ProcessMesh(OVRSimpleJSON::JSONNode meshNode, bool loadMips) ;

/// @brief Method FlipTraingleIndices addr 0x25b8340 size 0x6c virtual false final false
static void FlipTraingleIndices(ByRef<::ArrayW<int32_t>> indices) ;

/// @brief Method ProcessSkin addr 0x25b78fc size 0x410 virtual false final false
 void ProcessSkin(OVRSimpleJSON::JSONNode skinNode, UnityEngine::SkinnedMeshRenderer renderer) ;

/// @brief Method ProcessMaterial addr 0x25b7d0c size 0x264 virtual false final false
 GlobalNamespace::OVRMaterialData ProcessMaterial(int32_t matId) ;

/// @brief Method ProcessTexture addr 0x25b7f70 size 0x3d0 virtual false final false
 GlobalNamespace::OVRTextureData ProcessTexture(int32_t textureId) ;

/// @brief Method TranscodeTexture addr 0x25b853c size 0x90 virtual false final false
 void TranscodeTexture(ByRef<GlobalNamespace::OVRTextureData> textureData) ;

/// @brief Method CreateUnityMaterial addr 0x25b83ac size 0x190 virtual false final false
 UnityEngine::Material CreateUnityMaterial(GlobalNamespace::OVRMaterialData matData, bool loadMips) ;

/// @brief Method GetInputNodeType addr 0x25b85cc size 0x1c4 virtual false final false
 GlobalNamespace::OVRGLTFInputNode GetInputNodeType(::StringW name) ;

/// @brief Method ProcessAnimations addr 0x25b6020 size 0x4a0 virtual false final false
 void ProcessAnimations() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRGLTFLoader____c__DisplayClass27_0, "", "OVRGLTFLoader/<>c__DisplayClass27_0");
NEED_NO_BOX(GlobalNamespace::OVRGLTFLoader);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRGLTFLoader, "", "OVRGLTFLoader");
