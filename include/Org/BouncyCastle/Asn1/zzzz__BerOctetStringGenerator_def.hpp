#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerOctetStringGenerator;
}
namespace Org::BouncyCastle::Asn1 {
class Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream;
}
// Type: ::BufferedBerOctetStream
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(482))
// CS Name: Org.BouncyCastle.Asn1.BerOctetStringGenerator::BufferedBerOctetStream
class CORDL_TYPE Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream : public Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream(Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream(Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream(void* ptr) noexcept : Org::BouncyCastle::Utilities::IO::BaseOutputStream(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream& operator=(Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream& operator=(Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__buf, put=__set__buf))  _buf;

constexpr void __set__buf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__buf() const;

 int32_t __declspec(property(get=__get__off, put=__set__off))  _off;

constexpr void __set__off(int32_t value) ;

constexpr int32_t __get__off() const;

 Org::BouncyCastle::Asn1::BerOctetStringGenerator __declspec(property(get=__get__gen, put=__set__gen))  _gen;

constexpr void __set__gen(Org::BouncyCastle::Asn1::BerOctetStringGenerator value) ;

constexpr Org::BouncyCastle::Asn1::BerOctetStringGenerator __get__gen() const;

 Org::BouncyCastle::Asn1::DerOutputStream __declspec(property(get=__get__derOut, put=__set__derOut))  _derOut;

constexpr void __set__derOut(Org::BouncyCastle::Asn1::DerOutputStream value) ;

constexpr Org::BouncyCastle::Asn1::DerOutputStream __get__derOut() const;


// Methods

// Ctor Parameters [CppParam { name: "gen", ty: "Org::BouncyCastle::Asn1::BerOctetStringGenerator", modifiers: "", def_value: None }, CppParam { name: "buf", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream(Org::BouncyCastle::Asn1::BerOctetStringGenerator gen, ::ArrayW<uint8_t> buf) ;

/// @brief Method .ctor addr 0x11320bc size 0x8c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::BerOctetStringGenerator gen, ::ArrayW<uint8_t> buf) ;

/// @brief Method WriteByte addr 0x11321a0 size 0x68 virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method Write addr 0x1132208 size 0x120 virtual true final false
 void Write(::ArrayW<uint8_t> buf, int32_t offset, int32_t len) ;

/// @brief Method Close addr 0x1132328 size 0x48 virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
// Type: Org.BouncyCastle.Asn1::BerOctetStringGenerator
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(476))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(483))
// CS Name: Org.BouncyCastle.Asn1.BerOctetStringGenerator
class CORDL_TYPE BerOctetStringGenerator : public Org::BouncyCastle::Asn1::BerGenerator {
public:
// Declarations
using BufferedBerOctetStream = Org::BouncyCastle::Asn1::Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BerOctetStringGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "BerOctetStringGenerator", modifiers: " const&", def_value: None }]
constexpr BerOctetStringGenerator(BerOctetStringGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BerOctetStringGenerator", modifiers: "&&", def_value: None }]
constexpr BerOctetStringGenerator(BerOctetStringGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BerOctetStringGenerator(void* ptr) noexcept : Org::BouncyCastle::Asn1::BerGenerator(ptr) {
}


  constexpr BerOctetStringGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BerOctetStringGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BerOctetStringGenerator& operator=(BerOctetStringGenerator&& o) noexcept = default;
  constexpr BerOctetStringGenerator& operator=(BerOctetStringGenerator const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "outStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit BerOctetStringGenerator(System::IO::Stream outStream) ;

/// @brief Method .ctor addr 0x1131f00 size 0x34 virtual false final false
 void _ctor(System::IO::Stream outStream) ;

// Ctor Parameters [CppParam { name: "outStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isExplicit", ty: "bool", modifiers: "", def_value: None }]
explicit BerOctetStringGenerator(System::IO::Stream outStream, int32_t tagNo, bool isExplicit) ;

/// @brief Method .ctor addr 0x1131f34 size 0x54 virtual false final false
 void _ctor(System::IO::Stream outStream, int32_t tagNo, bool isExplicit) ;

/// @brief Method GetOctetOutputStream addr 0x1131f88 size 0x54 virtual false final false
 System::IO::Stream GetOctetOutputStream() ;

/// @brief Method GetOctetOutputStream addr 0x113204c size 0x70 virtual false final false
 System::IO::Stream GetOctetOutputStream(int32_t bufSize) ;

/// @brief Method GetOctetOutputStream addr 0x1131fdc size 0x70 virtual false final false
 System::IO::Stream GetOctetOutputStream(::ArrayW<uint8_t> buf) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::BerOctetStringGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerOctetStringGenerator, "Org.BouncyCastle.Asn1", "BerOctetStringGenerator");
NEED_NO_BOX(Org::BouncyCastle::Asn1::Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Org__BouncyCastle__Asn1__BerOctetStringGenerator__BufferedBerOctetStream, "Org.BouncyCastle.Asn1", "BerOctetStringGenerator/BufferedBerOctetStream");
