#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class IGcmMultiplier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class BasicGcmMultiplier;
}
// Type: Org.BouncyCastle.Crypto.Modes.Gcm::BasicGcmMultiplier
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(952))
// CS Name: Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmMultiplier
class CORDL_TYPE BasicGcmMultiplier : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier
constexpr operator  Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BasicGcmMultiplier() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicGcmMultiplier", modifiers: " const&", def_value: None }]
constexpr BasicGcmMultiplier(BasicGcmMultiplier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicGcmMultiplier", modifiers: "&&", def_value: None }]
constexpr BasicGcmMultiplier(BasicGcmMultiplier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicGcmMultiplier(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BasicGcmMultiplier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicGcmMultiplier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicGcmMultiplier& operator=(BasicGcmMultiplier&& o) noexcept = default;
  constexpr BasicGcmMultiplier& operator=(BasicGcmMultiplier const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint32_t> __declspec(property(get=__get_H, put=__set_H))  H;

constexpr void __set_H(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_H() const;


// Methods

/// @brief Method Init addr 0xe86288 size 0x68 virtual true final true
 void Init(::ArrayW<uint8_t> H) ;

/// @brief Method MultiplyH addr 0xe862f0 size 0x80 virtual true final true
 void MultiplyH(::ArrayW<uint8_t> x) ;

static Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier New_ctor() ;

/// @brief Method .ctor addr 0xe86370 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes::Gcm
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier, "Org.BouncyCastle.Crypto.Modes.Gcm", "BasicGcmMultiplier");
