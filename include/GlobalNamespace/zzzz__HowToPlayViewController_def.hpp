#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UI {
class Button;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__HowToPlayViewController__HowToPlayOptions;
}
namespace GlobalNamespace {
class HowToPlayViewController;
}
// Type: ::HowToPlayOptions
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5743))
// CS Name: HowToPlayViewController::HowToPlayOptions
struct CORDL_TYPE ____GlobalNamespace__HowToPlayViewController__HowToPlayOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__HowToPlayViewController__HowToPlayOptions(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__HowToPlayViewController__HowToPlayOptions(____GlobalNamespace__HowToPlayViewController__HowToPlayOptions const&) = default;
                    constexpr ____GlobalNamespace__HowToPlayViewController__HowToPlayOptions(____GlobalNamespace__HowToPlayViewController__HowToPlayOptions&&) = default;
                    constexpr ____GlobalNamespace__HowToPlayViewController__HowToPlayOptions& operator=(____GlobalNamespace__HowToPlayViewController__HowToPlayOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__HowToPlayViewController__HowToPlayOptions& operator=(____GlobalNamespace__HowToPlayViewController__HowToPlayOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__HowToPlayViewController__HowToPlayOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__HowToPlayViewController__HowToPlayOptions_Unwrapped : int32_t {
__HowToPlay = 0,
__Credits = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__HowToPlayViewController__HowToPlayOptions_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__HowToPlayViewController__HowToPlayOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HowToPlay offset 0
static ::GlobalNamespace::____GlobalNamespace__HowToPlayViewController__HowToPlayOptions const HowToPlay;

/// @brief Field Credits offset 0
static ::GlobalNamespace::____GlobalNamespace__HowToPlayViewController__HowToPlayOptions const Credits;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HowToPlayViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5744))
// CS Name: HowToPlayViewController
class CORDL_TYPE HowToPlayViewController : public ::HMUI::ViewController {
public:
// Declarations
using HowToPlayOptions = ::GlobalNamespace::____GlobalNamespace__HowToPlayViewController__HowToPlayOptions;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~HowToPlayViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "HowToPlayViewController", modifiers: " const&", def_value: None }]
constexpr HowToPlayViewController(HowToPlayViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HowToPlayViewController", modifiers: "&&", def_value: None }]
constexpr HowToPlayViewController(HowToPlayViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HowToPlayViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr HowToPlayViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HowToPlayViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HowToPlayViewController& operator=(HowToPlayViewController&& o) noexcept = default;
  constexpr HowToPlayViewController& operator=(HowToPlayViewController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Button __declspec(property(get=__get__tutorialButton, put=__set__tutorialButton))  _tutorialButton;

constexpr void __set__tutorialButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__tutorialButton() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__creditsButton, put=__set__creditsButton))  _creditsButton;

constexpr void __set__creditsButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__creditsButton() const;

 ::System::Action_1<::GlobalNamespace::____GlobalNamespace__HowToPlayViewController__HowToPlayOptions> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__HowToPlayViewController__HowToPlayOptions> value) ;

constexpr ::System::Action_1<::GlobalNamespace::____GlobalNamespace__HowToPlayViewController__HowToPlayOptions> __get_didFinishEvent() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x215fd40 size 0xb0 virtual false final false
 void add_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__HowToPlayViewController__HowToPlayOptions> value) ;

/// @brief Method remove_didFinishEvent addr 0x215fdf0 size 0xb0 virtual false final false
 void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__HowToPlayViewController__HowToPlayOptions> value) ;

/// @brief Method Setup addr 0x215fea0 size 0x30 virtual false final false
 void Setup(bool showTutorialButton) ;

/// @brief Method DidActivate addr 0x215fed0 size 0x108 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

// Ctor Parameters []
explicit HowToPlayViewController() ;

/// @brief Method .ctor addr 0x215ffd8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__7_0 addr 0x215ffe0 size 0x20 virtual false final false
 void _DidActivate_b__7_0() ;

/// @brief Method <DidActivate>b__7_1 addr 0x2160000 size 0x20 virtual false final false
 void _DidActivate_b__7_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__HowToPlayViewController__HowToPlayOptions, "", "HowToPlayViewController/HowToPlayOptions");
NEED_NO_BOX(::GlobalNamespace::HowToPlayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HowToPlayViewController, "", "HowToPlayViewController");
