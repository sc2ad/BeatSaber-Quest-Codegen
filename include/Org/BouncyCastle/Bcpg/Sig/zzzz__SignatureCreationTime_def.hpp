#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class SignatureCreationTime;
}
// Type: Org.BouncyCastle.Bcpg.Sig::SignatureCreationTime
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(546))
// CS Name: Org.BouncyCastle.Bcpg.Sig.SignatureCreationTime
class CORDL_TYPE SignatureCreationTime : public Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SignatureCreationTime() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureCreationTime", modifiers: " const&", def_value: None }]
constexpr SignatureCreationTime(SignatureCreationTime const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureCreationTime", modifiers: "&&", def_value: None }]
constexpr SignatureCreationTime(SignatureCreationTime&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignatureCreationTime(void* ptr) noexcept : Org::BouncyCastle::Bcpg::SignatureSubpacket(ptr) {
}


  constexpr SignatureCreationTime& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignatureCreationTime& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignatureCreationTime& operator=(SignatureCreationTime&& o) noexcept = default;
  constexpr SignatureCreationTime& operator=(SignatureCreationTime const& o) noexcept = default;
                


// Methods

/// @brief Method TimeToBytes addr 0x113ea78 size 0xe8 virtual false final false
static ::ArrayW<uint8_t> TimeToBytes(System::DateTime time) ;

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit SignatureCreationTime(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113eb60 size 0x48 virtual false final false
 void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "date", ty: "System::DateTime", modifiers: "", def_value: None }]
explicit SignatureCreationTime(bool critical, System::DateTime date) ;

/// @brief Method .ctor addr 0x113eba8 size 0x4c virtual false final false
 void _ctor(bool critical, System::DateTime date) ;

/// @brief Method GetTime addr 0x113ebf4 size 0xac virtual false final false
 System::DateTime GetTime() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime, "Org.BouncyCastle.Bcpg.Sig", "SignatureCreationTime");
