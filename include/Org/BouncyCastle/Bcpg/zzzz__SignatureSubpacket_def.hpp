#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Bcpg {
struct SignatureSubpacketTag;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacket;
}
// Type: Org.BouncyCastle.Bcpg::SignatureSubpacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(531))
// CS Name: Org.BouncyCastle.Bcpg.SignatureSubpacket
class CORDL_TYPE SignatureSubpacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SignatureSubpacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureSubpacket", modifiers: " const&", def_value: None }]
constexpr SignatureSubpacket(SignatureSubpacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureSubpacket", modifiers: "&&", def_value: None }]
constexpr SignatureSubpacket(SignatureSubpacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignatureSubpacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignatureSubpacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignatureSubpacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignatureSubpacket& operator=(SignatureSubpacket&& o) noexcept = default;
  constexpr SignatureSubpacket& operator=(SignatureSubpacket const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag value) ;

constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag __get_type() const;

 bool __declspec(property(get=__get_critical, put=__set_critical))  critical;

constexpr void __set_critical(bool value) ;

constexpr bool __get_critical() const;

 bool __declspec(property(get=__get_isLongLength, put=__set_isLongLength))  isLongLength;

constexpr void __set_isLongLength(bool value) ;

constexpr bool __get_isLongLength() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_data() const;


// Properties

 ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag __declspec(property(get=get_SubpacketType))  SubpacketType;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "::Org::BouncyCastle::Bcpg::SignatureSubpacketTag", modifiers: "", def_value: None }, CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit SignatureSubpacket(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113d048 size 0x48 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method get_SubpacketType addr 0x113d090 size 0x8 virtual false final false
 ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag get_SubpacketType() ;

/// @brief Method IsCritical addr 0x113d098 size 0x8 virtual false final false
 bool IsCritical() ;

/// @brief Method IsLongLength addr 0x113d0a0 size 0x8 virtual false final false
 bool IsLongLength() ;

/// @brief Method GetData addr 0x113d0a8 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetData() ;

/// @brief Method Encode addr 0x113d120 size 0x144 virtual false final false
 void Encode(::System::IO::Stream os) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::SignatureSubpacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SignatureSubpacket, "Org.BouncyCastle.Bcpg", "SignatureSubpacket");
