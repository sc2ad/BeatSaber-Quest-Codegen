#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SignerInputBuffer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream;
}
// Type: ::SigStream
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1276))
// CS Name: Org.BouncyCastle.Crypto.Tls.SignerInputBuffer::SigStream
class CORDL_TYPE ____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream(____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream(____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream(void* ptr) noexcept : ::Org::BouncyCastle::Utilities::IO::BaseOutputStream(ptr) {
}


  constexpr ____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream& operator=(____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream& operator=(____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::ISigner __declspec(property(get=__get_s, put=__set_s))  s;

constexpr void __set_s(::Org::BouncyCastle::Crypto::ISigner value) ;

constexpr ::Org::BouncyCastle::Crypto::ISigner __get_s() const;


// Methods

// Ctor Parameters [CppParam { name: "s", ty: "::Org::BouncyCastle::Crypto::ISigner", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream(::Org::BouncyCastle::Crypto::ISigner s) ;

/// @brief Method .ctor addr 0xf09900 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::ISigner s) ;

/// @brief Method WriteByte addr 0xf09930 size 0xac virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method Write addr 0xf099dc size 0xc4 virtual true final false
 void Write(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::SignerInputBuffer
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1277))
// CS Name: Org.BouncyCastle.Crypto.Tls.SignerInputBuffer
class CORDL_TYPE SignerInputBuffer : public ::System::IO::MemoryStream {
public:
// Declarations
using SigStream = ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~SignerInputBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerInputBuffer", modifiers: " const&", def_value: None }]
constexpr SignerInputBuffer(SignerInputBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerInputBuffer", modifiers: "&&", def_value: None }]
constexpr SignerInputBuffer(SignerInputBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignerInputBuffer(void* ptr) noexcept : ::System::IO::MemoryStream(ptr) {
}


  constexpr SignerInputBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignerInputBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignerInputBuffer& operator=(SignerInputBuffer&& o) noexcept = default;
  constexpr SignerInputBuffer& operator=(SignerInputBuffer const& o) noexcept = default;
                


// Methods

/// @brief Method UpdateSigner addr 0xf09888 size 0x78 virtual false final false
 void UpdateSigner(::Org::BouncyCastle::Crypto::ISigner s) ;

// Ctor Parameters []
explicit SignerInputBuffer() ;

/// @brief Method .ctor addr 0xf09928 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer, "Org.BouncyCastle.Crypto.Tls", "SignerInputBuffer");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__SignerInputBuffer__SigStream, "Org.BouncyCastle.Crypto.Tls", "SignerInputBuffer/SigStream");
