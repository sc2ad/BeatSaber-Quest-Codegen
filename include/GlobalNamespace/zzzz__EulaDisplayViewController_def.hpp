#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace {
namespace HMUI {
class TextPageScrollView;
}
namespace GlobalNamespace {
class LocalizedTextAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class EulaDisplayViewController;
}
// Type: ::EulaDisplayViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5723))
// CS Name: EulaDisplayViewController
class CORDL_TYPE EulaDisplayViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~EulaDisplayViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "EulaDisplayViewController", modifiers: " const&", def_value: None }]
constexpr EulaDisplayViewController(EulaDisplayViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EulaDisplayViewController", modifiers: "&&", def_value: None }]
constexpr EulaDisplayViewController(EulaDisplayViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EulaDisplayViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr EulaDisplayViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EulaDisplayViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EulaDisplayViewController& operator=(EulaDisplayViewController&& o) noexcept = default;
  constexpr EulaDisplayViewController& operator=(EulaDisplayViewController const& o) noexcept = default;
                


// Fields

 ::HMUI::TextPageScrollView __declspec(property(get=__get__textPageScrollView, put=__set__textPageScrollView))  _textPageScrollView;

constexpr void __set__textPageScrollView(::HMUI::TextPageScrollView value) ;

constexpr ::HMUI::TextPageScrollView __get__textPageScrollView() const;

 ::GlobalNamespace::LocalizedTextAsset __declspec(property(get=__get__localizedTextAsset, put=__set__localizedTextAsset))  _localizedTextAsset;

constexpr void __set__localizedTextAsset(::GlobalNamespace::LocalizedTextAsset value) ;

constexpr ::GlobalNamespace::LocalizedTextAsset __get__localizedTextAsset() const;


// Methods

/// @brief Method DidActivate addr 0x215a96c size 0x44 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

// Ctor Parameters []
explicit EulaDisplayViewController() ;

/// @brief Method .ctor addr 0x215a9b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::EulaDisplayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EulaDisplayViewController, "", "EulaDisplayViewController");
