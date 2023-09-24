#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
// Type: ::AppStaticSettingsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4153))
// CS Name: AppStaticSettingsSO
class CORDL_TYPE AppStaticSettingsSO : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AppStaticSettingsSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "AppStaticSettingsSO", modifiers: " const&", def_value: None }]
constexpr AppStaticSettingsSO(AppStaticSettingsSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AppStaticSettingsSO", modifiers: "&&", def_value: None }]
constexpr AppStaticSettingsSO(AppStaticSettingsSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AppStaticSettingsSO(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr AppStaticSettingsSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AppStaticSettingsSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AppStaticSettingsSO& operator=(AppStaticSettingsSO&& o) noexcept = default;
  constexpr AppStaticSettingsSO& operator=(AppStaticSettingsSO const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_requirePrivacyPolicy, put=__set_requirePrivacyPolicy))  requirePrivacyPolicy;

constexpr void __set_requirePrivacyPolicy(bool value) ;

constexpr bool __get_requirePrivacyPolicy() const;

 bool __declspec(property(get=__get_enable360DegreeLevels, put=__set_enable360DegreeLevels))  enable360DegreeLevels;

constexpr void __set_enable360DegreeLevels(bool value) ;

constexpr bool __get_enable360DegreeLevels() const;

 bool __declspec(property(get=__get_enableCustomLevels, put=__set_enableCustomLevels))  enableCustomLevels;

constexpr void __set_enableCustomLevels(bool value) ;

constexpr bool __get_enableCustomLevels() const;

 bool __declspec(property(get=__get_disableMultiplayer, put=__set_disableMultiplayer))  disableMultiplayer;

constexpr void __set_disableMultiplayer(bool value) ;

constexpr bool __get_disableMultiplayer() const;


// Methods

static GlobalNamespace::AppStaticSettingsSO New_ctor() ;

/// @brief Method .ctor addr 0x21b9064 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AppStaticSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppStaticSettingsSO, "", "AppStaticSettingsSO");
