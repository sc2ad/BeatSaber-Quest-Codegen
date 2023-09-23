#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class ZOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class BerSequenceGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsCompressedDataStreamGenerator;
}
namespace Org::BouncyCastle::Cms {
class Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream;
}
// Type: ::CmsCompressedOutputStream
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(631))
// CS Name: Org.BouncyCastle.Cms.CmsCompressedDataStreamGenerator::CmsCompressedOutputStream
class CORDL_TYPE Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream : public Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream(Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream(Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream(void* ptr) noexcept : Org::BouncyCastle::Utilities::IO::BaseOutputStream(ptr) {
}


  constexpr Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream& operator=(Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream&& o) noexcept = default;
  constexpr Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream& operator=(Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Utilities::Zlib::ZOutputStream __declspec(property(get=__get__out, put=__set__out))  _out;

constexpr void __set__out(Org::BouncyCastle::Utilities::Zlib::ZOutputStream value) ;

constexpr Org::BouncyCastle::Utilities::Zlib::ZOutputStream __get__out() const;

 Org::BouncyCastle::Asn1::BerSequenceGenerator __declspec(property(get=__get__sGen, put=__set__sGen))  _sGen;

constexpr void __set__sGen(Org::BouncyCastle::Asn1::BerSequenceGenerator value) ;

constexpr Org::BouncyCastle::Asn1::BerSequenceGenerator __get__sGen() const;

 Org::BouncyCastle::Asn1::BerSequenceGenerator __declspec(property(get=__get__cGen, put=__set__cGen))  _cGen;

constexpr void __set__cGen(Org::BouncyCastle::Asn1::BerSequenceGenerator value) ;

constexpr Org::BouncyCastle::Asn1::BerSequenceGenerator __get__cGen() const;

 Org::BouncyCastle::Asn1::BerSequenceGenerator __declspec(property(get=__get__eiGen, put=__set__eiGen))  _eiGen;

constexpr void __set__eiGen(Org::BouncyCastle::Asn1::BerSequenceGenerator value) ;

constexpr Org::BouncyCastle::Asn1::BerSequenceGenerator __get__eiGen() const;


// Methods

// Ctor Parameters [CppParam { name: "outStream", ty: "Org::BouncyCastle::Utilities::Zlib::ZOutputStream", modifiers: "", def_value: None }, CppParam { name: "sGen", ty: "Org::BouncyCastle::Asn1::BerSequenceGenerator", modifiers: "", def_value: None }, CppParam { name: "cGen", ty: "Org::BouncyCastle::Asn1::BerSequenceGenerator", modifiers: "", def_value: None }, CppParam { name: "eiGen", ty: "Org::BouncyCastle::Asn1::BerSequenceGenerator", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream(Org::BouncyCastle::Utilities::Zlib::ZOutputStream outStream, Org::BouncyCastle::Asn1::BerSequenceGenerator sGen, Org::BouncyCastle::Asn1::BerSequenceGenerator cGen, Org::BouncyCastle::Asn1::BerSequenceGenerator eiGen) ;

/// @brief Method .ctor addr 0x1153450 size 0x40 virtual false final false
 void _ctor(Org::BouncyCastle::Utilities::Zlib::ZOutputStream outStream, Org::BouncyCastle::Asn1::BerSequenceGenerator sGen, Org::BouncyCastle::Asn1::BerSequenceGenerator cGen, Org::BouncyCastle::Asn1::BerSequenceGenerator eiGen) ;

/// @brief Method WriteByte addr 0x1153490 size 0x24 virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method Write addr 0x11534b4 size 0x24 virtual true final false
 void Write(::ArrayW<uint8_t> bytes, int32_t off, int32_t len) ;

/// @brief Method Close addr 0x11534d8 size 0xa8 virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsCompressedDataStreamGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(632))
// CS Name: Org.BouncyCastle.Cms.CmsCompressedDataStreamGenerator
class CORDL_TYPE CmsCompressedDataStreamGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CmsCompressedOutputStream = Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CmsCompressedDataStreamGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataStreamGenerator", modifiers: " const&", def_value: None }]
constexpr CmsCompressedDataStreamGenerator(CmsCompressedDataStreamGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataStreamGenerator", modifiers: "&&", def_value: None }]
constexpr CmsCompressedDataStreamGenerator(CmsCompressedDataStreamGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsCompressedDataStreamGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsCompressedDataStreamGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsCompressedDataStreamGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsCompressedDataStreamGenerator& operator=(CmsCompressedDataStreamGenerator&& o) noexcept = default;
  constexpr CmsCompressedDataStreamGenerator& operator=(CmsCompressedDataStreamGenerator const& o) noexcept = default;
                


// Fields

/// @brief Field ZLib offset 0
static constexpr ::ConstString  ZLib{u"1.2.840.113549.1.9.16.3.8"};

 int32_t __declspec(property(get=__get__bufferSize, put=__set__bufferSize))  _bufferSize;

constexpr void __set__bufferSize(int32_t value) ;

constexpr int32_t __get__bufferSize() const;


// Methods

// Ctor Parameters []
explicit CmsCompressedDataStreamGenerator() ;

/// @brief Method .ctor addr 0x1153100 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method SetBufferSize addr 0x1153108 size 0x8 virtual false final false
 void SetBufferSize(int32_t bufferSize) ;

/// @brief Method Open addr 0x1153110 size 0x7c virtual false final false
 System::IO::Stream Open(System::IO::Stream outStream, ::StringW compressionOID) ;

/// @brief Method Open addr 0x115318c size 0x2c4 virtual false final false
 System::IO::Stream Open(System::IO::Stream outStream, ::StringW contentOID, ::StringW compressionOID) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator, "Org.BouncyCastle.Cms", "CmsCompressedDataStreamGenerator");
NEED_NO_BOX(Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream, "Org.BouncyCastle.Cms", "CmsCompressedDataStreamGenerator/CmsCompressedOutputStream");
