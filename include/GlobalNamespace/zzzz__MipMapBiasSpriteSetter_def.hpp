#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class MipMapBiasSpriteSetter;
}
// Type: ::MipMapBiasSpriteSetter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13748))
// CS Name: MipMapBiasSpriteSetter
class CORDL_TYPE MipMapBiasSpriteSetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MipMapBiasSpriteSetter() = default;

// Ctor Parameters [CppParam { name: "", ty: "MipMapBiasSpriteSetter", modifiers: " const&", def_value: None }]
constexpr MipMapBiasSpriteSetter(MipMapBiasSpriteSetter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MipMapBiasSpriteSetter", modifiers: "&&", def_value: None }]
constexpr MipMapBiasSpriteSetter(MipMapBiasSpriteSetter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MipMapBiasSpriteSetter(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MipMapBiasSpriteSetter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MipMapBiasSpriteSetter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MipMapBiasSpriteSetter& operator=(MipMapBiasSpriteSetter&& o) noexcept = default;
  constexpr MipMapBiasSpriteSetter& operator=(MipMapBiasSpriteSetter const& o) noexcept = default;
                


// Fields

 ::ArrayW<::UnityEngine::Sprite> __declspec(property(get=__get__sprites, put=__set__sprites))  _sprites;

constexpr void __set__sprites(::ArrayW<::UnityEngine::Sprite> value) ;

constexpr ::ArrayW<::UnityEngine::Sprite> __get__sprites() const;

 float_t __declspec(property(get=__get__mipMapBias, put=__set__mipMapBias))  _mipMapBias;

constexpr void __set__mipMapBias(float_t value) ;

constexpr float_t __get__mipMapBias() const;


// Methods

/// @brief Method Start addr 0x1f7312c size 0x74 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit MipMapBiasSpriteSetter() ;

/// @brief Method .ctor addr 0x1f731a0 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MipMapBiasSpriteSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MipMapBiasSpriteSetter, "", "MipMapBiasSpriteSetter");
