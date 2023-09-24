#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/AccessControl/zzzz__QualifiedAce_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::AccessControl {
struct AceFlags;
}
namespace System::Security::AccessControl {
struct AceQualifier;
}
namespace System::Security::AccessControl {
struct AceType;
}
namespace System::Security::Principal {
class SecurityIdentifier;
}
// Forward declare root types
namespace System::Security::AccessControl {
class CommonAce;
}
// Type: System.Security.AccessControl::CommonAce
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3042))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3019))
// CS Name: System.Security.AccessControl.CommonAce
class CORDL_TYPE CommonAce : public System::Security::AccessControl::QualifiedAce {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CommonAce() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommonAce", modifiers: " const&", def_value: None }]
constexpr CommonAce(CommonAce const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommonAce", modifiers: "&&", def_value: None }]
constexpr CommonAce(CommonAce&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommonAce(void* ptr) noexcept : System::Security::AccessControl::QualifiedAce(ptr) {
}


  constexpr CommonAce& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommonAce& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommonAce& operator=(CommonAce&& o) noexcept = default;
  constexpr CommonAce& operator=(CommonAce const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_BinaryLength))  BinaryLength;


// Methods

static System::Security::AccessControl::CommonAce New_ctor(System::Security::AccessControl::AceFlags flags, System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask, System::Security::Principal::SecurityIdentifier sid, bool isCallback, ::ArrayW<uint8_t> opaque) ;

/// @brief Method .ctor addr 0x23157f4 size 0x60 virtual false final false
 void _ctor(System::Security::AccessControl::AceFlags flags, System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask, System::Security::Principal::SecurityIdentifier sid, bool isCallback, ::ArrayW<uint8_t> opaque) ;

static System::Security::AccessControl::CommonAce New_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) ;

/// @brief Method .ctor addr 0x231598c size 0x1f0 virtual false final false
 void _ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) ;

/// @brief Method get_BinaryLength addr 0x2315cdc size 0x38 virtual true final false
 int32_t get_BinaryLength() ;

/// @brief Method GetBinaryForm addr 0x2315d2c size 0xe4 virtual true final false
 void GetBinaryForm(::ArrayW<uint8_t> binaryForm, int32_t offset) ;

/// @brief Method ConvertType addr 0x2315854 size 0x110 virtual false final false
static System::Security::AccessControl::AceType ConvertType(System::Security::AccessControl::AceQualifier qualifier, bool isCallback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
NEED_NO_BOX(System::Security::AccessControl::CommonAce);
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::CommonAce, "System.Security.AccessControl", "CommonAce");
