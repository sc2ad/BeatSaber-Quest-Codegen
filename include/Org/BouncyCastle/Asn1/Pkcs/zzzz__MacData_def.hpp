#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class DigestInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class MacData;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::MacData
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(239))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.MacData
class CORDL_TYPE MacData : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MacData() = default;

// Ctor Parameters [CppParam { name: "", ty: "MacData", modifiers: " const&", def_value: None }]
constexpr MacData(MacData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MacData", modifiers: "&&", def_value: None }]
constexpr MacData(MacData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MacData(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr MacData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MacData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MacData& operator=(MacData&& o) noexcept = default;
  constexpr MacData& operator=(MacData const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::DigestInfo __declspec(property(get=__get_digInfo, put=__set_digInfo))  digInfo;

constexpr void __set_digInfo(Org::BouncyCastle::Asn1::X509::DigestInfo value) ;

constexpr Org::BouncyCastle::Asn1::X509::DigestInfo __get_digInfo() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_salt, put=__set_salt))  salt;

constexpr void __set_salt(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_salt() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_iterationCount, put=__set_iterationCount))  iterationCount;

constexpr void __set_iterationCount(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_iterationCount() const;


// Properties

 Org::BouncyCastle::Asn1::X509::DigestInfo __declspec(property(get=get_Mac))  Mac;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_IterationCount))  IterationCount;


// Methods

/// @brief Method GetInstance addr 0xefad64 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::MacData GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit MacData(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xefaeec size 0x1ac virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "digInfo", ty: "Org::BouncyCastle::Asn1::X509::DigestInfo", modifiers: "", def_value: None }, CppParam { name: "salt", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "iterationCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit MacData(Org::BouncyCastle::Asn1::X509::DigestInfo digInfo, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

/// @brief Method .ctor addr 0xefb098 size 0xec virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::DigestInfo digInfo, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

/// @brief Method get_Mac addr 0xefb184 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::DigestInfo get_Mac() ;

/// @brief Method GetSalt addr 0xefb18c size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetSalt() ;

/// @brief Method get_IterationCount addr 0xefb204 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_IterationCount() ;

/// @brief Method ToAsn1Object addr 0xefb20c size 0x1e4 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::MacData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::MacData, "Org.BouncyCastle.Asn1.Pkcs", "MacData");
