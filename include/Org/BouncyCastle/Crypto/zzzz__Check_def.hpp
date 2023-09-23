#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class Check;
}
// Type: Org.BouncyCastle.Crypto::Check
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1346))
// CS Name: Org.BouncyCastle.Crypto.Check
class CORDL_TYPE Check : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Check() = default;

// Ctor Parameters [CppParam { name: "", ty: "Check", modifiers: " const&", def_value: None }]
constexpr Check(Check const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Check", modifiers: "&&", def_value: None }]
constexpr Check(Check&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Check(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Check& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Check& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Check& operator=(Check&& o) noexcept = default;
  constexpr Check& operator=(Check const& o) noexcept = default;
                


// Methods

/// @brief Method DataLength addr 0xf38580 size 0x50 virtual false final false
static void DataLength(bool condition, ::StringW msg) ;

/// @brief Method DataLength addr 0xf385d0 size 0x6c virtual false final false
static void DataLength(::ArrayW<uint8_t> buf, int32_t off, int32_t len, ::StringW msg) ;

/// @brief Method OutputLength addr 0xf3863c size 0x6c virtual false final false
static void OutputLength(::ArrayW<uint8_t> buf, int32_t off, int32_t len, ::StringW msg) ;

// Ctor Parameters []
explicit Check() ;

/// @brief Method .ctor addr 0xf386ac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::Check);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Check, "Org.BouncyCastle.Crypto", "Check");
