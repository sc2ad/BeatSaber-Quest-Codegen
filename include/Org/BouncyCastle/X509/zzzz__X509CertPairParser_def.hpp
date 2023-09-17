#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class ICollection;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::X509 {
class X509CertificatePair;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509CertPairParser;
}
// Type: Org.BouncyCastle.X509::X509CertPairParser
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1863))
// CS Name: Org.BouncyCastle.X509.X509CertPairParser
class CORDL_TYPE X509CertPairParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X509CertPairParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertPairParser", modifiers: " const&", def_value: None }]
constexpr X509CertPairParser(X509CertPairParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertPairParser", modifiers: "&&", def_value: None }]
constexpr X509CertPairParser(X509CertPairParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509CertPairParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509CertPairParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509CertPairParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509CertPairParser& operator=(X509CertPairParser&& o) noexcept = default;
  constexpr X509CertPairParser& operator=(X509CertPairParser const& o) noexcept = default;
                


// Fields

 ::System::IO::Stream __declspec(property(get=__get_currentStream, put=__set_currentStream))  currentStream;

constexpr void __set_currentStream(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_currentStream() const;


// Methods

/// @brief Method ReadDerCrossCertificatePair addr 0x10f093c size 0xf4 virtual false final false
 ::Org::BouncyCastle::X509::X509CertificatePair ReadDerCrossCertificatePair(::System::IO::Stream inStream) ;

/// @brief Method ReadCertPair addr 0x10f0a30 size 0x78 virtual false final false
 ::Org::BouncyCastle::X509::X509CertificatePair ReadCertPair(::ArrayW<uint8_t> input) ;

/// @brief Method ReadCertPairs addr 0x10f0cec size 0x78 virtual false final false
 ::System::Collections::ICollection ReadCertPairs(::ArrayW<uint8_t> input) ;

/// @brief Method ReadCertPair addr 0x10f0aa8 size 0x244 virtual false final false
 ::Org::BouncyCastle::X509::X509CertificatePair ReadCertPair(::System::IO::Stream inStream) ;

/// @brief Method ReadCertPairs addr 0x10f0d64 size 0x110 virtual false final false
 ::System::Collections::ICollection ReadCertPairs(::System::IO::Stream inStream) ;

// Ctor Parameters []
explicit X509CertPairParser() ;

/// @brief Method .ctor addr 0x10f0e74 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::X509::X509CertPairParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509CertPairParser, "Org.BouncyCastle.X509", "X509CertPairParser");
