#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Cms {
class IDigestCalculator;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class BaseDigestCalculator;
}
// Type: Org.BouncyCastle.Cms::BaseDigestCalculator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(611))
// CS Name: Org.BouncyCastle.Cms.BaseDigestCalculator
class CORDL_TYPE BaseDigestCalculator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Cms::IDigestCalculator
constexpr operator  ::Org::BouncyCastle::Cms::IDigestCalculator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BaseDigestCalculator() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseDigestCalculator", modifiers: " const&", def_value: None }]
constexpr BaseDigestCalculator(BaseDigestCalculator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseDigestCalculator", modifiers: "&&", def_value: None }]
constexpr BaseDigestCalculator(BaseDigestCalculator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseDigestCalculator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BaseDigestCalculator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseDigestCalculator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseDigestCalculator& operator=(BaseDigestCalculator&& o) noexcept = default;
  constexpr BaseDigestCalculator& operator=(BaseDigestCalculator const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_digest() const;


// Methods

// Ctor Parameters [CppParam { name: "digest", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit BaseDigestCalculator(::ArrayW<uint8_t> digest) ;

/// @brief Method .ctor addr 0x114dff8 size 0x28 virtual false final false
 void _ctor(::ArrayW<uint8_t> digest) ;

/// @brief Method GetDigest addr 0x114e020 size 0x5c virtual true final true
 ::ArrayW<uint8_t> GetDigest() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::BaseDigestCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::BaseDigestCalculator, "Org.BouncyCastle.Cms", "BaseDigestCalculator");
