#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class TerrainLayer;
}
// Type: UnityEngine::TerrainLayer
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15441))
// CS Name: UnityEngine.TerrainLayer
class CORDL_TYPE TerrainLayer : public ::UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TerrainLayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "TerrainLayer", modifiers: " const&", def_value: None }]
constexpr TerrainLayer(TerrainLayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TerrainLayer", modifiers: "&&", def_value: None }]
constexpr TerrainLayer(TerrainLayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TerrainLayer(void* ptr) noexcept : ::UnityEngine::Object(ptr) {
}


  constexpr TerrainLayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TerrainLayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TerrainLayer& operator=(TerrainLayer&& o) noexcept = default;
  constexpr TerrainLayer& operator=(TerrainLayer const& o) noexcept = default;
                


// Properties

 ::UnityEngine::Texture2D __declspec(property(get=get_diffuseTexture, put=set_diffuseTexture))  diffuseTexture;

 ::UnityEngine::Texture2D __declspec(property(get=get_normalMapTexture, put=set_normalMapTexture))  normalMapTexture;

 ::UnityEngine::Texture2D __declspec(property(get=get_maskMapTexture, put=set_maskMapTexture))  maskMapTexture;

 ::UnityEngine::Vector2 __declspec(property(get=get_tileSize, put=set_tileSize))  tileSize;

 ::UnityEngine::Vector2 __declspec(property(get=get_tileOffset, put=set_tileOffset))  tileOffset;

 ::UnityEngine::Color __declspec(property(get=get_specular, put=set_specular))  specular;

 float_t __declspec(property(get=get_metallic, put=set_metallic))  metallic;

 float_t __declspec(property(get=get_smoothness, put=set_smoothness))  smoothness;

 float_t __declspec(property(put=set_normalScale))  normalScale;

 ::UnityEngine::Vector4 __declspec(property(put=set_diffuseRemapMin))  diffuseRemapMin;

 ::UnityEngine::Vector4 __declspec(property(put=set_diffuseRemapMax))  diffuseRemapMax;

 ::UnityEngine::Vector4 __declspec(property(put=set_maskMapRemapMin))  maskMapRemapMin;

 ::UnityEngine::Vector4 __declspec(property(put=set_maskMapRemapMax))  maskMapRemapMax;


// Methods

// Ctor Parameters []
explicit TerrainLayer() ;

/// @brief Method .ctor addr 0x2ba4418 size 0x80 virtual false final false
 void _ctor() ;

/// @brief Method Internal_Create addr 0x2ba4498 size 0x3c virtual false final false
static void Internal_Create(::UnityEngine::TerrainLayer layer) ;

/// @brief Method get_diffuseTexture addr 0x2ba44d4 size 0x3c virtual false final false
 ::UnityEngine::Texture2D get_diffuseTexture() ;

/// @brief Method set_diffuseTexture addr 0x2ba4510 size 0x44 virtual false final false
 void set_diffuseTexture(::UnityEngine::Texture2D value) ;

/// @brief Method get_normalMapTexture addr 0x2ba4554 size 0x3c virtual false final false
 ::UnityEngine::Texture2D get_normalMapTexture() ;

/// @brief Method set_normalMapTexture addr 0x2ba4590 size 0x44 virtual false final false
 void set_normalMapTexture(::UnityEngine::Texture2D value) ;

/// @brief Method get_maskMapTexture addr 0x2ba45d4 size 0x3c virtual false final false
 ::UnityEngine::Texture2D get_maskMapTexture() ;

/// @brief Method set_maskMapTexture addr 0x2ba4610 size 0x44 virtual false final false
 void set_maskMapTexture(::UnityEngine::Texture2D value) ;

/// @brief Method get_tileSize addr 0x2ba4654 size 0x4c virtual false final false
 ::UnityEngine::Vector2 get_tileSize() ;

/// @brief Method set_tileSize addr 0x2ba46e4 size 0x48 virtual false final false
 void set_tileSize(::UnityEngine::Vector2 value) ;

/// @brief Method get_tileOffset addr 0x2ba4770 size 0x4c virtual false final false
 ::UnityEngine::Vector2 get_tileOffset() ;

/// @brief Method set_tileOffset addr 0x2ba4800 size 0x48 virtual false final false
 void set_tileOffset(::UnityEngine::Vector2 value) ;

/// @brief Method get_specular addr 0x2ba488c size 0x58 virtual false final false
 ::UnityEngine::Color get_specular() ;

/// @brief Method set_specular addr 0x2ba4928 size 0x54 virtual false final false
 void set_specular(::UnityEngine::Color value) ;

/// @brief Method get_metallic addr 0x2ba49c0 size 0x3c virtual false final false
 float_t get_metallic() ;

/// @brief Method set_metallic addr 0x2ba49fc size 0x4c virtual false final false
 void set_metallic(float_t value) ;

/// @brief Method get_smoothness addr 0x2ba4a48 size 0x3c virtual false final false
 float_t get_smoothness() ;

/// @brief Method set_smoothness addr 0x2ba4a84 size 0x4c virtual false final false
 void set_smoothness(float_t value) ;

/// @brief Method set_normalScale addr 0x2ba4ad0 size 0x4c virtual false final false
 void set_normalScale(float_t value) ;

/// @brief Method set_diffuseRemapMin addr 0x2ba4b1c size 0x54 virtual false final false
 void set_diffuseRemapMin(::UnityEngine::Vector4 value) ;

/// @brief Method set_diffuseRemapMax addr 0x2ba4bb4 size 0x54 virtual false final false
 void set_diffuseRemapMax(::UnityEngine::Vector4 value) ;

/// @brief Method set_maskMapRemapMin addr 0x2ba4c4c size 0x54 virtual false final false
 void set_maskMapRemapMin(::UnityEngine::Vector4 value) ;

/// @brief Method set_maskMapRemapMax addr 0x2ba4ce4 size 0x54 virtual false final false
 void set_maskMapRemapMax(::UnityEngine::Vector4 value) ;

/// @brief Method get_tileSize_Injected addr 0x2ba46a0 size 0x44 virtual false final false
 void get_tileSize_Injected(ByRef<::UnityEngine::Vector2> ret) ;

/// @brief Method set_tileSize_Injected addr 0x2ba472c size 0x44 virtual false final false
 void set_tileSize_Injected(ByRef<::UnityEngine::Vector2> value) ;

/// @brief Method get_tileOffset_Injected addr 0x2ba47bc size 0x44 virtual false final false
 void get_tileOffset_Injected(ByRef<::UnityEngine::Vector2> ret) ;

/// @brief Method set_tileOffset_Injected addr 0x2ba4848 size 0x44 virtual false final false
 void set_tileOffset_Injected(ByRef<::UnityEngine::Vector2> value) ;

/// @brief Method get_specular_Injected addr 0x2ba48e4 size 0x44 virtual false final false
 void get_specular_Injected(ByRef<::UnityEngine::Color> ret) ;

/// @brief Method set_specular_Injected addr 0x2ba497c size 0x44 virtual false final false
 void set_specular_Injected(ByRef<::UnityEngine::Color> value) ;

/// @brief Method set_diffuseRemapMin_Injected addr 0x2ba4b70 size 0x44 virtual false final false
 void set_diffuseRemapMin_Injected(ByRef<::UnityEngine::Vector4> value) ;

/// @brief Method set_diffuseRemapMax_Injected addr 0x2ba4c08 size 0x44 virtual false final false
 void set_diffuseRemapMax_Injected(ByRef<::UnityEngine::Vector4> value) ;

/// @brief Method set_maskMapRemapMin_Injected addr 0x2ba4ca0 size 0x44 virtual false final false
 void set_maskMapRemapMin_Injected(ByRef<::UnityEngine::Vector4> value) ;

/// @brief Method set_maskMapRemapMax_Injected addr 0x2ba4d38 size 0x44 virtual false final false
 void set_maskMapRemapMax_Injected(ByRef<::UnityEngine::Vector4> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::TerrainLayer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainLayer, "UnityEngine", "TerrainLayer");
