#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/AccessControl/zzzz__GenericAce_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::AccessControl {
struct AceType;
}
namespace System::Security::Principal {
class SecurityIdentifier;
}
namespace System::Security::AccessControl {
struct AceFlags;
}
// Forward declare root types
namespace System::Security::AccessControl {
class KnownAce;
}
// Type: System.Security.AccessControl::KnownAce
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3031))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3035))
// CS Name: System.Security.AccessControl.KnownAce
class CORDL_TYPE KnownAce : public System::Security::AccessControl::GenericAce {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~KnownAce() = default;

// Ctor Parameters [CppParam { name: "", ty: "KnownAce", modifiers: " const&", def_value: None }]
constexpr KnownAce(KnownAce const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KnownAce", modifiers: "&&", def_value: None }]
constexpr KnownAce(KnownAce&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KnownAce(void* ptr) noexcept : System::Security::AccessControl::GenericAce(ptr) {
}


  constexpr KnownAce& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KnownAce& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KnownAce& operator=(KnownAce&& o) noexcept = default;
  constexpr KnownAce& operator=(KnownAce const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_access_mask, put=__set_access_mask))  access_mask;

constexpr void __set_access_mask(int32_t value) ;

constexpr int32_t __get_access_mask() const;

 System::Security::Principal::SecurityIdentifier __declspec(property(get=__get_identifier, put=__set_identifier))  identifier;

constexpr void __set_identifier(System::Security::Principal::SecurityIdentifier value) ;

constexpr System::Security::Principal::SecurityIdentifier __get_identifier() const;


// Properties

 int32_t __declspec(property(get=get_AccessMask, put=set_AccessMask))  AccessMask;

 System::Security::Principal::SecurityIdentifier __declspec(property(get=get_SecurityIdentifier, put=set_SecurityIdentifier))  SecurityIdentifier;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "System::Security::AccessControl::AceType", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "System::Security::AccessControl::AceFlags", modifiers: "", def_value: None }]
explicit KnownAce(System::Security::AccessControl::AceType type, System::Security::AccessControl::AceFlags flags) ;

/// @brief Method .ctor addr 0x2318c94 size 0x4 virtual false final false
 void _ctor(System::Security::AccessControl::AceType type, System::Security::AccessControl::AceFlags flags) ;

// Ctor Parameters [CppParam { name: "binaryForm", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }]
explicit KnownAce(::ArrayW<uint8_t> binaryForm, int32_t offset) ;

/// @brief Method .ctor addr 0x2318c98 size 0x4 virtual false final false
 void _ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) ;

/// @brief Method get_AccessMask addr 0x2318c9c size 0x8 virtual false final false
 int32_t get_AccessMask() ;

/// @brief Method set_AccessMask addr 0x2318ca4 size 0x8 virtual false final false
 void set_AccessMask(int32_t value) ;

/// @brief Method get_SecurityIdentifier addr 0x2318cac size 0x8 virtual false final false
 System::Security::Principal::SecurityIdentifier get_SecurityIdentifier() ;

/// @brief Method set_SecurityIdentifier addr 0x2318cb4 size 0x8 virtual false final false
 void set_SecurityIdentifier(System::Security::Principal::SecurityIdentifier value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
NEED_NO_BOX(System::Security::AccessControl::KnownAce);
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::KnownAce, "System.Security.AccessControl", "KnownAce");
