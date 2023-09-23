#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class IGcmExponentiator;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class Tables1kGcmExponentiator;
}
// Type: Org.BouncyCastle.Crypto.Modes.Gcm::Tables1kGcmExponentiator
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(954))
// CS Name: Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator
class CORDL_TYPE Tables1kGcmExponentiator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator
constexpr operator  Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Tables1kGcmExponentiator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tables1kGcmExponentiator", modifiers: " const&", def_value: None }]
constexpr Tables1kGcmExponentiator(Tables1kGcmExponentiator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tables1kGcmExponentiator", modifiers: "&&", def_value: None }]
constexpr Tables1kGcmExponentiator(Tables1kGcmExponentiator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tables1kGcmExponentiator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tables1kGcmExponentiator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tables1kGcmExponentiator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tables1kGcmExponentiator& operator=(Tables1kGcmExponentiator&& o) noexcept = default;
  constexpr Tables1kGcmExponentiator& operator=(Tables1kGcmExponentiator const& o) noexcept = default;
                


// Fields

 System::Collections::IList __declspec(property(get=__get_lookupPowX2, put=__set_lookupPowX2))  lookupPowX2;

constexpr void __set_lookupPowX2(System::Collections::IList value) ;

constexpr System::Collections::IList __get_lookupPowX2() const;


// Methods

/// @brief Method Init addr 0xe873f4 size 0x20c virtual true final true
 void Init(::ArrayW<uint8_t> x) ;

/// @brief Method ExponentiateX addr 0xe87600 size 0x1b0 virtual true final true
 void ExponentiateX(int64_t pow, ::ArrayW<uint8_t> output) ;

/// @brief Method EnsureAvailable addr 0xe877b0 size 0x268 virtual false final false
 void EnsureAvailable(int32_t bit) ;

// Ctor Parameters []
explicit Tables1kGcmExponentiator() ;

/// @brief Method .ctor addr 0xe87a18 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes::Gcm
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator, "Org.BouncyCastle.Crypto.Modes.Gcm", "Tables1kGcmExponentiator");
