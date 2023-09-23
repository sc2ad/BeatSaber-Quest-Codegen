#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class KeyExpirationTime;
}
// Type: Org.BouncyCastle.Bcpg.Sig::KeyExpirationTime
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(536))
// CS Name: Org.BouncyCastle.Bcpg.Sig.KeyExpirationTime
class CORDL_TYPE KeyExpirationTime : public Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~KeyExpirationTime() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyExpirationTime", modifiers: " const&", def_value: None }]
constexpr KeyExpirationTime(KeyExpirationTime const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyExpirationTime", modifiers: "&&", def_value: None }]
constexpr KeyExpirationTime(KeyExpirationTime&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyExpirationTime(void* ptr) noexcept : Org::BouncyCastle::Bcpg::SignatureSubpacket(ptr) {
}


  constexpr KeyExpirationTime& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyExpirationTime& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyExpirationTime& operator=(KeyExpirationTime&& o) noexcept = default;
  constexpr KeyExpirationTime& operator=(KeyExpirationTime const& o) noexcept = default;
                


// Properties

 int64_t __declspec(property(get=get_Time))  Time;


// Methods

/// @brief Method TimeToBytes addr 0x113d9f4 size 0x94 virtual false final false
static ::ArrayW<uint8_t> TimeToBytes(int64_t t) ;

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit KeyExpirationTime(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113da88 size 0x48 virtual false final false
 void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "seconds", ty: "int64_t", modifiers: "", def_value: None }]
explicit KeyExpirationTime(bool critical, int64_t seconds) ;

/// @brief Method .ctor addr 0x113dad0 size 0x4c virtual false final false
 void _ctor(bool critical, int64_t seconds) ;

/// @brief Method get_Time addr 0x113db1c size 0x5c virtual false final false
 int64_t get_Time() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime, "Org.BouncyCastle.Bcpg.Sig", "KeyExpirationTime");
