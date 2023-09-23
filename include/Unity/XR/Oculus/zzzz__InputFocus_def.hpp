#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Action;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class InputFocus;
}
// Type: Unity.XR.Oculus::InputFocus
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15215))
// CS Name: Unity.XR.Oculus.InputFocus
class CORDL_TYPE InputFocus : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputFocus() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputFocus", modifiers: " const&", def_value: None }]
constexpr InputFocus(InputFocus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputFocus", modifiers: "&&", def_value: None }]
constexpr InputFocus(InputFocus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputFocus(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputFocus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputFocus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputFocus& operator=(InputFocus&& o) noexcept = default;
  constexpr InputFocus& operator=(InputFocus const& o) noexcept = default;
                


// Fields

static System::Action __declspec(property(get=__get_InputFocusAcquired, put=__set_InputFocusAcquired))  InputFocusAcquired;

static void __set_InputFocusAcquired(System::Action value) ;

static System::Action __get_InputFocusAcquired() ;

static System::Action __declspec(property(get=__get_InputFocusLost, put=__set_InputFocusLost))  InputFocusLost;

static void __set_InputFocusLost(System::Action value) ;

static System::Action __get_InputFocusLost() ;

static bool __declspec(property(get=__get_hadInputFocus, put=__set_hadInputFocus))  hadInputFocus;

static void __set_hadInputFocus(bool value) ;

static bool __get_hadInputFocus() ;


// Properties

static bool __declspec(property(get=get_hasInputFocus))  hasInputFocus;


// Methods

/// @brief Method add_InputFocusAcquired addr 0x2ade92c size 0xb8 virtual false final false
static void add_InputFocusAcquired(System::Action value) ;

/// @brief Method remove_InputFocusAcquired addr 0x2ade9e4 size 0xb8 virtual false final false
static void remove_InputFocusAcquired(System::Action value) ;

/// @brief Method add_InputFocusLost addr 0x2adea9c size 0xbc virtual false final false
static void add_InputFocusLost(System::Action value) ;

/// @brief Method remove_InputFocusLost addr 0x2adeb58 size 0xbc virtual false final false
static void remove_InputFocusLost(System::Action value) ;

/// @brief Method get_hasInputFocus addr 0x2adec14 size 0x4 virtual false final false
static bool get_hasInputFocus() ;

/// @brief Method Update addr 0x2adec1c size 0xa0 virtual false final false
static void Update() ;

// Ctor Parameters []
explicit InputFocus() ;

/// @brief Method .ctor addr 0x2adecbc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
NEED_NO_BOX(Unity::XR::Oculus::InputFocus);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::InputFocus, "Unity.XR.Oculus", "InputFocus");
