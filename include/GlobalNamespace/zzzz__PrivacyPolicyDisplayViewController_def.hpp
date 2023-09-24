#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace GlobalNamespace {
class LocalizedTextAsset;
}
namespace HMUI {
class TextPageScrollView;
}
// Forward declare root types
namespace GlobalNamespace {
class PrivacyPolicyDisplayViewController;
}
// Type: ::PrivacyPolicyDisplayViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5828))
// CS Name: PrivacyPolicyDisplayViewController
class CORDL_TYPE PrivacyPolicyDisplayViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~PrivacyPolicyDisplayViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyDisplayViewController", modifiers: " const&", def_value: None }]
constexpr PrivacyPolicyDisplayViewController(PrivacyPolicyDisplayViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyDisplayViewController", modifiers: "&&", def_value: None }]
constexpr PrivacyPolicyDisplayViewController(PrivacyPolicyDisplayViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrivacyPolicyDisplayViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr PrivacyPolicyDisplayViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrivacyPolicyDisplayViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrivacyPolicyDisplayViewController& operator=(PrivacyPolicyDisplayViewController&& o) noexcept = default;
  constexpr PrivacyPolicyDisplayViewController& operator=(PrivacyPolicyDisplayViewController const& o) noexcept = default;
                


// Fields

 HMUI::TextPageScrollView __declspec(property(get=__get__textPageScrollView, put=__set__textPageScrollView))  _textPageScrollView;

constexpr void __set__textPageScrollView(HMUI::TextPageScrollView value) ;

constexpr HMUI::TextPageScrollView __get__textPageScrollView() const;

 GlobalNamespace::LocalizedTextAsset __declspec(property(get=__get__localizedTextAsset, put=__set__localizedTextAsset))  _localizedTextAsset;

constexpr void __set__localizedTextAsset(GlobalNamespace::LocalizedTextAsset value) ;

constexpr GlobalNamespace::LocalizedTextAsset __get__localizedTextAsset() const;


// Methods

/// @brief Method DidActivate addr 0x217e5f0 size 0x44 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

static GlobalNamespace::PrivacyPolicyDisplayViewController New_ctor() ;

/// @brief Method .ctor addr 0x217e634 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PrivacyPolicyDisplayViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PrivacyPolicyDisplayViewController, "", "PrivacyPolicyDisplayViewController");
