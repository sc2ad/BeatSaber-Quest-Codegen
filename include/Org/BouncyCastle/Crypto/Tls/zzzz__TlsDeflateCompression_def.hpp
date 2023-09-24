#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDeflateCompression;
}
// Type: ::DeflateOutputStream
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1297))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1295))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsDeflateCompression::DeflateOutputStream
class CORDL_TYPE Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream : public Org::BouncyCastle::Utilities::Zlib::ZOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream(Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream(Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream(void* ptr) noexcept : Org::BouncyCastle::Utilities::Zlib::ZOutputStream(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream& operator=(Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream& operator=(Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream New_ctor(System::IO::Stream output, Org::BouncyCastle::Utilities::Zlib::ZStream z, bool compress) ;

/// @brief Method .ctor addr 0xf15e98 size 0x38 virtual false final false
 void _ctor(System::IO::Stream output, Org::BouncyCastle::Utilities::Zlib::ZStream z, bool compress) ;

/// @brief Method Flush addr 0xf16074 size 0x4 virtual true final false
 void Flush() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::TlsDeflateCompression
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1296))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsDeflateCompression
class CORDL_TYPE TlsDeflateCompression : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DeflateOutputStream = Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream;

/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCompression
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsCompression() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TlsDeflateCompression() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsDeflateCompression", modifiers: " const&", def_value: None }]
constexpr TlsDeflateCompression(TlsDeflateCompression const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsDeflateCompression", modifiers: "&&", def_value: None }]
constexpr TlsDeflateCompression(TlsDeflateCompression&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsDeflateCompression(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsDeflateCompression& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsDeflateCompression& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsDeflateCompression& operator=(TlsDeflateCompression&& o) noexcept = default;
  constexpr TlsDeflateCompression& operator=(TlsDeflateCompression const& o) noexcept = default;
                


// Fields

/// @brief Field LEVEL_NONE offset 0
static constexpr int32_t  LEVEL_NONE{0};

/// @brief Field LEVEL_FASTEST offset 0
static constexpr int32_t  LEVEL_FASTEST{1};

/// @brief Field LEVEL_SMALLEST offset 0
static constexpr int32_t  LEVEL_SMALLEST{9};

/// @brief Field LEVEL_DEFAULT offset 0
static constexpr int32_t  LEVEL_DEFAULT{-1};

 Org::BouncyCastle::Utilities::Zlib::ZStream __declspec(property(get=__get_zIn, put=__set_zIn))  zIn;

constexpr void __set_zIn(Org::BouncyCastle::Utilities::Zlib::ZStream value) ;

constexpr Org::BouncyCastle::Utilities::Zlib::ZStream __get_zIn() const;

 Org::BouncyCastle::Utilities::Zlib::ZStream __declspec(property(get=__get_zOut, put=__set_zOut))  zOut;

constexpr void __set_zOut(Org::BouncyCastle::Utilities::Zlib::ZStream value) ;

constexpr Org::BouncyCastle::Utilities::Zlib::ZStream __get_zOut() const;


// Methods

static Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression New_ctor() ;

/// @brief Method .ctor addr 0xf15d50 size 0x8 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression New_ctor(int32_t level) ;

/// @brief Method .ctor addr 0xf15d58 size 0xac virtual false final false
 void _ctor(int32_t level) ;

/// @brief Method Compress addr 0xf15e04 size 0x94 virtual true final false
 System::IO::Stream Compress(System::IO::Stream output) ;

/// @brief Method Decompress addr 0xf15ed0 size 0x90 virtual true final false
 System::IO::Stream Decompress(System::IO::Stream output) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsDeflateCompression__DeflateOutputStream, "Org.BouncyCastle.Crypto.Tls", "TlsDeflateCompression/DeflateOutputStream");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression, "Org.BouncyCastle.Crypto.Tls", "TlsDeflateCompression");
