#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System {
class LocalAppContextSwitches;
}
// Type: System::LocalAppContextSwitches
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7743))
// CS Name: System.LocalAppContextSwitches
class CORDL_TYPE LocalAppContextSwitches : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LocalAppContextSwitches() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalAppContextSwitches", modifiers: " const&", def_value: None }]
constexpr LocalAppContextSwitches(LocalAppContextSwitches const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalAppContextSwitches", modifiers: "&&", def_value: None }]
constexpr LocalAppContextSwitches(LocalAppContextSwitches&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalAppContextSwitches(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LocalAppContextSwitches& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalAppContextSwitches& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalAppContextSwitches& operator=(LocalAppContextSwitches&& o) noexcept = default;
  constexpr LocalAppContextSwitches& operator=(LocalAppContextSwitches const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_MemberDescriptorEqualsReturnsFalseIfEquivalent, put=__set_MemberDescriptorEqualsReturnsFalseIfEquivalent))  MemberDescriptorEqualsReturnsFalseIfEquivalent;

static void __set_MemberDescriptorEqualsReturnsFalseIfEquivalent(bool value) ;

static bool __get_MemberDescriptorEqualsReturnsFalseIfEquivalent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::LocalAppContextSwitches);
DEFINE_IL2CPP_ARG_TYPE(System::LocalAppContextSwitches, "System", "LocalAppContextSwitches");
