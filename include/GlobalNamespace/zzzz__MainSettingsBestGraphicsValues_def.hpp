#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class MainSettingsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSettingsBestGraphicsValues;
}
// Type: ::MainSettingsBestGraphicsValues
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4451))
// CS Name: MainSettingsBestGraphicsValues
class CORDL_TYPE MainSettingsBestGraphicsValues : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MainSettingsBestGraphicsValues() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainSettingsBestGraphicsValues", modifiers: " const&", def_value: None }]
constexpr MainSettingsBestGraphicsValues(MainSettingsBestGraphicsValues const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainSettingsBestGraphicsValues", modifiers: "&&", def_value: None }]
constexpr MainSettingsBestGraphicsValues(MainSettingsBestGraphicsValues&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainSettingsBestGraphicsValues(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MainSettingsBestGraphicsValues& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainSettingsBestGraphicsValues& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainSettingsBestGraphicsValues& operator=(MainSettingsBestGraphicsValues&& o) noexcept = default;
  constexpr MainSettingsBestGraphicsValues& operator=(MainSettingsBestGraphicsValues const& o) noexcept = default;
                


// Methods

/// @brief Method ApplyValues addr 0x21ef688 size 0x154 virtual false final false
static void ApplyValues(GlobalNamespace::MainSettingsModelSO mainSettingsModel) ;

// Ctor Parameters []
explicit MainSettingsBestGraphicsValues() ;

/// @brief Method .ctor addr 0x21ef7dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MainSettingsBestGraphicsValues);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSettingsBestGraphicsValues, "", "MainSettingsBestGraphicsValues");
