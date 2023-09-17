#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Type: Org.BouncyCastle.Asn1::DerObjectIdentifier
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(350))
// CS Name: Org.BouncyCastle.Asn1.DerObjectIdentifier
class CORDL_TYPE DerObjectIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DerObjectIdentifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerObjectIdentifier", modifiers: " const&", def_value: None }]
constexpr DerObjectIdentifier(DerObjectIdentifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerObjectIdentifier", modifiers: "&&", def_value: None }]
constexpr DerObjectIdentifier(DerObjectIdentifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerObjectIdentifier(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Object(ptr) {
}


  constexpr DerObjectIdentifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerObjectIdentifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerObjectIdentifier& operator=(DerObjectIdentifier&& o) noexcept = default;
  constexpr DerObjectIdentifier& operator=(DerObjectIdentifier const& o) noexcept = default;
                


// Fields

/// @brief Field LONG_LIMIT offset 0
static constexpr int64_t  LONG_LIMIT{72057594037927808};

 ::StringW __declspec(property(get=__get_identifier, put=__set_identifier))  identifier;

constexpr void __set_identifier(::StringW value) ;

constexpr ::StringW __get_identifier() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_body, put=__set_body))  body;

constexpr void __set_body(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_body() const;

static ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier> __declspec(property(get=__get_cache, put=__set_cache))  cache;

static void __set_cache(::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier> value) ;

static ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier> __get_cache() ;


// Properties

 ::StringW __declspec(property(get=get_Id))  Id;


// Methods

/// @brief Method GetInstance addr 0xfe713c size 0x1d8 virtual false final false
static ::Org::BouncyCastle::Asn1::DerObjectIdentifier GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0xffae34 size 0xe8 virtual false final false
static ::Org::BouncyCastle::Asn1::DerObjectIdentifier GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

// Ctor Parameters [CppParam { name: "identifier", ty: "::StringW", modifiers: "", def_value: None }]
explicit DerObjectIdentifier(::StringW identifier) ;

/// @brief Method .ctor addr 0xfdd8d8 size 0x138 virtual false final false
 void _ctor(::StringW identifier) ;

// Ctor Parameters [CppParam { name: "oid", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "branchID", ty: "::StringW", modifiers: "", def_value: None }]
explicit DerObjectIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::StringW branchID) ;

/// @brief Method .ctor addr 0xffafd4 size 0x138 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::StringW branchID) ;

/// @brief Method get_Id addr 0xffb1fc size 0x8 virtual false final false
 ::StringW get_Id() ;

/// @brief Method Branch addr 0xffb204 size 0x70 virtual true final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier Branch(::StringW branchID) ;

/// @brief Method On addr 0xffb274 size 0xb0 virtual true final false
 bool On(::Org::BouncyCastle::Asn1::DerObjectIdentifier stem) ;

// Ctor Parameters [CppParam { name: "bytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerObjectIdentifier(::ArrayW<uint8_t> bytes) ;

/// @brief Method .ctor addr 0xffb324 size 0xac virtual false final false
 void _ctor(::ArrayW<uint8_t> bytes) ;

/// @brief Method WriteField addr 0xffb628 size 0xe0 virtual false final false
 void WriteField(::System::IO::Stream outputStream, int64_t fieldValue) ;

/// @brief Method WriteField addr 0xffb708 size 0x17c virtual false final false
 void WriteField(::System::IO::Stream outputStream, ::Org::BouncyCastle::Math::BigInteger fieldValue) ;

/// @brief Method DoOutput addr 0xffb884 size 0x1b4 virtual false final false
 void DoOutput(::System::IO::MemoryStream bOut) ;

/// @brief Method GetBody addr 0xffba38 size 0x114 virtual false final false
 ::ArrayW<uint8_t> GetBody() ;

/// @brief Method Encode addr 0xffbb4c size 0x2c virtual true final false
 void Encode(::Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1GetHashCode addr 0xffbb78 size 0x1c virtual true final false
 int32_t Asn1GetHashCode() ;

/// @brief Method Asn1Equals addr 0xffbb94 size 0xa0 virtual true final false
 bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method ToString addr 0xffbc34 size 0x8 virtual true final false
 ::StringW ToString() ;

/// @brief Method IsValidBranchID addr 0xffb10c size 0xf0 virtual false final false
static bool IsValidBranchID(::StringW branchID, int32_t start) ;

/// @brief Method IsValidIdentifier addr 0xffaf1c size 0xb8 virtual false final false
static bool IsValidIdentifier(::StringW identifier) ;

/// @brief Method MakeOidStringFromBytes addr 0xffb3d0 size 0x258 virtual false final false
static ::StringW MakeOidStringFromBytes(::ArrayW<uint8_t> bytes) ;

/// @brief Method FromOctetString addr 0xffabfc size 0x238 virtual false final false
static ::Org::BouncyCastle::Asn1::DerObjectIdentifier FromOctetString(::ArrayW<uint8_t> enc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerObjectIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerObjectIdentifier, "Org.BouncyCastle.Asn1", "DerObjectIdentifier");
