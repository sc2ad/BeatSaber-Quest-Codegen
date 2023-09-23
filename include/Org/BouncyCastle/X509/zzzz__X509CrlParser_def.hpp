#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::X509 {
class PemParser;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
namespace Org::BouncyCastle::X509 {
class X509Crl;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509CrlParser;
}
// Type: Org.BouncyCastle.X509::X509CrlParser
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1866))
// CS Name: Org.BouncyCastle.X509.X509CrlParser
class CORDL_TYPE X509CrlParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~X509CrlParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CrlParser", modifiers: " const&", def_value: None }]
constexpr X509CrlParser(X509CrlParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CrlParser", modifiers: "&&", def_value: None }]
constexpr X509CrlParser(X509CrlParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509CrlParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509CrlParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509CrlParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509CrlParser& operator=(X509CrlParser&& o) noexcept = default;
  constexpr X509CrlParser& operator=(X509CrlParser const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::X509::PemParser __declspec(property(get=__get_PemCrlParser, put=__set_PemCrlParser))  PemCrlParser;

static void __set_PemCrlParser(Org::BouncyCastle::X509::PemParser value) ;

static Org::BouncyCastle::X509::PemParser __get_PemCrlParser() ;

 bool __declspec(property(get=__get_lazyAsn1, put=__set_lazyAsn1))  lazyAsn1;

constexpr void __set_lazyAsn1(bool value) ;

constexpr bool __get_lazyAsn1() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_sCrlData, put=__set_sCrlData))  sCrlData;

constexpr void __set_sCrlData(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_sCrlData() const;

 int32_t __declspec(property(get=__get_sCrlDataObjectCount, put=__set_sCrlDataObjectCount))  sCrlDataObjectCount;

constexpr void __set_sCrlDataObjectCount(int32_t value) ;

constexpr int32_t __get_sCrlDataObjectCount() const;

 System::IO::Stream __declspec(property(get=__get_currentCrlStream, put=__set_currentCrlStream))  currentCrlStream;

constexpr void __set_currentCrlStream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_currentCrlStream() const;


// Methods

// Ctor Parameters []
explicit X509CrlParser() ;

/// @brief Method .ctor addr 0x10f4338 size 0x1c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "lazyAsn1", ty: "bool", modifiers: "", def_value: None }]
explicit X509CrlParser(bool lazyAsn1) ;

/// @brief Method .ctor addr 0x10f4354 size 0x28 virtual false final false
 void _ctor(bool lazyAsn1) ;

/// @brief Method ReadPemCrl addr 0x10f437c size 0xa8 virtual false final false
 Org::BouncyCastle::X509::X509Crl ReadPemCrl(System::IO::Stream inStream) ;

/// @brief Method ReadDerCrl addr 0x10f4424 size 0x218 virtual false final false
 Org::BouncyCastle::X509::X509Crl ReadDerCrl(Org::BouncyCastle::Asn1::Asn1InputStream dIn) ;

/// @brief Method GetCrl addr 0x10f463c size 0x84 virtual false final false
 Org::BouncyCastle::X509::X509Crl GetCrl() ;

/// @brief Method CreateX509Crl addr 0x10f46c0 size 0x60 virtual true final false
 Org::BouncyCastle::X509::X509Crl CreateX509Crl(Org::BouncyCastle::Asn1::X509::CertificateList c) ;

/// @brief Method ReadCrl addr 0x10f4720 size 0x78 virtual false final false
 Org::BouncyCastle::X509::X509Crl ReadCrl(::ArrayW<uint8_t> input) ;

/// @brief Method ReadCrls addr 0x10f4af8 size 0x78 virtual false final false
 System::Collections::ICollection ReadCrls(::ArrayW<uint8_t> input) ;

/// @brief Method ReadCrl addr 0x10f4798 size 0x360 virtual false final false
 Org::BouncyCastle::X509::X509Crl ReadCrl(System::IO::Stream inStream) ;

/// @brief Method ReadCrls addr 0x10f4b70 size 0x110 virtual false final false
 System::Collections::ICollection ReadCrls(System::IO::Stream inStream) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(Org::BouncyCastle::X509::X509CrlParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509CrlParser, "Org.BouncyCastle.X509", "X509CrlParser");
