#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include <cstdint>
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundTextureGradient;
}
// Type: ::BloomPrePassBackgroundTextureGradient
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14639))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14629))
// CS Name: BloomPrePassBackgroundTextureGradient
class CORDL_TYPE BloomPrePassBackgroundTextureGradient : public GlobalNamespace::BloomPrePassNonLightPass {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BloomPrePassBackgroundTextureGradient() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundTextureGradient", modifiers: " const&", def_value: None }]
constexpr BloomPrePassBackgroundTextureGradient(BloomPrePassBackgroundTextureGradient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundTextureGradient", modifiers: "&&", def_value: None }]
constexpr BloomPrePassBackgroundTextureGradient(BloomPrePassBackgroundTextureGradient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassBackgroundTextureGradient(void* ptr) noexcept : GlobalNamespace::BloomPrePassNonLightPass(ptr) {
}


  constexpr BloomPrePassBackgroundTextureGradient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassBackgroundTextureGradient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassBackgroundTextureGradient& operator=(BloomPrePassBackgroundTextureGradient&& o) noexcept = default;
  constexpr BloomPrePassBackgroundTextureGradient& operator=(BloomPrePassBackgroundTextureGradient const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get__tintColor, put=__set__tintColor))  _tintColor;

constexpr void __set__tintColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__tintColor() const;

static int32_t __declspec(property(get=__get__gradientTexID, put=__set__gradientTexID))  _gradientTexID;

static void __set__gradientTexID(int32_t value) ;

static int32_t __get__gradientTexID() ;

static int32_t __declspec(property(get=__get__inverseProjectionMatrixID, put=__set__inverseProjectionMatrixID))  _inverseProjectionMatrixID;

static void __set__inverseProjectionMatrixID(int32_t value) ;

static int32_t __get__inverseProjectionMatrixID() ;

static int32_t __declspec(property(get=__get__cameraToWorldMatrixID, put=__set__cameraToWorldMatrixID))  _cameraToWorldMatrixID;

static void __set__cameraToWorldMatrixID(int32_t value) ;

static int32_t __get__cameraToWorldMatrixID() ;

static int32_t __declspec(property(get=__get__colorID, put=__set__colorID))  _colorID;

static void __set__colorID(int32_t value) ;

static int32_t __get__colorID() ;

/// @brief Field kUseToneMappingKeyword offset 0
static constexpr ::ConstString  kUseToneMappingKeyword{u"USE_TONE_MAPPING"};

/// @brief Field kSkyGradientShaderName offset 0
static constexpr ::ConstString  kSkyGradientShaderName{u"Hidden/SkyGradient"};

/// @brief Field kTextureWidth offset 0
static constexpr int32_t  kTextureWidth{128};

 UnityEngine::Texture2D __declspec(property(get=__get__texture, put=__set__texture))  _texture;

constexpr void __set__texture(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get__texture() const;

 UnityEngine::Material __declspec(property(get=__get__material, put=__set__material))  _material;

constexpr void __set__material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__material() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_tintColor, put=set_tintColor))  tintColor;


// Methods

/// @brief Method get_tintColor addr 0x1f93f88 size 0xc virtual false final false
 UnityEngine::Color get_tintColor() ;

/// @brief Method set_tintColor addr 0x1f93f94 size 0xc virtual false final false
 void set_tintColor(UnityEngine::Color value) ;

/// @brief Method InitIfNeeded addr 0x1f93fa0 size 0x22c virtual false final false
 void InitIfNeeded() ;

/// @brief Method Start addr 0x1f941cc size 0x4 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x1f9425c size 0x24 virtual false final false
 void OnDestroy() ;

/// @brief Method UpdatePixels addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdatePixels(Unity::Collections::NativeArray_1<UnityEngine::Color32> pixels, int32_t numberOfPixels) ;

/// @brief Method OnValidate addr 0x1f94280 size 0xa8 virtual true final false
 void OnValidate() ;

/// @brief Method UpdateGradientTexture addr 0x1f941d0 size 0x8c virtual false final false
 void UpdateGradientTexture() ;

/// @brief Method Render addr 0x1f94354 size 0x1b8 virtual true final false
 void Render(UnityEngine::RenderTexture dest, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix) ;

static GlobalNamespace::BloomPrePassBackgroundTextureGradient New_ctor() ;

/// @brief Method .ctor addr 0x1f9257c size 0x60 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomPrePassBackgroundTextureGradient);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundTextureGradient, "", "BloomPrePassBackgroundTextureGradient");
