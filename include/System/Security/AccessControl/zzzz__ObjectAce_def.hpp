#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/AccessControl/zzzz__QualifiedAce_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::AccessControl {
struct AceType;
}
namespace System::Security::AccessControl {
struct AceQualifier;
}
namespace System::Security::Principal {
class SecurityIdentifier;
}
namespace System::Security::AccessControl {
struct AceFlags;
}
namespace System {
struct Guid;
}
namespace System::Security::AccessControl {
struct ObjectAceFlags;
}
// Forward declare root types
namespace System::Security::AccessControl {
class ObjectAce;
}
// Type: System.Security.AccessControl::ObjectAce
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3042))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3038))
// CS Name: System.Security.AccessControl.ObjectAce
class CORDL_TYPE ObjectAce : public System::Security::AccessControl::QualifiedAce {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ObjectAce() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectAce", modifiers: " const&", def_value: None }]
constexpr ObjectAce(ObjectAce const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectAce", modifiers: "&&", def_value: None }]
constexpr ObjectAce(ObjectAce&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectAce(void* ptr) noexcept : System::Security::AccessControl::QualifiedAce(ptr) {
}


  constexpr ObjectAce& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectAce& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectAce& operator=(ObjectAce&& o) noexcept = default;
  constexpr ObjectAce& operator=(ObjectAce const& o) noexcept = default;
                


// Fields

 System::Guid __declspec(property(get=__get_object_ace_type, put=__set_object_ace_type))  object_ace_type;

constexpr void __set_object_ace_type(System::Guid value) ;

constexpr System::Guid __get_object_ace_type() const;

 System::Guid __declspec(property(get=__get_inherited_object_type, put=__set_inherited_object_type))  inherited_object_type;

constexpr void __set_inherited_object_type(System::Guid value) ;

constexpr System::Guid __get_inherited_object_type() const;

 System::Security::AccessControl::ObjectAceFlags __declspec(property(get=__get_object_ace_flags, put=__set_object_ace_flags))  object_ace_flags;

constexpr void __set_object_ace_flags(System::Security::AccessControl::ObjectAceFlags value) ;

constexpr System::Security::AccessControl::ObjectAceFlags __get_object_ace_flags() const;


// Properties

 int32_t __declspec(property(get=get_BinaryLength))  BinaryLength;

 System::Guid __declspec(property(get=get_InheritedObjectAceType, put=set_InheritedObjectAceType))  InheritedObjectAceType;

 bool __declspec(property(get=get_InheritedObjectAceTypePresent))  InheritedObjectAceTypePresent;

 System::Security::AccessControl::ObjectAceFlags __declspec(property(get=get_ObjectAceFlags, put=set_ObjectAceFlags))  ObjectAceFlags;

 System::Guid __declspec(property(get=get_ObjectAceType, put=set_ObjectAceType))  ObjectAceType;

 bool __declspec(property(get=get_ObjectAceTypePresent))  ObjectAceTypePresent;


// Methods

static System::Security::AccessControl::ObjectAce New_ctor(System::Security::AccessControl::AceFlags aceFlags, System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask, System::Security::Principal::SecurityIdentifier sid, System::Security::AccessControl::ObjectAceFlags flags, System::Guid type, System::Guid inheritedType, bool isCallback, ::ArrayW<uint8_t> opaque) ;

/// @brief Method .ctor addr 0x2317270 size 0x98 virtual false final false
 void _ctor(System::Security::AccessControl::AceFlags aceFlags, System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask, System::Security::Principal::SecurityIdentifier sid, System::Security::AccessControl::ObjectAceFlags flags, System::Guid type, System::Guid inheritedType, bool isCallback, ::ArrayW<uint8_t> opaque) ;

static System::Security::AccessControl::ObjectAce New_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) ;

/// @brief Method .ctor addr 0x2318670 size 0x264 virtual false final false
 void _ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) ;

/// @brief Method get_BinaryLength addr 0x2319348 size 0x54 virtual true final false
 int32_t get_BinaryLength() ;

/// @brief Method get_InheritedObjectAceType addr 0x231939c size 0xc virtual false final false
 System::Guid get_InheritedObjectAceType() ;

/// @brief Method set_InheritedObjectAceType addr 0x23193a8 size 0x8 virtual false final false
 void set_InheritedObjectAceType(System::Guid value) ;

/// @brief Method get_InheritedObjectAceTypePresent addr 0x23192a4 size 0xc virtual false final false
 bool get_InheritedObjectAceTypePresent() ;

/// @brief Method get_ObjectAceFlags addr 0x23193b0 size 0x8 virtual false final false
 System::Security::AccessControl::ObjectAceFlags get_ObjectAceFlags() ;

/// @brief Method set_ObjectAceFlags addr 0x23193b8 size 0x8 virtual false final false
 void set_ObjectAceFlags(System::Security::AccessControl::ObjectAceFlags value) ;

/// @brief Method get_ObjectAceType addr 0x23193c0 size 0xc virtual false final false
 System::Guid get_ObjectAceType() ;

/// @brief Method set_ObjectAceType addr 0x23193cc size 0x8 virtual false final false
 void set_ObjectAceType(System::Guid value) ;

/// @brief Method get_ObjectAceTypePresent addr 0x2319298 size 0xc virtual false final false
 bool get_ObjectAceTypePresent() ;

/// @brief Method GetBinaryForm addr 0x23193d4 size 0x16c virtual true final false
 void GetBinaryForm(::ArrayW<uint8_t> binaryForm, int32_t offset) ;

/// @brief Method ConvertType addr 0x2319188 size 0x110 virtual false final false
static System::Security::AccessControl::AceType ConvertType(System::Security::AccessControl::AceQualifier qualifier, bool isCallback) ;

/// @brief Method WriteGuid addr 0x2319540 size 0x4c virtual false final false
 void WriteGuid(System::Guid val, ::ArrayW<uint8_t> buffer, int32_t offset) ;

/// @brief Method ReadGuid addr 0x23192b0 size 0x98 virtual false final false
 System::Guid ReadGuid(::ArrayW<uint8_t> buffer, int32_t offset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
NEED_NO_BOX(System::Security::AccessControl::ObjectAce);
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::ObjectAce, "System.Security.AccessControl", "ObjectAce");
