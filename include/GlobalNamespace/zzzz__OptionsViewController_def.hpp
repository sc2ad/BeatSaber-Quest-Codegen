#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__OptionsViewController__OptionsButton;
}
namespace GlobalNamespace {
class OptionsViewController;
}
// Type: ::OptionsButton
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5821))
// CS Name: OptionsViewController::OptionsButton
struct CORDL_TYPE ____GlobalNamespace__OptionsViewController__OptionsButton : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OptionsViewController__OptionsButton(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__OptionsViewController__OptionsButton(____GlobalNamespace__OptionsViewController__OptionsButton const&) = default;
                    constexpr ____GlobalNamespace__OptionsViewController__OptionsButton(____GlobalNamespace__OptionsViewController__OptionsButton&&) = default;
                    constexpr ____GlobalNamespace__OptionsViewController__OptionsButton& operator=(____GlobalNamespace__OptionsViewController__OptionsButton const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OptionsViewController__OptionsButton& operator=(____GlobalNamespace__OptionsViewController__OptionsButton&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OptionsViewController__OptionsButton(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__OptionsViewController__OptionsButton_Unwrapped : int32_t {
__EditAvatar = 0,
__PlayerOptions = 1,
__Settings = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__OptionsViewController__OptionsButton_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__OptionsViewController__OptionsButton_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field EditAvatar offset 0
static ::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton const EditAvatar;

/// @brief Field PlayerOptions offset 0
static ::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton const PlayerOptions;

/// @brief Field Settings offset 0
static ::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton const Settings;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OptionsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5822))
// CS Name: OptionsViewController
class CORDL_TYPE OptionsViewController : public ::HMUI::ViewController {
public:
// Declarations
using OptionsButton = ::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~OptionsViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "OptionsViewController", modifiers: " const&", def_value: None }]
constexpr OptionsViewController(OptionsViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OptionsViewController", modifiers: "&&", def_value: None }]
constexpr OptionsViewController(OptionsViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OptionsViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr OptionsViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OptionsViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OptionsViewController& operator=(OptionsViewController&& o) noexcept = default;
  constexpr OptionsViewController& operator=(OptionsViewController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Button __declspec(property(get=__get__editAvatarButton, put=__set__editAvatarButton))  _editAvatarButton;

constexpr void __set__editAvatarButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__editAvatarButton() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__playerOptionsButton, put=__set__playerOptionsButton))  _playerOptionsButton;

constexpr void __set__playerOptionsButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__playerOptionsButton() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__settingsButton, put=__set__settingsButton))  _settingsButton;

constexpr void __set__settingsButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__settingsButton() const;

 ::GlobalNamespace::AppStaticSettingsSO __declspec(property(get=__get__appStaticSettings, put=__set__appStaticSettings))  _appStaticSettings;

constexpr void __set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO value) ;

constexpr ::GlobalNamespace::AppStaticSettingsSO __get__appStaticSettings() const;

 ::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton> value) ;

constexpr ::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton> __get_didFinishEvent() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x217bb7c size 0xb0 virtual false final false
 void add_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton> value) ;

/// @brief Method remove_didFinishEvent addr 0x217bc2c size 0xb0 virtual false final false
 void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton> value) ;

/// @brief Method DidActivate addr 0x217bcdc size 0x190 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

// Ctor Parameters []
explicit OptionsViewController() ;

/// @brief Method .ctor addr 0x217be6c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__8_0 addr 0x217be74 size 0x20 virtual false final false
 void _DidActivate_b__8_0() ;

/// @brief Method <DidActivate>b__8_1 addr 0x217be94 size 0x20 virtual false final false
 void _DidActivate_b__8_1() ;

/// @brief Method <DidActivate>b__8_2 addr 0x217beb4 size 0x20 virtual false final false
 void _DidActivate_b__8_2() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OptionsViewController__OptionsButton, "", "OptionsViewController/OptionsButton");
NEED_NO_BOX(::GlobalNamespace::OptionsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OptionsViewController, "", "OptionsViewController");
