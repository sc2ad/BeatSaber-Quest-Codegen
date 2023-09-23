#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class TextureEffectSO;
}
namespace GlobalNamespace {
struct ToneMapping;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class IBloomPrePassParams;
}
// Type: ::IBloomPrePassParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14645))
// CS Name: IBloomPrePassParams
class CORDL_TYPE IBloomPrePassParams : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBloomPrePassParams() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBloomPrePassParams(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 GlobalNamespace::TextureEffectSO __declspec(property(get=get_textureEffect))  textureEffect;

 int32_t __declspec(property(get=get_textureWidth))  textureWidth;

 int32_t __declspec(property(get=get_textureHeight))  textureHeight;

 UnityEngine::Vector2 __declspec(property(get=get_fov))  fov;

 float_t __declspec(property(get=get_linesWidth))  linesWidth;

 GlobalNamespace::ToneMapping __declspec(property(get=get_toneMapping))  toneMapping;


// Methods

/// @brief Method get_textureEffect addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::TextureEffectSO get_textureEffect() ;

/// @brief Method get_textureWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_textureWidth() ;

/// @brief Method get_textureHeight addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_textureHeight() ;

/// @brief Method get_fov addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector2 get_fov() ;

/// @brief Method get_linesWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_linesWidth() ;

/// @brief Method get_toneMapping addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::ToneMapping get_toneMapping() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IBloomPrePassParams);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBloomPrePassParams, "", "IBloomPrePassParams");
