#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class IGcmExponentiator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class BasicGcmExponentiator;
}
// Type: Org.BouncyCastle.Crypto.Modes.Gcm::BasicGcmExponentiator
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(950))
// CS Name: Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmExponentiator
class CORDL_TYPE BasicGcmExponentiator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator
constexpr operator  Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BasicGcmExponentiator() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicGcmExponentiator", modifiers: " const&", def_value: None }]
constexpr BasicGcmExponentiator(BasicGcmExponentiator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicGcmExponentiator", modifiers: "&&", def_value: None }]
constexpr BasicGcmExponentiator(BasicGcmExponentiator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicGcmExponentiator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BasicGcmExponentiator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicGcmExponentiator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicGcmExponentiator& operator=(BasicGcmExponentiator&& o) noexcept = default;
  constexpr BasicGcmExponentiator& operator=(BasicGcmExponentiator const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint32_t> __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_x() const;


// Methods

/// @brief Method Init addr 0xe85f64 size 0x68 virtual true final true
 void Init(::ArrayW<uint8_t> x) ;

/// @brief Method ExponentiateX addr 0xe86034 size 0x110 virtual true final true
 void ExponentiateX(int64_t pow, ::ArrayW<uint8_t> output) ;

// Ctor Parameters []
explicit BasicGcmExponentiator() ;

/// @brief Method .ctor addr 0xe86280 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes::Gcm
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator, "Org.BouncyCastle.Crypto.Modes.Gcm", "BasicGcmExponentiator");
