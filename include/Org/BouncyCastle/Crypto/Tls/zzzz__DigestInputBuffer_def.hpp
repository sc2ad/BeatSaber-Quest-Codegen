#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DigestInputBuffer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream;
}
// Type: ::DigStream
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1219))
// CS Name: Org.BouncyCastle.Crypto.Tls.DigestInputBuffer::DigStream
class CORDL_TYPE Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream : public Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream(Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream(Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream(void* ptr) noexcept : Org::BouncyCastle::Utilities::IO::BaseOutputStream(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream& operator=(Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream& operator=(Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_d, put=__set_d))  d;

constexpr void __set_d(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_d() const;


// Methods

// Ctor Parameters [CppParam { name: "d", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream(Org::BouncyCastle::Crypto::IDigest d) ;

/// @brief Method .ctor addr 0xed95e8 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IDigest d) ;

/// @brief Method WriteByte addr 0xed9610 size 0xac virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method Write addr 0xed96bc size 0xc4 virtual true final false
 void Write(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::DigestInputBuffer
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1220))
// CS Name: Org.BouncyCastle.Crypto.Tls.DigestInputBuffer
class CORDL_TYPE DigestInputBuffer : public System::IO::MemoryStream {
public:
// Declarations
using DigStream = Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~DigestInputBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestInputBuffer", modifiers: " const&", def_value: None }]
constexpr DigestInputBuffer(DigestInputBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestInputBuffer", modifiers: "&&", def_value: None }]
constexpr DigestInputBuffer(DigestInputBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DigestInputBuffer(void* ptr) noexcept : System::IO::MemoryStream(ptr) {
}


  constexpr DigestInputBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DigestInputBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DigestInputBuffer& operator=(DigestInputBuffer&& o) noexcept = default;
  constexpr DigestInputBuffer& operator=(DigestInputBuffer const& o) noexcept = default;
                


// Methods

/// @brief Method UpdateDigest addr 0xed7b64 size 0x78 virtual false final false
 void UpdateDigest(Org::BouncyCastle::Crypto::IDigest d) ;

// Ctor Parameters []
explicit DigestInputBuffer() ;

/// @brief Method .ctor addr 0xed789c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::DigestInputBuffer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::DigestInputBuffer, "Org.BouncyCastle.Crypto.Tls", "DigestInputBuffer");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DigestInputBuffer__DigStream, "Org.BouncyCastle.Crypto.Tls", "DigestInputBuffer/DigStream");
