#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct SpritePackingRotation;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct SpriteMeshType;
}
namespace UnityEngine {
struct SpritePackingMode;
}
// Forward declare root types
namespace UnityEngine {
class Sprite;
}
// Type: UnityEngine::Sprite
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10227))
// CS Name: UnityEngine.Sprite
class CORDL_TYPE Sprite : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Sprite() = default;

// Ctor Parameters [CppParam { name: "", ty: "Sprite", modifiers: " const&", def_value: None }]
constexpr Sprite(Sprite const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Sprite", modifiers: "&&", def_value: None }]
constexpr Sprite(Sprite&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Sprite(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr Sprite& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Sprite& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Sprite& operator=(Sprite&& o) noexcept = default;
  constexpr Sprite& operator=(Sprite const& o) noexcept = default;
                


// Properties

 UnityEngine::Bounds __declspec(property(get=get_bounds))  bounds;

 UnityEngine::Rect __declspec(property(get=get_rect))  rect;

 UnityEngine::Vector4 __declspec(property(get=get_border))  border;

 UnityEngine::Texture2D __declspec(property(get=get_texture))  texture;

 float_t __declspec(property(get=get_pixelsPerUnit))  pixelsPerUnit;

 UnityEngine::Texture2D __declspec(property(get=get_associatedAlphaSplitTexture))  associatedAlphaSplitTexture;

 UnityEngine::Vector2 __declspec(property(get=get_pivot))  pivot;

 bool __declspec(property(get=get_packed))  packed;

 UnityEngine::SpritePackingMode __declspec(property(get=get_packingMode))  packingMode;

 UnityEngine::SpritePackingRotation __declspec(property(get=get_packingRotation))  packingRotation;

 UnityEngine::Rect __declspec(property(get=get_textureRect))  textureRect;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_vertices))  vertices;

 ::ArrayW<uint16_t> __declspec(property(get=get_triangles))  triangles;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_uv))  uv;


// Methods

static UnityEngine::Sprite New_ctor() ;

/// @brief Method .ctor addr 0x2b6d44c size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method GetPackingMode addr 0x2b6d4a4 size 0x3c virtual false final false
 int32_t GetPackingMode() ;

/// @brief Method GetPackingRotation addr 0x2b6d4e0 size 0x3c virtual false final false
 int32_t GetPackingRotation() ;

/// @brief Method GetPacked addr 0x2b6d51c size 0x3c virtual false final false
 int32_t GetPacked() ;

/// @brief Method GetTextureRect addr 0x2b6d558 size 0x58 virtual false final false
 UnityEngine::Rect GetTextureRect() ;

/// @brief Method GetInnerUVs addr 0x2b6d5f4 size 0x58 virtual false final false
 UnityEngine::Vector4 GetInnerUVs() ;

/// @brief Method GetOuterUVs addr 0x2b6d690 size 0x58 virtual false final false
 UnityEngine::Vector4 GetOuterUVs() ;

/// @brief Method GetPadding addr 0x2b6d72c size 0x58 virtual false final false
 UnityEngine::Vector4 GetPadding() ;

/// @brief Method CreateSprite addr 0x2b6d7c8 size 0x98 virtual false final false
static UnityEngine::Sprite CreateSprite(UnityEngine::Texture2D texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border, bool generateFallbackPhysicsShape) ;

/// @brief Method get_bounds addr 0x2b6d8f4 size 0x68 virtual false final false
 UnityEngine::Bounds get_bounds() ;

/// @brief Method get_rect addr 0x2b6d9a0 size 0x58 virtual false final false
 UnityEngine::Rect get_rect() ;

/// @brief Method get_border addr 0x2b6da3c size 0x58 virtual false final false
 UnityEngine::Vector4 get_border() ;

/// @brief Method get_texture addr 0x2b6dad8 size 0x3c virtual false final false
 UnityEngine::Texture2D get_texture() ;

/// @brief Method get_pixelsPerUnit addr 0x2b6db14 size 0x3c virtual false final false
 float_t get_pixelsPerUnit() ;

/// @brief Method get_associatedAlphaSplitTexture addr 0x2b6db50 size 0x3c virtual false final false
 UnityEngine::Texture2D get_associatedAlphaSplitTexture() ;

/// @brief Method get_pivot addr 0x2b6db8c size 0x4c virtual false final false
 UnityEngine::Vector2 get_pivot() ;

/// @brief Method get_packed addr 0x2b6dc1c size 0x48 virtual false final false
 bool get_packed() ;

/// @brief Method get_packingMode addr 0x2b6dc64 size 0x3c virtual false final false
 UnityEngine::SpritePackingMode get_packingMode() ;

/// @brief Method get_packingRotation addr 0x2b6dca0 size 0x3c virtual false final false
 UnityEngine::SpritePackingRotation get_packingRotation() ;

/// @brief Method get_textureRect addr 0x2b6dcdc size 0x8c virtual false final false
 UnityEngine::Rect get_textureRect() ;

/// @brief Method get_vertices addr 0x2b6dd68 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_vertices() ;

/// @brief Method get_triangles addr 0x2b6dda4 size 0x3c virtual false final false
 ::ArrayW<uint16_t> get_triangles() ;

/// @brief Method get_uv addr 0x2b6dde0 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_uv() ;

/// @brief Method Create addr 0x2b6de1c size 0x3ec virtual false final false
static UnityEngine::Sprite Create(UnityEngine::Texture2D texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border, bool generateFallbackPhysicsShape) ;

/// @brief Method GetTextureRect_Injected addr 0x2b6d5b0 size 0x44 virtual false final false
 void GetTextureRect_Injected(ByRef<UnityEngine::Rect> ret) ;

/// @brief Method GetInnerUVs_Injected addr 0x2b6d64c size 0x44 virtual false final false
 void GetInnerUVs_Injected(ByRef<UnityEngine::Vector4> ret) ;

/// @brief Method GetOuterUVs_Injected addr 0x2b6d6e8 size 0x44 virtual false final false
 void GetOuterUVs_Injected(ByRef<UnityEngine::Vector4> ret) ;

/// @brief Method GetPadding_Injected addr 0x2b6d784 size 0x44 virtual false final false
 void GetPadding_Injected(ByRef<UnityEngine::Vector4> ret) ;

/// @brief Method CreateSprite_Injected addr 0x2b6d860 size 0x94 virtual false final false
static UnityEngine::Sprite CreateSprite_Injected(UnityEngine::Texture2D texture, ByRef<UnityEngine::Rect> rect, ByRef<UnityEngine::Vector2> pivot, float_t pixelsPerUnit, uint32_t extrude, UnityEngine::SpriteMeshType meshType, ByRef<UnityEngine::Vector4> border, bool generateFallbackPhysicsShape) ;

/// @brief Method get_bounds_Injected addr 0x2b6d95c size 0x44 virtual false final false
 void get_bounds_Injected(ByRef<UnityEngine::Bounds> ret) ;

/// @brief Method get_rect_Injected addr 0x2b6d9f8 size 0x44 virtual false final false
 void get_rect_Injected(ByRef<UnityEngine::Rect> ret) ;

/// @brief Method get_border_Injected addr 0x2b6da94 size 0x44 virtual false final false
 void get_border_Injected(ByRef<UnityEngine::Vector4> ret) ;

/// @brief Method get_pivot_Injected addr 0x2b6dbd8 size 0x44 virtual false final false
 void get_pivot_Injected(ByRef<UnityEngine::Vector2> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Sprite);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Sprite, "UnityEngine", "Sprite");
