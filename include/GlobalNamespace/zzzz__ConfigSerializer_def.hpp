#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class ConfigSerializer;
}
// Type: ::ConfigSerializer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13780))
// CS Name: ConfigSerializer
class CORDL_TYPE ConfigSerializer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConfigSerializer() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConfigSerializer", modifiers: " const&", def_value: None }]
constexpr ConfigSerializer(ConfigSerializer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConfigSerializer", modifiers: "&&", def_value: None }]
constexpr ConfigSerializer(ConfigSerializer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConfigSerializer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConfigSerializer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConfigSerializer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConfigSerializer& operator=(ConfigSerializer&& o) noexcept = default;
  constexpr ConfigSerializer& operator=(ConfigSerializer const& o) noexcept = default;
                


// Methods

/// @brief Method SaveConfig addr 0x1f754cc size 0x430 virtual false final false
static void SaveConfig(::bs_hook::Il2CppWrapperType config, ::StringW filePath) ;

/// @brief Method LoadConfig addr 0x1f758fc size 0x560 virtual false final false
static bool LoadConfig(::bs_hook::Il2CppWrapperType config, ::StringW filePath) ;

// Ctor Parameters []
explicit ConfigSerializer() ;

/// @brief Method .ctor addr 0x1f75e5c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ConfigSerializer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConfigSerializer, "", "ConfigSerializer");
