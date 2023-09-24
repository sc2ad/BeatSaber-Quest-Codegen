#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class EnvironmentTypeSO;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
// Forward declare root types
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
// Type: ::OverrideEnvironmentSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4733))
// CS Name: OverrideEnvironmentSettings
class CORDL_TYPE OverrideEnvironmentSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OverrideEnvironmentSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "OverrideEnvironmentSettings", modifiers: " const&", def_value: None }]
constexpr OverrideEnvironmentSettings(OverrideEnvironmentSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OverrideEnvironmentSettings", modifiers: "&&", def_value: None }]
constexpr OverrideEnvironmentSettings(OverrideEnvironmentSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OverrideEnvironmentSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OverrideEnvironmentSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OverrideEnvironmentSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OverrideEnvironmentSettings& operator=(OverrideEnvironmentSettings&& o) noexcept = default;
  constexpr OverrideEnvironmentSettings& operator=(OverrideEnvironmentSettings const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_overrideEnvironments, put=__set_overrideEnvironments))  overrideEnvironments;

constexpr void __set_overrideEnvironments(bool value) ;

constexpr bool __get_overrideEnvironments() const;

 System::Collections::Generic::Dictionary_2<GlobalNamespace::EnvironmentTypeSO,GlobalNamespace::EnvironmentInfoSO> __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(System::Collections::Generic::Dictionary_2<GlobalNamespace::EnvironmentTypeSO,GlobalNamespace::EnvironmentInfoSO> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::EnvironmentTypeSO,GlobalNamespace::EnvironmentInfoSO> __get__data() const;


// Methods

/// @brief Method SetEnvironmentInfoForType addr 0x22201ec size 0x68 virtual false final false
 void SetEnvironmentInfoForType(GlobalNamespace::EnvironmentTypeSO environmentType, GlobalNamespace::EnvironmentInfoSO environmentInfo) ;

/// @brief Method GetOverrideEnvironmentInfoForType addr 0x2220254 size 0x78 virtual false final false
 GlobalNamespace::EnvironmentInfoSO GetOverrideEnvironmentInfoForType(GlobalNamespace::EnvironmentTypeSO environmentType) ;

static GlobalNamespace::OverrideEnvironmentSettings New_ctor() ;

/// @brief Method .ctor addr 0x22202cc size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OverrideEnvironmentSettings);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OverrideEnvironmentSettings, "", "OverrideEnvironmentSettings");
