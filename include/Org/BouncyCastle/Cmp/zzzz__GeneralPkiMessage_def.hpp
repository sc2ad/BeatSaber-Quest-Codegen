#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiMessage;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiBody;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeader;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class GeneralPkiMessage;
}
// Type: Org.BouncyCastle.Cmp::GeneralPkiMessage
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(605))
// CS Name: Org.BouncyCastle.Cmp.GeneralPkiMessage
class CORDL_TYPE GeneralPkiMessage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GeneralPkiMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "GeneralPkiMessage", modifiers: " const&", def_value: None }]
constexpr GeneralPkiMessage(GeneralPkiMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GeneralPkiMessage", modifiers: "&&", def_value: None }]
constexpr GeneralPkiMessage(GeneralPkiMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GeneralPkiMessage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GeneralPkiMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GeneralPkiMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GeneralPkiMessage& operator=(GeneralPkiMessage&& o) noexcept = default;
  constexpr GeneralPkiMessage& operator=(GeneralPkiMessage const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Cmp::PkiMessage __declspec(property(get=__get_pkiMessage, put=__set_pkiMessage))  pkiMessage;

constexpr void __set_pkiMessage(::Org::BouncyCastle::Asn1::Cmp::PkiMessage value) ;

constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiMessage __get_pkiMessage() const;


// Properties

 ::Org::BouncyCastle::Asn1::Cmp::PkiHeader __declspec(property(get=get_Header))  Header;

 ::Org::BouncyCastle::Asn1::Cmp::PkiBody __declspec(property(get=get_Body))  Body;

 bool __declspec(property(get=get_HasProtection))  HasProtection;


// Methods

/// @brief Method ParseBytes addr 0x114be64 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::Cmp::PkiMessage ParseBytes(::ArrayW<uint8_t> encoding) ;

// Ctor Parameters [CppParam { name: "pkiMessage", ty: "::Org::BouncyCastle::Asn1::Cmp::PkiMessage", modifiers: "", def_value: None }]
explicit GeneralPkiMessage(::Org::BouncyCastle::Asn1::Cmp::PkiMessage pkiMessage) ;

/// @brief Method .ctor addr 0x114be7c size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiMessage pkiMessage) ;

// Ctor Parameters [CppParam { name: "encoding", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit GeneralPkiMessage(::ArrayW<uint8_t> encoding) ;

/// @brief Method .ctor addr 0x114bea4 size 0x40 virtual false final false
 void _ctor(::ArrayW<uint8_t> encoding) ;

/// @brief Method get_Header addr 0x114bee4 size 0x20 virtual false final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeader get_Header() ;

/// @brief Method get_Body addr 0x114bf04 size 0x20 virtual false final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiBody get_Body() ;

/// @brief Method get_HasProtection addr 0x114bf24 size 0x2c virtual false final false
 bool get_HasProtection() ;

/// @brief Method ToAsn1Structure addr 0x114bf50 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiMessage ToAsn1Structure() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cmp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cmp::GeneralPkiMessage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::GeneralPkiMessage, "Org.BouncyCastle.Cmp", "GeneralPkiMessage");
