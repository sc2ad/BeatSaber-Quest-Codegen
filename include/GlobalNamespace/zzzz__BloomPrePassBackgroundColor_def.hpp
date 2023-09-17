#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundColor;
}
// Type: ::BloomPrePassBackgroundColor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14639))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14618))
// CS Name: BloomPrePassBackgroundColor
class CORDL_TYPE BloomPrePassBackgroundColor : public ::GlobalNamespace::BloomPrePassNonLightPass {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BloomPrePassBackgroundColor() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColor", modifiers: " const&", def_value: None }]
constexpr BloomPrePassBackgroundColor(BloomPrePassBackgroundColor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColor", modifiers: "&&", def_value: None }]
constexpr BloomPrePassBackgroundColor(BloomPrePassBackgroundColor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassBackgroundColor(void* ptr) noexcept : ::GlobalNamespace::BloomPrePassNonLightPass(ptr) {
}


  constexpr BloomPrePassBackgroundColor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassBackgroundColor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassBackgroundColor& operator=(BloomPrePassBackgroundColor&& o) noexcept = default;
  constexpr BloomPrePassBackgroundColor& operator=(BloomPrePassBackgroundColor const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__intensity, put=__set__intensity))  _intensity;

constexpr void __set__intensity(float_t value) ;

constexpr float_t __get__intensity() const;

 float_t __declspec(property(get=__get__minAlpha, put=__set__minAlpha))  _minAlpha;

constexpr void __set__minAlpha(float_t value) ;

constexpr float_t __get__minAlpha() const;

 float_t __declspec(property(get=__get__grayscaleFactor, put=__set__grayscaleFactor))  _grayscaleFactor;

constexpr void __set__grayscaleFactor(float_t value) ;

constexpr float_t __get__grayscaleFactor() const;

 ::UnityEngine::Shader __declspec(property(get=__get__shader, put=__set__shader))  _shader;

constexpr void __set__shader(::UnityEngine::Shader value) ;

constexpr ::UnityEngine::Shader __get__shader() const;

 ::UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__color() const;

static int32_t __declspec(property(get=__get__colorID, put=__set__colorID))  _colorID;

static void __set__colorID(int32_t value) ;

static int32_t __get__colorID() ;

static ::UnityEngine::Material __declspec(property(get=__get__material, put=__set__material))  _material;

static void __set__material(::UnityEngine::Material value) ;

static ::UnityEngine::Material __get__material() ;

static bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

static void __set__initialized(bool value) ;

static bool __get__initialized() ;


// Properties

 ::UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;

 ::UnityEngine::Color __declspec(property(get=get_bgColor))  bgColor;


// Methods

/// @brief Method get_color addr 0x1f91d58 size 0xc virtual false final false
 ::UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x1f91d64 size 0xc virtual false final false
 void set_color(::UnityEngine::Color value) ;

/// @brief Method get_bgColor addr 0x1f91d70 size 0x90 virtual false final false
 ::UnityEngine::Color get_bgColor() ;

/// @brief Method InitIfNeeded addr 0x1f91e00 size 0x184 virtual false final false
 void InitIfNeeded() ;

/// @brief Method Render addr 0x1f91f84 size 0xd4 virtual true final false
 void Render(::UnityEngine::RenderTexture dest, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix) ;

// Ctor Parameters []
explicit BloomPrePassBackgroundColor() ;

/// @brief Method .ctor addr 0x1f92058 size 0x6c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColor, "", "BloomPrePassBackgroundColor");
