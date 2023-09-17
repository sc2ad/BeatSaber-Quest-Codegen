#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class Type;
}
namespace System::Security::Principal {
class IdentityReference;
}
// Forward declare root types
namespace System::Security::Principal {
class SecurityIdentifier;
}
// Type: System.Security.Principal::SecurityIdentifier
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2996))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2998))
// CS Name: System.Security.Principal.SecurityIdentifier
class CORDL_TYPE SecurityIdentifier : public ::System::Security::Principal::IdentityReference {
public:
// Declarations
/// @brief Convert operator to ::System::IComparable_1<::System::Security::Principal::SecurityIdentifier>
constexpr operator  ::System::IComparable_1<::System::Security::Principal::SecurityIdentifier>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SecurityIdentifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityIdentifier", modifiers: " const&", def_value: None }]
constexpr SecurityIdentifier(SecurityIdentifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityIdentifier", modifiers: "&&", def_value: None }]
constexpr SecurityIdentifier(SecurityIdentifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecurityIdentifier(void* ptr) noexcept : ::System::Security::Principal::IdentityReference(ptr) {
}


  constexpr SecurityIdentifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecurityIdentifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecurityIdentifier& operator=(SecurityIdentifier&& o) noexcept = default;
  constexpr SecurityIdentifier& operator=(SecurityIdentifier const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

static int32_t __declspec(property(get=__get_MaxBinaryLength, put=__set_MaxBinaryLength))  MaxBinaryLength;

static void __set_MaxBinaryLength(int32_t value) ;

static int32_t __get_MaxBinaryLength() ;

static int32_t __declspec(property(get=__get_MinBinaryLength, put=__set_MinBinaryLength))  MinBinaryLength;

static void __set_MinBinaryLength(int32_t value) ;

static int32_t __get_MinBinaryLength() ;


// Properties

 int32_t __declspec(property(get=get_BinaryLength))  BinaryLength;

 ::StringW __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "sddlForm", ty: "::StringW", modifiers: "", def_value: None }]
explicit SecurityIdentifier(::StringW sddlForm) ;

/// @brief Method .ctor addr 0x230c168 size 0xbc virtual false final false
 void _ctor(::StringW sddlForm) ;

// Ctor Parameters [CppParam { name: "binaryForm", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }]
explicit SecurityIdentifier(::ArrayW<uint8_t> binaryForm, int32_t offset) ;

/// @brief Method .ctor addr 0x230c684 size 0xec virtual false final false
 void _ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) ;

/// @brief Method CreateFromBinaryForm addr 0x230c770 size 0x168 virtual false final false
 void CreateFromBinaryForm(::cordl_internals::intptr_t binaryForm, int32_t length) ;

/// @brief Method get_BinaryLength addr 0x230c8d8 size 0x1c virtual false final false
 int32_t get_BinaryLength() ;

/// @brief Method get_Value addr 0x230c8f4 size 0x1bc virtual true final false
 ::StringW get_Value() ;

/// @brief Method GetSidAuthority addr 0x230cab0 size 0x80 virtual false final false
 uint64_t GetSidAuthority() ;

/// @brief Method GetSidSubAuthorityCount addr 0x230cbac size 0x2c virtual false final false
 uint8_t GetSidSubAuthorityCount() ;

/// @brief Method GetSidSubAuthority addr 0x230cb30 size 0x7c virtual false final false
 uint32_t GetSidSubAuthority(uint8_t index) ;

/// @brief Method CompareTo addr 0x230cbd8 size 0x170 virtual true final true
 int32_t CompareTo(::System::Security::Principal::SecurityIdentifier sid) ;

/// @brief Method Equals addr 0x230cdb0 size 0x64 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method Equals addr 0x230ce14 size 0xa8 virtual false final false
 bool Equals(::System::Security::Principal::SecurityIdentifier sid) ;

/// @brief Method GetBinaryForm addr 0x230cebc size 0xc8 virtual false final false
 void GetBinaryForm(::ArrayW<uint8_t> binaryForm, int32_t offset) ;

/// @brief Method GetHashCode addr 0x230cf84 size 0x28 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x230cfac size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method Translate addr 0x230cfb8 size 0x22c virtual true final false
 ::System::Security::Principal::IdentityReference Translate(::System::Type targetType) ;

/// @brief Method op_Equality addr 0x230cd48 size 0x68 virtual false final false
static bool op_Equality(::System::Security::Principal::SecurityIdentifier left, ::System::Security::Principal::SecurityIdentifier right) ;

/// @brief Method ParseSddlForm addr 0x230c224 size 0x460 virtual false final false
static ::ArrayW<uint8_t> ParseSddlForm(::StringW sddlForm) ;

/// @brief Method TryParseAuthority addr 0x230d364 size 0xd8 virtual false final false
static bool TryParseAuthority(::StringW s, ByRef<uint64_t> result) ;

/// @brief Method TryParseSubAuthority addr 0x230d43c size 0xd8 virtual false final false
static bool TryParseSubAuthority(::StringW s, ByRef<uint32_t> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Principal
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Principal::SecurityIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::SecurityIdentifier, "System.Security.Principal", "SecurityIdentifier");
