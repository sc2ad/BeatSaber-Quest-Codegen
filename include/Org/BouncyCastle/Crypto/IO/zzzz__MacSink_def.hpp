#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class MacSink;
}
// Type: Org.BouncyCastle.Crypto.IO::MacSink
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(930))
// CS Name: Org.BouncyCastle.Crypto.IO.MacSink
class CORDL_TYPE MacSink : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MacSink() = default;

// Ctor Parameters [CppParam { name: "", ty: "MacSink", modifiers: " const&", def_value: None }]
constexpr MacSink(MacSink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MacSink", modifiers: "&&", def_value: None }]
constexpr MacSink(MacSink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MacSink(void* ptr) noexcept : ::Org::BouncyCastle::Utilities::IO::BaseOutputStream(ptr) {
}


  constexpr MacSink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MacSink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MacSink& operator=(MacSink&& o) noexcept = default;
  constexpr MacSink& operator=(MacSink const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::IMac __declspec(property(get=__get_mMac, put=__set_mMac))  mMac;

constexpr void __set_mMac(::Org::BouncyCastle::Crypto::IMac value) ;

constexpr ::Org::BouncyCastle::Crypto::IMac __get_mMac() const;


// Properties

 ::Org::BouncyCastle::Crypto::IMac __declspec(property(get=get_Mac))  Mac;


// Methods

// Ctor Parameters [CppParam { name: "mac", ty: "::Org::BouncyCastle::Crypto::IMac", modifiers: "", def_value: None }]
explicit MacSink(::Org::BouncyCastle::Crypto::IMac mac) ;

/// @brief Method .ctor addr 0xe7c140 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IMac mac) ;

/// @brief Method get_Mac addr 0xe7c168 size 0x8 virtual true final false
 ::Org::BouncyCastle::Crypto::IMac get_Mac() ;

/// @brief Method WriteByte addr 0xe7c170 size 0xac virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method Write addr 0xe7c21c size 0xdc virtual true final false
 void Write(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::IO
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IO::MacSink);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IO::MacSink, "Org.BouncyCastle.Crypto.IO", "MacSink");
