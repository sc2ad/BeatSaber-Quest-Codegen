#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__SettingsNavigationController__FinishAction;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__SettingsNavigationController__FinishAction;
}
namespace GlobalNamespace {
class SettingsNavigationController;
}
// Type: ::FinishAction
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5847))
// CS Name: SettingsNavigationController::FinishAction
struct CORDL_TYPE GlobalNamespace__SettingsNavigationController__FinishAction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SettingsNavigationController__FinishAction(int32_t value__) noexcept;


                    constexpr GlobalNamespace__SettingsNavigationController__FinishAction(GlobalNamespace__SettingsNavigationController__FinishAction const&) = default;
                    constexpr GlobalNamespace__SettingsNavigationController__FinishAction(GlobalNamespace__SettingsNavigationController__FinishAction&&) = default;
                    constexpr GlobalNamespace__SettingsNavigationController__FinishAction& operator=(GlobalNamespace__SettingsNavigationController__FinishAction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SettingsNavigationController__FinishAction& operator=(GlobalNamespace__SettingsNavigationController__FinishAction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SettingsNavigationController__FinishAction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__SettingsNavigationController__FinishAction_Unwrapped : int32_t {
__Ok = 0,
__Cancel = 1,
__Apply = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__SettingsNavigationController__FinishAction_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__SettingsNavigationController__FinishAction_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Ok offset 0
static GlobalNamespace::GlobalNamespace__SettingsNavigationController__FinishAction const Ok;

/// @brief Field Cancel offset 0
static GlobalNamespace::GlobalNamespace__SettingsNavigationController__FinishAction const Cancel;

/// @brief Field Apply offset 0
static GlobalNamespace::GlobalNamespace__SettingsNavigationController__FinishAction const Apply;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SettingsNavigationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13639))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5848))
// CS Name: SettingsNavigationController
class CORDL_TYPE SettingsNavigationController : public HMUI::NavigationController {
public:
// Declarations
using FinishAction = GlobalNamespace::GlobalNamespace__SettingsNavigationController__FinishAction;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~SettingsNavigationController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SettingsNavigationController", modifiers: " const&", def_value: None }]
constexpr SettingsNavigationController(SettingsNavigationController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SettingsNavigationController", modifiers: "&&", def_value: None }]
constexpr SettingsNavigationController(SettingsNavigationController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SettingsNavigationController(void* ptr) noexcept : HMUI::NavigationController(ptr) {
}


  constexpr SettingsNavigationController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SettingsNavigationController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SettingsNavigationController& operator=(SettingsNavigationController&& o) noexcept = default;
  constexpr SettingsNavigationController& operator=(SettingsNavigationController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__okButton, put=__set__okButton))  _okButton;

constexpr void __set__okButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__okButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__applyButton, put=__set__applyButton))  _applyButton;

constexpr void __set__applyButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__applyButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__cancelButton, put=__set__cancelButton))  _cancelButton;

constexpr void __set__cancelButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__cancelButton() const;

 System::Action_1<GlobalNamespace::GlobalNamespace__SettingsNavigationController__FinishAction> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_1<GlobalNamespace::GlobalNamespace__SettingsNavigationController__FinishAction> value) ;

constexpr System::Action_1<GlobalNamespace::GlobalNamespace__SettingsNavigationController__FinishAction> __get_didFinishEvent() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x218176c size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_1<GlobalNamespace::GlobalNamespace__SettingsNavigationController__FinishAction> value) ;

/// @brief Method remove_didFinishEvent addr 0x218181c size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_1<GlobalNamespace::GlobalNamespace__SettingsNavigationController__FinishAction> value) ;

/// @brief Method DidActivate addr 0x21818cc size 0x15c virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method HandleFinishButton addr 0x2181a28 size 0x1c virtual false final false
 void HandleFinishButton(GlobalNamespace::GlobalNamespace__SettingsNavigationController__FinishAction finishAction) ;

static GlobalNamespace::SettingsNavigationController New_ctor() ;

/// @brief Method .ctor addr 0x2181a44 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__7_0 addr 0x2181a4c size 0x20 virtual false final false
 void _DidActivate_b__7_0() ;

/// @brief Method <DidActivate>b__7_1 addr 0x2181a6c size 0x20 virtual false final false
 void _DidActivate_b__7_1() ;

/// @brief Method <DidActivate>b__7_2 addr 0x2181a8c size 0x20 virtual false final false
 void _DidActivate_b__7_2() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SettingsNavigationController__FinishAction, "", "SettingsNavigationController/FinishAction");
NEED_NO_BOX(GlobalNamespace::SettingsNavigationController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SettingsNavigationController, "", "SettingsNavigationController");
