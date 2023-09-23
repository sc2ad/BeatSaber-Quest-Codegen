#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace HMUI {
class ViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class SettingsSubMenuInfo;
}
// Type: ::SettingsSubMenuInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5787))
// CS Name: SettingsSubMenuInfo
class CORDL_TYPE SettingsSubMenuInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SettingsSubMenuInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "SettingsSubMenuInfo", modifiers: " const&", def_value: None }]
constexpr SettingsSubMenuInfo(SettingsSubMenuInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SettingsSubMenuInfo", modifiers: "&&", def_value: None }]
constexpr SettingsSubMenuInfo(SettingsSubMenuInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SettingsSubMenuInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SettingsSubMenuInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SettingsSubMenuInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SettingsSubMenuInfo& operator=(SettingsSubMenuInfo&& o) noexcept = default;
  constexpr SettingsSubMenuInfo& operator=(SettingsSubMenuInfo const& o) noexcept = default;
                


// Fields

 HMUI::ViewController __declspec(property(get=__get__viewController, put=__set__viewController))  _viewController;

constexpr void __set__viewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__viewController() const;

 ::StringW __declspec(property(get=__get__menuName, put=__set__menuName))  _menuName;

constexpr void __set__menuName(::StringW value) ;

constexpr ::StringW __get__menuName() const;


// Properties

 HMUI::ViewController __declspec(property(get=get_viewController))  viewController;

 ::StringW __declspec(property(get=get_localizedMenuName))  localizedMenuName;


// Methods

/// @brief Method get_viewController addr 0x21727e0 size 0x8 virtual false final false
 HMUI::ViewController get_viewController() ;

/// @brief Method get_localizedMenuName addr 0x21727e8 size 0xc virtual false final false
 ::StringW get_localizedMenuName() ;

// Ctor Parameters []
explicit SettingsSubMenuInfo() ;

/// @brief Method .ctor addr 0x21727f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SettingsSubMenuInfo);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SettingsSubMenuInfo, "", "SettingsSubMenuInfo");
