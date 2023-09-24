#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::AccessControl {
struct AceFlags;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
namespace System::Security::AccessControl {
struct AuditFlags;
}
namespace System::Security::AccessControl {
struct AceType;
}
// Forward declare root types
namespace System::Security::AccessControl {
class GenericAce;
}
// Type: System.Security.AccessControl::GenericAce
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3031))
// CS Name: System.Security.AccessControl.GenericAce
class CORDL_TYPE GenericAce : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GenericAce() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericAce", modifiers: " const&", def_value: None }]
constexpr GenericAce(GenericAce const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericAce", modifiers: "&&", def_value: None }]
constexpr GenericAce(GenericAce&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericAce(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GenericAce& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericAce& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericAce& operator=(GenericAce&& o) noexcept = default;
  constexpr GenericAce& operator=(GenericAce const& o) noexcept = default;
                


// Fields

 System::Security::AccessControl::AceFlags __declspec(property(get=__get_ace_flags, put=__set_ace_flags))  ace_flags;

constexpr void __set_ace_flags(System::Security::AccessControl::AceFlags value) ;

constexpr System::Security::AccessControl::AceFlags __get_ace_flags() const;

 System::Security::AccessControl::AceType __declspec(property(get=__get_ace_type, put=__set_ace_type))  ace_type;

constexpr void __set_ace_type(System::Security::AccessControl::AceType value) ;

constexpr System::Security::AccessControl::AceType __get_ace_type() const;


// Properties

 System::Security::AccessControl::AceFlags __declspec(property(get=get_AceFlags))  AceFlags;

 System::Security::AccessControl::AceType __declspec(property(get=get_AceType))  AceType;

 System::Security::AccessControl::AuditFlags __declspec(property(get=get_AuditFlags))  AuditFlags;

 int32_t __declspec(property(get=get_BinaryLength))  BinaryLength;

 System::Security::AccessControl::InheritanceFlags __declspec(property(get=get_InheritanceFlags))  InheritanceFlags;

 bool __declspec(property(get=get_IsInherited))  IsInherited;

 System::Security::AccessControl::PropagationFlags __declspec(property(get=get_PropagationFlags))  PropagationFlags;


// Methods

static System::Security::AccessControl::GenericAce New_ctor(System::Security::AccessControl::AceType type, System::Security::AccessControl::AceFlags flags) ;

/// @brief Method .ctor addr 0x2318430 size 0x90 virtual false final false
 void _ctor(System::Security::AccessControl::AceType type, System::Security::AccessControl::AceFlags flags) ;

static System::Security::AccessControl::GenericAce New_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) ;

/// @brief Method .ctor addr 0x23184c0 size 0x144 virtual false final false
 void _ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) ;

/// @brief Method get_AceFlags addr 0x2318604 size 0x8 virtual false final false
 System::Security::AccessControl::AceFlags get_AceFlags() ;

/// @brief Method get_AceType addr 0x231860c size 0x8 virtual false final false
 System::Security::AccessControl::AceType get_AceType() ;

/// @brief Method get_AuditFlags addr 0x231833c size 0x1c virtual false final false
 System::Security::AccessControl::AuditFlags get_AuditFlags() ;

/// @brief Method get_BinaryLength addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_BinaryLength() ;

/// @brief Method get_InheritanceFlags addr 0x2318614 size 0x10 virtual false final false
 System::Security::AccessControl::InheritanceFlags get_InheritanceFlags() ;

/// @brief Method get_IsInherited addr 0x231696c size 0xc virtual false final false
 bool get_IsInherited() ;

/// @brief Method get_PropagationFlags addr 0x2318624 size 0xc virtual false final false
 System::Security::AccessControl::PropagationFlags get_PropagationFlags() ;

/// @brief Method CreateFromBinaryForm addr 0x23177d0 size 0x1c8 virtual false final false
static System::Security::AccessControl::GenericAce CreateFromBinaryForm(::ArrayW<uint8_t> binaryForm, int32_t offset) ;

/// @brief Method Equals addr 0x23188d4 size 0x80 virtual true final true
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method GetBinaryForm addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetBinaryForm(::ArrayW<uint8_t> binaryForm, int32_t offset) ;

/// @brief Method GetHashCode addr 0x2318954 size 0xcc virtual true final true
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2316b78 size 0x148 virtual false final false
static bool op_Equality(System::Security::AccessControl::GenericAce left, System::Security::AccessControl::GenericAce right) ;

/// @brief Method op_Inequality addr 0x23167b8 size 0x148 virtual false final false
static bool op_Inequality(System::Security::AccessControl::GenericAce left, System::Security::AccessControl::GenericAce right) ;

/// @brief Method IsObjectType addr 0x2318630 size 0x40 virtual false final false
static bool IsObjectType(System::Security::AccessControl::AceType type) ;

/// @brief Method ReadUShort addr 0x2315b80 size 0x40 virtual false final false
static uint16_t ReadUShort(::ArrayW<uint8_t> buffer, int32_t offset) ;

/// @brief Method ReadInt addr 0x2315bc0 size 0x74 virtual false final false
static int32_t ReadInt(::ArrayW<uint8_t> buffer, int32_t offset) ;

/// @brief Method WriteInt addr 0x2315e58 size 0x80 virtual false final false
static void WriteInt(int32_t val, ::ArrayW<uint8_t> buffer, int32_t offset) ;

/// @brief Method WriteUShort addr 0x2315e10 size 0x48 virtual false final false
static void WriteUShort(uint16_t val, ::ArrayW<uint8_t> buffer, int32_t offset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
NEED_NO_BOX(System::Security::AccessControl::GenericAce);
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::GenericAce, "System.Security.AccessControl", "GenericAce");
