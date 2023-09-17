#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class Vector3SO;
}
// Forward declare root types
namespace GlobalNamespace {
class FloorAdjustViewController;
}
// Type: ::FloorAdjustViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5728))
// CS Name: FloorAdjustViewController
class CORDL_TYPE FloorAdjustViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~FloorAdjustViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "FloorAdjustViewController", modifiers: " const&", def_value: None }]
constexpr FloorAdjustViewController(FloorAdjustViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FloorAdjustViewController", modifiers: "&&", def_value: None }]
constexpr FloorAdjustViewController(FloorAdjustViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FloorAdjustViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr FloorAdjustViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FloorAdjustViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FloorAdjustViewController& operator=(FloorAdjustViewController&& o) noexcept = default;
  constexpr FloorAdjustViewController& operator=(FloorAdjustViewController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::Vector3SO __declspec(property(get=__get__roomCenter, put=__set__roomCenter))  _roomCenter;

constexpr void __set__roomCenter(::GlobalNamespace::Vector3SO value) ;

constexpr ::GlobalNamespace::Vector3SO __get__roomCenter() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__yIncButton, put=__set__yIncButton))  _yIncButton;

constexpr void __set__yIncButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__yIncButton() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__yDecButton, put=__set__yDecButton))  _yDecButton;

constexpr void __set__yDecButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__yDecButton() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__playerHeightText, put=__set__playerHeightText))  _playerHeightText;

constexpr void __set__playerHeightText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__playerHeightText() const;

 ::GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper value) ;

constexpr ::GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

/// @brief Field kMoveStep offset 0
static constexpr float_t  kMoveStep{0.05};

/// @brief Field kMinPlayerHeight offset 0
static constexpr float_t  kMinPlayerHeight{0.5};

/// @brief Field kMaxPlayerHeight offset 0
static constexpr float_t  kMaxPlayerHeight{3};

 float_t __declspec(property(get=__get__playerHeight, put=__set__playerHeight))  _playerHeight;

constexpr void __set__playerHeight(float_t value) ;

constexpr float_t __get__playerHeight() const;


// Methods

/// @brief Method DidActivate addr 0x215b228 size 0x108 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method Update addr 0x215b330 size 0x240 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit FloorAdjustViewController() ;

/// @brief Method .ctor addr 0x215b570 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__9_0 addr 0x215b578 size 0x7c virtual false final false
 void _DidActivate_b__9_0() ;

/// @brief Method <DidActivate>b__9_1 addr 0x215b5f4 size 0x7c virtual false final false
 void _DidActivate_b__9_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::FloorAdjustViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloorAdjustViewController, "", "FloorAdjustViewController");
