#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace UnityEngine::UI {
class Image;
}
namespace System {
class Action;
}
namespace HMUI {
class ButtonBinder;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class LoadingControl;
}
// Type: ::LoadingControl
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5529))
// CS Name: LoadingControl
class CORDL_TYPE LoadingControl : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~LoadingControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "LoadingControl", modifiers: " const&", def_value: None }]
constexpr LoadingControl(LoadingControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LoadingControl", modifiers: "&&", def_value: None }]
constexpr LoadingControl(LoadingControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LoadingControl(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LoadingControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LoadingControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LoadingControl& operator=(LoadingControl&& o) noexcept = default;
  constexpr LoadingControl& operator=(LoadingControl const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get__loadingContainer, put=__set__loadingContainer))  _loadingContainer;

constexpr void __set__loadingContainer(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__loadingContainer() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__loadingText, put=__set__loadingText))  _loadingText;

constexpr void __set__loadingText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__loadingText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__refreshText, put=__set__refreshText))  _refreshText;

constexpr void __set__refreshText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__refreshText() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__refreshButton, put=__set__refreshButton))  _refreshButton;

constexpr void __set__refreshButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__refreshButton() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__refreshContainer, put=__set__refreshContainer))  _refreshContainer;

constexpr void __set__refreshContainer(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__refreshContainer() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__downloadingContainer, put=__set__downloadingContainer))  _downloadingContainer;

constexpr void __set__downloadingContainer(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__downloadingContainer() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__downloadingText, put=__set__downloadingText))  _downloadingText;

constexpr void __set__downloadingText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__downloadingText() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__donwloadingProgressImage, put=__set__donwloadingProgressImage))  _donwloadingProgressImage;

constexpr void __set__donwloadingProgressImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__donwloadingProgressImage() const;

 ::System::Action __declspec(property(get=__get_didPressRefreshButtonEvent, put=__set_didPressRefreshButtonEvent))  didPressRefreshButtonEvent;

constexpr void __set_didPressRefreshButtonEvent(::System::Action value) ;

constexpr ::System::Action __get_didPressRefreshButtonEvent() const;

 ::HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(::HMUI::ButtonBinder value) ;

constexpr ::HMUI::ButtonBinder __get__buttonBinder() const;


// Properties

 bool __declspec(property(get=get_isLoading))  isLoading;


// Methods

/// @brief Method add_didPressRefreshButtonEvent addr 0x212663c size 0x9c virtual false final false
 void add_didPressRefreshButtonEvent(::System::Action value) ;

/// @brief Method remove_didPressRefreshButtonEvent addr 0x21266d8 size 0x9c virtual false final false
 void remove_didPressRefreshButtonEvent(::System::Action value) ;

/// @brief Method get_isLoading addr 0x2126774 size 0x1c virtual false final false
 bool get_isLoading() ;

/// @brief Method Awake addr 0x2126790 size 0xc4 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2126854 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method ShowLoading addr 0x2126870 size 0x8c virtual false final false
 void ShowLoading(::StringW text) ;

/// @brief Method ShowText addr 0x21268fc size 0xb0 virtual false final false
 void ShowText(::StringW text, bool showRefreshButton) ;

/// @brief Method ShowDownloadingProgress addr 0x21269ac size 0xac virtual false final false
 void ShowDownloadingProgress(::StringW text, float_t downloadingProgress) ;

/// @brief Method Hide addr 0x2126a58 size 0x24 virtual false final false
 void Hide() ;

// Ctor Parameters []
explicit LoadingControl() ;

/// @brief Method .ctor addr 0x2126a7c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__14_0 addr 0x2126a84 size 0x1c virtual false final false
 void _Awake_b__14_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LoadingControl);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LoadingControl, "", "LoadingControl");
