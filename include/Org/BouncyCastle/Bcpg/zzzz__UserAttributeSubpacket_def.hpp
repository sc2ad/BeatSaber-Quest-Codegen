#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
struct UserAttributeSubpacketTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class UserAttributeSubpacket;
}
// Type: Org.BouncyCastle.Bcpg::UserAttributeSubpacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(528))
// CS Name: Org.BouncyCastle.Bcpg.UserAttributeSubpacket
class CORDL_TYPE UserAttributeSubpacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UserAttributeSubpacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserAttributeSubpacket", modifiers: " const&", def_value: None }]
constexpr UserAttributeSubpacket(UserAttributeSubpacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserAttributeSubpacket", modifiers: "&&", def_value: None }]
constexpr UserAttributeSubpacket(UserAttributeSubpacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserAttributeSubpacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UserAttributeSubpacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserAttributeSubpacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserAttributeSubpacket& operator=(UserAttributeSubpacket&& o) noexcept = default;
  constexpr UserAttributeSubpacket& operator=(UserAttributeSubpacket const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag value) ;

constexpr Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag __get_type() const;

 bool __declspec(property(get=__get_longLength, put=__set_longLength))  longLength;

constexpr void __set_longLength(bool value) ;

constexpr bool __get_longLength() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_data() const;


// Properties

 Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag __declspec(property(get=get_SubpacketType))  SubpacketType;


// Methods

static Org::BouncyCastle::Bcpg::UserAttributeSubpacket New_ctor(Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag type, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113b9d4 size 0x34 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag type, ::ArrayW<uint8_t> data) ;

static Org::BouncyCastle::Bcpg::UserAttributeSubpacket New_ctor(Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag type, bool forceLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113ba08 size 0x40 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag type, bool forceLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method get_SubpacketType addr 0x113ba48 size 0x8 virtual true final false
 Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag get_SubpacketType() ;

/// @brief Method GetData addr 0x113ba50 size 0x8 virtual true final false
 ::ArrayW<uint8_t> GetData() ;

/// @brief Method Encode addr 0x113ba58 size 0x138 virtual true final false
 void Encode(System::IO::Stream os) ;

/// @brief Method Equals addr 0x113bb90 size 0xe8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x113bc78 size 0x10a4 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::UserAttributeSubpacket);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::UserAttributeSubpacket, "Org.BouncyCastle.Bcpg", "UserAttributeSubpacket");
