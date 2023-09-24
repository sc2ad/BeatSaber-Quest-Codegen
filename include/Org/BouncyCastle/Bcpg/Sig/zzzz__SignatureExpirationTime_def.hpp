#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class SignatureExpirationTime;
}
// Type: Org.BouncyCastle.Bcpg.Sig::SignatureExpirationTime
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(547))
// CS Name: Org.BouncyCastle.Bcpg.Sig.SignatureExpirationTime
class CORDL_TYPE SignatureExpirationTime : public Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SignatureExpirationTime() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureExpirationTime", modifiers: " const&", def_value: None }]
constexpr SignatureExpirationTime(SignatureExpirationTime const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureExpirationTime", modifiers: "&&", def_value: None }]
constexpr SignatureExpirationTime(SignatureExpirationTime&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignatureExpirationTime(void* ptr) noexcept : Org::BouncyCastle::Bcpg::SignatureSubpacket(ptr) {
}


  constexpr SignatureExpirationTime& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignatureExpirationTime& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignatureExpirationTime& operator=(SignatureExpirationTime&& o) noexcept = default;
  constexpr SignatureExpirationTime& operator=(SignatureExpirationTime const& o) noexcept = default;
                


// Properties

 int64_t __declspec(property(get=get_Time))  Time;


// Methods

/// @brief Method TimeToBytes addr 0x113eca0 size 0x94 virtual false final false
static ::ArrayW<uint8_t> TimeToBytes(int64_t t) ;

static Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113ed34 size 0x48 virtual false final false
 void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

static Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime New_ctor(bool critical, int64_t seconds) ;

/// @brief Method .ctor addr 0x113ed7c size 0x4c virtual false final false
 void _ctor(bool critical, int64_t seconds) ;

/// @brief Method get_Time addr 0x113edc8 size 0x5c virtual false final false
 int64_t get_Time() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime, "Org.BouncyCastle.Bcpg.Sig", "SignatureExpirationTime");
