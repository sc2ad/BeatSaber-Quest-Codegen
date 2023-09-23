#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Cms {
class IDigestCalculator;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CounterSignatureDigestCalculator;
}
// Type: Org.BouncyCastle.Cms::CounterSignatureDigestCalculator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(665))
// CS Name: Org.BouncyCastle.Cms.CounterSignatureDigestCalculator
class CORDL_TYPE CounterSignatureDigestCalculator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Cms::IDigestCalculator
constexpr operator  Org::BouncyCastle::Cms::IDigestCalculator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CounterSignatureDigestCalculator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CounterSignatureDigestCalculator", modifiers: " const&", def_value: None }]
constexpr CounterSignatureDigestCalculator(CounterSignatureDigestCalculator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CounterSignatureDigestCalculator", modifiers: "&&", def_value: None }]
constexpr CounterSignatureDigestCalculator(CounterSignatureDigestCalculator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CounterSignatureDigestCalculator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CounterSignatureDigestCalculator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CounterSignatureDigestCalculator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CounterSignatureDigestCalculator& operator=(CounterSignatureDigestCalculator&& o) noexcept = default;
  constexpr CounterSignatureDigestCalculator& operator=(CounterSignatureDigestCalculator const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_alg, put=__set_alg))  alg;

constexpr void __set_alg(::StringW value) ;

constexpr ::StringW __get_alg() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_data() const;


// Methods

// Ctor Parameters [CppParam { name: "alg", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit CounterSignatureDigestCalculator(::StringW alg, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x1175010 size 0x2c virtual false final false
 void _ctor(::StringW alg, ::ArrayW<uint8_t> data) ;

/// @brief Method GetDigest addr 0x117503c size 0xa8 virtual true final true
 ::ArrayW<uint8_t> GetDigest() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CounterSignatureDigestCalculator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CounterSignatureDigestCalculator, "Org.BouncyCastle.Cms", "CounterSignatureDigestCalculator");
