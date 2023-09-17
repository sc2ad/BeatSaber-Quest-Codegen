#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/AccessControl/zzzz__KnownAce_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Security::AccessControl {
struct AceType;
}
namespace System::Security::AccessControl {
struct AceFlags;
}
namespace System::Security::AccessControl {
struct AceQualifier;
}
// Forward declare root types
namespace System::Security::AccessControl {
class QualifiedAce;
}
// Type: System.Security.AccessControl::QualifiedAce
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3035))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3042))
// CS Name: System.Security.AccessControl.QualifiedAce
class CORDL_TYPE QualifiedAce : public ::System::Security::AccessControl::KnownAce {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~QualifiedAce() = default;

// Ctor Parameters [CppParam { name: "", ty: "QualifiedAce", modifiers: " const&", def_value: None }]
constexpr QualifiedAce(QualifiedAce const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QualifiedAce", modifiers: "&&", def_value: None }]
constexpr QualifiedAce(QualifiedAce&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QualifiedAce(void* ptr) noexcept : ::System::Security::AccessControl::KnownAce(ptr) {
}


  constexpr QualifiedAce& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QualifiedAce& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QualifiedAce& operator=(QualifiedAce&& o) noexcept = default;
  constexpr QualifiedAce& operator=(QualifiedAce const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_opaque, put=__set_opaque))  opaque;

constexpr void __set_opaque(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_opaque() const;


// Properties

 ::System::Security::AccessControl::AceQualifier __declspec(property(get=get_AceQualifier))  AceQualifier;

 bool __declspec(property(get=get_IsCallback))  IsCallback;

 int32_t __declspec(property(get=get_OpaqueLength))  OpaqueLength;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "::System::Security::AccessControl::AceType", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::System::Security::AccessControl::AceFlags", modifiers: "", def_value: None }, CppParam { name: "opaque", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit QualifiedAce(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags, ::ArrayW<uint8_t> opaque) ;

/// @brief Method .ctor addr 0x2315964 size 0x28 virtual false final false
 void _ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags, ::ArrayW<uint8_t> opaque) ;

// Ctor Parameters [CppParam { name: "binaryForm", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }]
explicit QualifiedAce(::ArrayW<uint8_t> binaryForm, int32_t offset) ;

/// @brief Method .ctor addr 0x2315b7c size 0x4 virtual false final false
 void _ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) ;

/// @brief Method get_AceQualifier addr 0x2316978 size 0xbc virtual false final false
 ::System::Security::AccessControl::AceQualifier get_AceQualifier() ;

/// @brief Method get_IsCallback addr 0x231719c size 0x3c virtual false final false
 bool get_IsCallback() ;

/// @brief Method get_OpaqueLength addr 0x2315d14 size 0x18 virtual false final false
 int32_t get_OpaqueLength() ;

/// @brief Method GetOpaque addr 0x2315ed8 size 0x74 virtual false final false
 ::ArrayW<uint8_t> GetOpaque() ;

/// @brief Method SetOpaque addr 0x2315c34 size 0xa8 virtual false final false
 void SetOpaque(::ArrayW<uint8_t> opaque) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
} // end anonymous namespace
NEED_NO_BOX(::System::Security::AccessControl::QualifiedAce);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::QualifiedAce, "System.Security.AccessControl", "QualifiedAce");
