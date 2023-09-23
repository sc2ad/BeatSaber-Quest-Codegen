#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Generator_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerGenerator;
}
// Type: Org.BouncyCastle.Asn1::BerGenerator
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(451))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(476))
// CS Name: Org.BouncyCastle.Asn1.BerGenerator
class CORDL_TYPE BerGenerator : public Org::BouncyCastle::Asn1::Asn1Generator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BerGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "BerGenerator", modifiers: " const&", def_value: None }]
constexpr BerGenerator(BerGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BerGenerator", modifiers: "&&", def_value: None }]
constexpr BerGenerator(BerGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BerGenerator(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Generator(ptr) {
}


  constexpr BerGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BerGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BerGenerator& operator=(BerGenerator&& o) noexcept = default;
  constexpr BerGenerator& operator=(BerGenerator const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__tagged, put=__set__tagged))  _tagged;

constexpr void __set__tagged(bool value) ;

constexpr bool __get__tagged() const;

 bool __declspec(property(get=__get__isExplicit, put=__set__isExplicit))  _isExplicit;

constexpr void __set__isExplicit(bool value) ;

constexpr bool __get__isExplicit() const;

 int32_t __declspec(property(get=__get__tagNo, put=__set__tagNo))  _tagNo;

constexpr void __set__tagNo(int32_t value) ;

constexpr int32_t __get__tagNo() const;


// Methods

// Ctor Parameters [CppParam { name: "outStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit BerGenerator(System::IO::Stream outStream) ;

/// @brief Method .ctor addr 0x1130c80 size 0x2c virtual false final false
 void _ctor(System::IO::Stream outStream) ;

// Ctor Parameters [CppParam { name: "outStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isExplicit", ty: "bool", modifiers: "", def_value: None }]
explicit BerGenerator(System::IO::Stream outStream, int32_t tagNo, bool isExplicit) ;

/// @brief Method .ctor addr 0x1130cac size 0x4c virtual false final false
 void _ctor(System::IO::Stream outStream, int32_t tagNo, bool isExplicit) ;

/// @brief Method AddObject addr 0x1130cf8 size 0x80 virtual true final false
 void AddObject(Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method GetRawOutputStream addr 0x1130d7c size 0x8 virtual true final false
 System::IO::Stream GetRawOutputStream() ;

/// @brief Method Close addr 0x1130d84 size 0x4 virtual true final false
 void Close() ;

/// @brief Method WriteHdr addr 0x1130e20 size 0x44 virtual false final false
 void WriteHdr(int32_t tag) ;

/// @brief Method WriteBerHeader addr 0x1130e64 size 0x58 virtual false final false
 void WriteBerHeader(int32_t tag) ;

/// @brief Method WriteBerBody addr 0x1130ebc size 0x14 virtual false final false
 void WriteBerBody(System::IO::Stream contentStream) ;

/// @brief Method WriteBerEnd addr 0x1130d88 size 0x98 virtual false final false
 void WriteBerEnd() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::BerGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerGenerator, "Org.BouncyCastle.Asn1", "BerGenerator");
