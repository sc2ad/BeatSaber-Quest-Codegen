#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System {
class CompatibilitySwitches;
}
// Type: System::CompatibilitySwitches
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2575))
// CS Name: System.CompatibilitySwitches
class CORDL_TYPE CompatibilitySwitches : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CompatibilitySwitches() = default;

// Ctor Parameters [CppParam { name: "", ty: "CompatibilitySwitches", modifiers: " const&", def_value: None }]
constexpr CompatibilitySwitches(CompatibilitySwitches const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CompatibilitySwitches", modifiers: "&&", def_value: None }]
constexpr CompatibilitySwitches(CompatibilitySwitches&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CompatibilitySwitches(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CompatibilitySwitches& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CompatibilitySwitches& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CompatibilitySwitches& operator=(CompatibilitySwitches&& o) noexcept = default;
  constexpr CompatibilitySwitches& operator=(CompatibilitySwitches const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_IsAppEarlierThanWindowsPhone8, put=__set_IsAppEarlierThanWindowsPhone8))  IsAppEarlierThanWindowsPhone8;

static void __set_IsAppEarlierThanWindowsPhone8(bool value) ;

static bool __get_IsAppEarlierThanWindowsPhone8() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::CompatibilitySwitches);
DEFINE_IL2CPP_ARG_TYPE(System::CompatibilitySwitches, "System", "CompatibilitySwitches");
