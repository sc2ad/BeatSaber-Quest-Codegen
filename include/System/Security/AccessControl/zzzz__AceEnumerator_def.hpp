#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Security::AccessControl {
class GenericAcl;
}
namespace System::Security::AccessControl {
class GenericAce;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Security::AccessControl {
class AceEnumerator;
}
// Type: System.Security.AccessControl::AceEnumerator
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3012))
// CS Name: System.Security.AccessControl.AceEnumerator
class CORDL_TYPE AceEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AceEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "AceEnumerator", modifiers: " const&", def_value: None }]
constexpr AceEnumerator(AceEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AceEnumerator", modifiers: "&&", def_value: None }]
constexpr AceEnumerator(AceEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AceEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AceEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AceEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AceEnumerator& operator=(AceEnumerator&& o) noexcept = default;
  constexpr AceEnumerator& operator=(AceEnumerator const& o) noexcept = default;
                


// Fields

 ::System::Security::AccessControl::GenericAcl __declspec(property(get=__get_owner, put=__set_owner))  owner;

constexpr void __set_owner(::System::Security::AccessControl::GenericAcl value) ;

constexpr ::System::Security::AccessControl::GenericAcl __get_owner() const;

 int32_t __declspec(property(get=__get_current, put=__set_current))  current;

constexpr void __set_current(int32_t value) ;

constexpr int32_t __get_current() const;


// Properties

 ::System::Security::AccessControl::GenericAce __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "owner", ty: "::System::Security::AccessControl::GenericAcl", modifiers: "", def_value: None }]
explicit AceEnumerator(::System::Security::AccessControl::GenericAcl owner) ;

/// @brief Method .ctor addr 0x23156d8 size 0x30 virtual false final false
 void _ctor(::System::Security::AccessControl::GenericAcl owner) ;

/// @brief Method get_Current addr 0x2315708 size 0x34 virtual false final false
 ::System::Security::AccessControl::GenericAce get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x231573c size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x2315740 size 0x58 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x2315798 size 0xc virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
} // end anonymous namespace
NEED_NO_BOX(::System::Security::AccessControl::AceEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AceEnumerator, "System.Security.AccessControl", "AceEnumerator");
