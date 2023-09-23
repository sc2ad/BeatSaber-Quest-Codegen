#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class FireEffectShaderHelper;
}
// Type: ::FireEffectShaderHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3990))
// CS Name: FireEffectShaderHelper
class CORDL_TYPE FireEffectShaderHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FireEffectShaderHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "FireEffectShaderHelper", modifiers: " const&", def_value: None }]
constexpr FireEffectShaderHelper(FireEffectShaderHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FireEffectShaderHelper", modifiers: "&&", def_value: None }]
constexpr FireEffectShaderHelper(FireEffectShaderHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FireEffectShaderHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FireEffectShaderHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FireEffectShaderHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FireEffectShaderHelper& operator=(FireEffectShaderHelper&& o) noexcept = default;
  constexpr FireEffectShaderHelper& operator=(FireEffectShaderHelper const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_effectStartSongTimePropertyId, put=__set_effectStartSongTimePropertyId))  effectStartSongTimePropertyId;

static void __set_effectStartSongTimePropertyId(int32_t value) ;

static int32_t __get_effectStartSongTimePropertyId() ;

static int32_t __declspec(property(get=__get_colorPropertyId, put=__set_colorPropertyId))  colorPropertyId;

static void __set_colorPropertyId(int32_t value) ;

static int32_t __get_colorPropertyId() ;

static int32_t __declspec(property(get=__get_privatePointLightColorPropertyId, put=__set_privatePointLightColorPropertyId))  privatePointLightColorPropertyId;

static void __set_privatePointLightColorPropertyId(int32_t value) ;

static int32_t __get_privatePointLightColorPropertyId() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FireEffectShaderHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FireEffectShaderHelper, "", "FireEffectShaderHelper");
