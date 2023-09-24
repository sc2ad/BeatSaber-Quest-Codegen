#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__TextureEffectSO_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct ToneMapping;
}
namespace GlobalNamespace {
class TextureEffectSO;
}
namespace GlobalNamespace {
class IBloomPrePassParams;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
// Type: ::BloomPrePassEffectSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14739))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14631))
// CS Name: BloomPrePassEffectSO
class CORDL_TYPE BloomPrePassEffectSO : public GlobalNamespace::TextureEffectSO {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBloomPrePassParams
constexpr operator  GlobalNamespace::IBloomPrePassParams() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BloomPrePassEffectSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassEffectSO", modifiers: " const&", def_value: None }]
constexpr BloomPrePassEffectSO(BloomPrePassEffectSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassEffectSO", modifiers: "&&", def_value: None }]
constexpr BloomPrePassEffectSO(BloomPrePassEffectSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassEffectSO(void* ptr) noexcept : GlobalNamespace::TextureEffectSO(ptr) {
}


  constexpr BloomPrePassEffectSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassEffectSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassEffectSO& operator=(BloomPrePassEffectSO&& o) noexcept = default;
  constexpr BloomPrePassEffectSO& operator=(BloomPrePassEffectSO const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__textureWidth, put=__set__textureWidth))  _textureWidth;

constexpr void __set__textureWidth(int32_t value) ;

constexpr int32_t __get__textureWidth() const;

 int32_t __declspec(property(get=__get__textureHeight, put=__set__textureHeight))  _textureHeight;

constexpr void __set__textureHeight(int32_t value) ;

constexpr int32_t __get__textureHeight() const;

 UnityEngine::Vector2 __declspec(property(get=__get__fov, put=__set__fov))  _fov;

constexpr void __set__fov(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__fov() const;

 float_t __declspec(property(get=__get__linesWidth, put=__set__linesWidth))  _linesWidth;

constexpr void __set__linesWidth(float_t value) ;

constexpr float_t __get__linesWidth() const;


// Properties

 GlobalNamespace::TextureEffectSO __declspec(property(get=get_textureEffect))  textureEffect;

 int32_t __declspec(property(get=get_textureWidth))  textureWidth;

 int32_t __declspec(property(get=get_textureHeight))  textureHeight;

 UnityEngine::Vector2 __declspec(property(get=get_fov))  fov;

 float_t __declspec(property(get=get_linesWidth))  linesWidth;

 GlobalNamespace::ToneMapping __declspec(property(get=get_toneMapping))  toneMapping;


// Methods

/// @brief Method get_textureEffect addr 0x1f94620 size 0x4 virtual true final true
 GlobalNamespace::TextureEffectSO get_textureEffect() ;

/// @brief Method get_textureWidth addr 0x1f94624 size 0x8 virtual true final true
 int32_t get_textureWidth() ;

/// @brief Method get_textureHeight addr 0x1f9462c size 0x8 virtual true final true
 int32_t get_textureHeight() ;

/// @brief Method get_fov addr 0x1f94634 size 0x8 virtual true final true
 UnityEngine::Vector2 get_fov() ;

/// @brief Method get_linesWidth addr 0x1f9463c size 0x8 virtual true final true
 float_t get_linesWidth() ;

/// @brief Method get_toneMapping addr 0x1f94644 size 0x8 virtual true final false
 GlobalNamespace::ToneMapping get_toneMapping() ;

static GlobalNamespace::BloomPrePassEffectSO New_ctor() ;

/// @brief Method .ctor addr 0x1f9464c size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomPrePassEffectSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassEffectSO, "", "BloomPrePassEffectSO");
