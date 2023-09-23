#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace UnityEngine {
struct UIVertex;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Mesh;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class CanvasRenderer;
}
// Type: UnityEngine::CanvasRenderer
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15756))
// CS Name: UnityEngine.CanvasRenderer
class CORDL_TYPE CanvasRenderer : public UnityEngine::Component {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CanvasRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "CanvasRenderer", modifiers: " const&", def_value: None }]
constexpr CanvasRenderer(CanvasRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CanvasRenderer", modifiers: "&&", def_value: None }]
constexpr CanvasRenderer(CanvasRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CanvasRenderer(void* ptr) noexcept : UnityEngine::Component(ptr) {
}


  constexpr CanvasRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CanvasRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CanvasRenderer& operator=(CanvasRenderer&& o) noexcept = default;
  constexpr CanvasRenderer& operator=(CanvasRenderer const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__isMask_k__BackingField, put=__set__isMask_k__BackingField))  _isMask_k__BackingField;

constexpr void __set__isMask_k__BackingField(bool value) ;

constexpr bool __get__isMask_k__BackingField() const;


// Properties

 bool __declspec(property(put=set_hasPopInstruction))  hasPopInstruction;

 int32_t __declspec(property(get=get_materialCount, put=set_materialCount))  materialCount;

 int32_t __declspec(property(put=set_popMaterialCount))  popMaterialCount;

 int32_t __declspec(property(get=get_absoluteDepth))  absoluteDepth;

 bool __declspec(property(get=get_hasMoved))  hasMoved;

 bool __declspec(property(get=get_cullTransparentMesh, put=set_cullTransparentMesh))  cullTransparentMesh;

 bool __declspec(property(get=get_cull, put=set_cull))  cull;

 UnityEngine::Vector2 __declspec(property(put=set_clippingSoftness))  clippingSoftness;


// Methods

/// @brief Method set_hasPopInstruction addr 0x2d31678 size 0x44 virtual false final false
 void set_hasPopInstruction(bool value) ;

/// @brief Method get_materialCount addr 0x2d316bc size 0x3c virtual false final false
 int32_t get_materialCount() ;

/// @brief Method set_materialCount addr 0x2d316f8 size 0x44 virtual false final false
 void set_materialCount(int32_t value) ;

/// @brief Method set_popMaterialCount addr 0x2d3173c size 0x44 virtual false final false
 void set_popMaterialCount(int32_t value) ;

/// @brief Method get_absoluteDepth addr 0x2d31780 size 0x3c virtual false final false
 int32_t get_absoluteDepth() ;

/// @brief Method get_hasMoved addr 0x2d317bc size 0x3c virtual false final false
 bool get_hasMoved() ;

/// @brief Method get_cullTransparentMesh addr 0x2d317f8 size 0x3c virtual false final false
 bool get_cullTransparentMesh() ;

/// @brief Method set_cullTransparentMesh addr 0x2d31834 size 0x44 virtual false final false
 void set_cullTransparentMesh(bool value) ;

/// @brief Method get_cull addr 0x2d31878 size 0x3c virtual false final false
 bool get_cull() ;

/// @brief Method set_cull addr 0x2d318b4 size 0x44 virtual false final false
 void set_cull(bool value) ;

/// @brief Method SetColor addr 0x2d318f8 size 0x54 virtual false final false
 void SetColor(UnityEngine::Color color) ;

/// @brief Method GetColor addr 0x2d31990 size 0x58 virtual false final false
 UnityEngine::Color GetColor() ;

/// @brief Method EnableRectClipping addr 0x2d31a2c size 0x54 virtual false final false
 void EnableRectClipping(UnityEngine::Rect rect) ;

/// @brief Method set_clippingSoftness addr 0x2d31ac4 size 0x48 virtual false final false
 void set_clippingSoftness(UnityEngine::Vector2 value) ;

/// @brief Method DisableRectClipping addr 0x2d31b50 size 0x3c virtual false final false
 void DisableRectClipping() ;

/// @brief Method SetMaterial addr 0x2d31b8c size 0x54 virtual false final false
 void SetMaterial(UnityEngine::Material material, int32_t index) ;

/// @brief Method GetMaterial addr 0x2d31be0 size 0x44 virtual false final false
 UnityEngine::Material GetMaterial(int32_t index) ;

/// @brief Method SetPopMaterial addr 0x2d31c24 size 0x54 virtual false final false
 void SetPopMaterial(UnityEngine::Material material, int32_t index) ;

/// @brief Method SetTexture addr 0x2d31c78 size 0x44 virtual false final false
 void SetTexture(UnityEngine::Texture texture) ;

/// @brief Method SetAlphaTexture addr 0x2d31cbc size 0x44 virtual false final false
 void SetAlphaTexture(UnityEngine::Texture texture) ;

/// @brief Method SetMesh addr 0x2d31d00 size 0x44 virtual false final false
 void SetMesh(UnityEngine::Mesh mesh) ;

/// @brief Method Clear addr 0x2d31d44 size 0x3c virtual false final false
 void Clear() ;

/// @brief Method SetMaterial addr 0x2d31d80 size 0x128 virtual false final false
 void SetMaterial(UnityEngine::Material material, UnityEngine::Texture texture) ;

/// @brief Method GetMaterial addr 0x2d31ea8 size 0x40 virtual false final false
 UnityEngine::Material GetMaterial() ;

/// @brief Method SplitUIVertexStreams addr 0x2d31ee8 size 0xd0 virtual false final false
static void SplitUIVertexStreams(System::Collections::Generic::List_1<UnityEngine::UIVertex> verts, System::Collections::Generic::List_1<UnityEngine::Vector3> positions, System::Collections::Generic::List_1<UnityEngine::Color32> colors, System::Collections::Generic::List_1<UnityEngine::Vector4> uv0S, System::Collections::Generic::List_1<UnityEngine::Vector4> uv1S, System::Collections::Generic::List_1<UnityEngine::Vector4> uv2S, System::Collections::Generic::List_1<UnityEngine::Vector4> uv3S, System::Collections::Generic::List_1<UnityEngine::Vector3> normals, System::Collections::Generic::List_1<UnityEngine::Vector4> tangents, System::Collections::Generic::List_1<int32_t> indices) ;

/// @brief Method CreateUIVertexStream addr 0x2d32098 size 0x9c virtual false final false
static void CreateUIVertexStream(System::Collections::Generic::List_1<UnityEngine::UIVertex> verts, System::Collections::Generic::List_1<UnityEngine::Vector3> positions, System::Collections::Generic::List_1<UnityEngine::Color32> colors, System::Collections::Generic::List_1<UnityEngine::Vector4> uv0S, System::Collections::Generic::List_1<UnityEngine::Vector4> uv1S, System::Collections::Generic::List_1<UnityEngine::Vector4> uv2S, System::Collections::Generic::List_1<UnityEngine::Vector4> uv3S, System::Collections::Generic::List_1<UnityEngine::Vector3> normals, System::Collections::Generic::List_1<UnityEngine::Vector4> tangents, System::Collections::Generic::List_1<int32_t> indices) ;

/// @brief Method AddUIVertexStream addr 0x2d321d0 size 0x9c virtual false final false
static void AddUIVertexStream(System::Collections::Generic::List_1<UnityEngine::UIVertex> verts, System::Collections::Generic::List_1<UnityEngine::Vector3> positions, System::Collections::Generic::List_1<UnityEngine::Color32> colors, System::Collections::Generic::List_1<UnityEngine::Vector4> uv0S, System::Collections::Generic::List_1<UnityEngine::Vector4> uv1S, System::Collections::Generic::List_1<UnityEngine::Vector4> uv2S, System::Collections::Generic::List_1<UnityEngine::Vector4> uv3S, System::Collections::Generic::List_1<UnityEngine::Vector3> normals, System::Collections::Generic::List_1<UnityEngine::Vector4> tangents) ;

/// @brief Method SplitIndicesStreamsInternal addr 0x2d32054 size 0x44 virtual false final false
static void SplitIndicesStreamsInternal(::bs_hook::Il2CppWrapperType verts, ::bs_hook::Il2CppWrapperType indices) ;

/// @brief Method SplitUIVertexStreamsInternal addr 0x2d31fb8 size 0x9c virtual false final false
static void SplitUIVertexStreamsInternal(::bs_hook::Il2CppWrapperType verts, ::bs_hook::Il2CppWrapperType positions, ::bs_hook::Il2CppWrapperType colors, ::bs_hook::Il2CppWrapperType uv0S, ::bs_hook::Il2CppWrapperType uv1S, ::bs_hook::Il2CppWrapperType uv2S, ::bs_hook::Il2CppWrapperType uv3S, ::bs_hook::Il2CppWrapperType normals, ::bs_hook::Il2CppWrapperType tangents) ;

/// @brief Method CreateUIVertexStreamInternal addr 0x2d32134 size 0x9c virtual false final false
static void CreateUIVertexStreamInternal(::bs_hook::Il2CppWrapperType verts, ::bs_hook::Il2CppWrapperType positions, ::bs_hook::Il2CppWrapperType colors, ::bs_hook::Il2CppWrapperType uv0S, ::bs_hook::Il2CppWrapperType uv1S, ::bs_hook::Il2CppWrapperType uv2S, ::bs_hook::Il2CppWrapperType uv3S, ::bs_hook::Il2CppWrapperType normals, ::bs_hook::Il2CppWrapperType tangents, ::bs_hook::Il2CppWrapperType indices) ;

/// @brief Method SetColor_Injected addr 0x2d3194c size 0x44 virtual false final false
 void SetColor_Injected(ByRef<UnityEngine::Color> color) ;

/// @brief Method GetColor_Injected addr 0x2d319e8 size 0x44 virtual false final false
 void GetColor_Injected(ByRef<UnityEngine::Color> ret) ;

/// @brief Method EnableRectClipping_Injected addr 0x2d31a80 size 0x44 virtual false final false
 void EnableRectClipping_Injected(ByRef<UnityEngine::Rect> rect) ;

/// @brief Method set_clippingSoftness_Injected addr 0x2d31b0c size 0x44 virtual false final false
 void set_clippingSoftness_Injected(ByRef<UnityEngine::Vector2> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::CanvasRenderer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CanvasRenderer, "UnityEngine", "CanvasRenderer");
