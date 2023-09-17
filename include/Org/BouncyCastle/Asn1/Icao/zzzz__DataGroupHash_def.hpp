#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Icao {
class DataGroupHash;
}
// Type: Org.BouncyCastle.Asn1.Icao::DataGroupHash
namespace Org::BouncyCastle::Asn1::Icao {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(175))
// CS Name: Org.BouncyCastle.Asn1.Icao.DataGroupHash
class CORDL_TYPE DataGroupHash : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DataGroupHash() = default;

// Ctor Parameters [CppParam { name: "", ty: "DataGroupHash", modifiers: " const&", def_value: None }]
constexpr DataGroupHash(DataGroupHash const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DataGroupHash", modifiers: "&&", def_value: None }]
constexpr DataGroupHash(DataGroupHash&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DataGroupHash(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr DataGroupHash& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DataGroupHash& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DataGroupHash& operator=(DataGroupHash&& o) noexcept = default;
  constexpr DataGroupHash& operator=(DataGroupHash const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_dataGroupNumber, put=__set_dataGroupNumber))  dataGroupNumber;

constexpr void __set_dataGroupNumber(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_dataGroupNumber() const;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_dataGroupHashValue, put=__set_dataGroupHashValue))  dataGroupHashValue;

constexpr void __set_dataGroupHashValue(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_dataGroupHashValue() const;


// Properties

 int32_t __declspec(property(get=get_DataGroupNumber))  DataGroupNumber;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_DataGroupHashValue))  DataGroupHashValue;


// Methods

/// @brief Method GetInstance addr 0xee66a4 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::Icao::DataGroupHash GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit DataGroupHash(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xee6748 size 0xe8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "dataGroupNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dataGroupHashValue", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit DataGroupHash(int32_t dataGroupNumber, ::Org::BouncyCastle::Asn1::Asn1OctetString dataGroupHashValue) ;

/// @brief Method .ctor addr 0xee6830 size 0x80 virtual false final false
 void _ctor(int32_t dataGroupNumber, ::Org::BouncyCastle::Asn1::Asn1OctetString dataGroupHashValue) ;

/// @brief Method get_DataGroupNumber addr 0xee68b0 size 0x1c virtual false final false
 int32_t get_DataGroupNumber() ;

/// @brief Method get_DataGroupHashValue addr 0xee68cc size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1OctetString get_DataGroupHashValue() ;

/// @brief Method ToAsn1Object addr 0xee68d4 size 0xf0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Icao
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Icao::DataGroupHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Icao::DataGroupHash, "Org.BouncyCastle.Asn1.Icao", "DataGroupHash");
