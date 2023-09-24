#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsNullCompression;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsNullCompression
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1314))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsNullCompression
class CORDL_TYPE TlsNullCompression : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCompression
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsCompression() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TlsNullCompression() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsNullCompression", modifiers: " const&", def_value: None }]
constexpr TlsNullCompression(TlsNullCompression const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsNullCompression", modifiers: "&&", def_value: None }]
constexpr TlsNullCompression(TlsNullCompression&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsNullCompression(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsNullCompression& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsNullCompression& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsNullCompression& operator=(TlsNullCompression&& o) noexcept = default;
  constexpr TlsNullCompression& operator=(TlsNullCompression const& o) noexcept = default;
                


// Methods

/// @brief Method Compress addr 0xf224b8 size 0x8 virtual true final false
 System::IO::Stream Compress(System::IO::Stream output) ;

/// @brief Method Decompress addr 0xf224c0 size 0x8 virtual true final false
 System::IO::Stream Decompress(System::IO::Stream output) ;

static Org::BouncyCastle::Crypto::Tls::TlsNullCompression New_ctor() ;

/// @brief Method .ctor addr 0xf224c8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsNullCompression);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsNullCompression, "Org.BouncyCastle.Crypto.Tls", "TlsNullCompression");
