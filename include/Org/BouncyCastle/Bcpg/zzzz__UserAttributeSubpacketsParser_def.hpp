#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Bcpg {
class UserAttributeSubpacket;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class UserAttributeSubpacketsParser;
}
// Type: Org.BouncyCastle.Bcpg::UserAttributeSubpacketsParser
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(598))
// CS Name: Org.BouncyCastle.Bcpg.UserAttributeSubpacketsParser
class CORDL_TYPE UserAttributeSubpacketsParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UserAttributeSubpacketsParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserAttributeSubpacketsParser", modifiers: " const&", def_value: None }]
constexpr UserAttributeSubpacketsParser(UserAttributeSubpacketsParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserAttributeSubpacketsParser", modifiers: "&&", def_value: None }]
constexpr UserAttributeSubpacketsParser(UserAttributeSubpacketsParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserAttributeSubpacketsParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UserAttributeSubpacketsParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserAttributeSubpacketsParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserAttributeSubpacketsParser& operator=(UserAttributeSubpacketsParser&& o) noexcept = default;
  constexpr UserAttributeSubpacketsParser& operator=(UserAttributeSubpacketsParser const& o) noexcept = default;
                


// Fields

 ::System::IO::Stream __declspec(property(get=__get_input, put=__set_input))  input;

constexpr void __set_input(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_input() const;


// Methods

// Ctor Parameters [CppParam { name: "input", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit UserAttributeSubpacketsParser(::System::IO::Stream input) ;

/// @brief Method .ctor addr 0x114ad30 size 0x28 virtual false final false
 void _ctor(::System::IO::Stream input) ;

/// @brief Method ReadPacket addr 0x114ae60 size 0x2c4 virtual true final false
 ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket ReadPacket() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser, "Org.BouncyCastle.Bcpg", "UserAttributeSubpacketsParser");
