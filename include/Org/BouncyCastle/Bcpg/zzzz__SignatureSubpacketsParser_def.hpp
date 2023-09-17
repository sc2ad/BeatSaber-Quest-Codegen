#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacket;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacketsParser;
}
// Type: Org.BouncyCastle.Bcpg::SignatureSubpacketsParser
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(590))
// CS Name: Org.BouncyCastle.Bcpg.SignatureSubpacketsParser
class CORDL_TYPE SignatureSubpacketsParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SignatureSubpacketsParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureSubpacketsParser", modifiers: " const&", def_value: None }]
constexpr SignatureSubpacketsParser(SignatureSubpacketsParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureSubpacketsParser", modifiers: "&&", def_value: None }]
constexpr SignatureSubpacketsParser(SignatureSubpacketsParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignatureSubpacketsParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignatureSubpacketsParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignatureSubpacketsParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignatureSubpacketsParser& operator=(SignatureSubpacketsParser&& o) noexcept = default;
  constexpr SignatureSubpacketsParser& operator=(SignatureSubpacketsParser const& o) noexcept = default;
                


// Fields

 ::System::IO::Stream __declspec(property(get=__get_input, put=__set_input))  input;

constexpr void __set_input(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_input() const;


// Methods

// Ctor Parameters [CppParam { name: "input", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit SignatureSubpacketsParser(::System::IO::Stream input) ;

/// @brief Method .ctor addr 0x1149720 size 0x28 virtual false final false
 void _ctor(::System::IO::Stream input) ;

/// @brief Method ReadPacket addr 0x1149748 size 0x650 virtual false final false
 ::Org::BouncyCastle::Bcpg::SignatureSubpacket ReadPacket() ;

/// @brief Method CheckData addr 0x114a964 size 0xf0 virtual false final false
 ::ArrayW<uint8_t> CheckData(::ArrayW<uint8_t> data, int32_t expected, int32_t bytesRead, ::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser, "Org.BouncyCastle.Bcpg", "SignatureSubpacketsParser");
