#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace UnityEngine {
class TextAsset;
}
namespace HMUI {
class TextPageScrollView;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ReleaseInfoViewController;
}
// Type: ::ReleaseInfoViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5837))
// CS Name: ReleaseInfoViewController
class CORDL_TYPE ReleaseInfoViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ReleaseInfoViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReleaseInfoViewController", modifiers: " const&", def_value: None }]
constexpr ReleaseInfoViewController(ReleaseInfoViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReleaseInfoViewController", modifiers: "&&", def_value: None }]
constexpr ReleaseInfoViewController(ReleaseInfoViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReleaseInfoViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr ReleaseInfoViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReleaseInfoViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReleaseInfoViewController& operator=(ReleaseInfoViewController&& o) noexcept = default;
  constexpr ReleaseInfoViewController& operator=(ReleaseInfoViewController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel))  _mainSettingsModel;

constexpr void __set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO value) ;

constexpr GlobalNamespace::MainSettingsModelSO __get__mainSettingsModel() const;

 HMUI::TextPageScrollView __declspec(property(get=__get__textPageScrollView, put=__set__textPageScrollView))  _textPageScrollView;

constexpr void __set__textPageScrollView(HMUI::TextPageScrollView value) ;

constexpr HMUI::TextPageScrollView __get__textPageScrollView() const;

 UnityEngine::TextAsset __declspec(property(get=__get__releaseNotesTextAsset, put=__set__releaseNotesTextAsset))  _releaseNotesTextAsset;

constexpr void __set__releaseNotesTextAsset(UnityEngine::TextAsset value) ;

constexpr UnityEngine::TextAsset __get__releaseNotesTextAsset() const;

 UnityEngine::TextAsset __declspec(property(get=__get__firstTextAsset, put=__set__firstTextAsset))  _firstTextAsset;

constexpr void __set__firstTextAsset(UnityEngine::TextAsset value) ;

constexpr UnityEngine::TextAsset __get__firstTextAsset() const;


// Methods

/// @brief Method DidActivate addr 0x217f154 size 0x5c virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

static GlobalNamespace::ReleaseInfoViewController New_ctor() ;

/// @brief Method .ctor addr 0x217f1b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ReleaseInfoViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ReleaseInfoViewController, "", "ReleaseInfoViewController");
