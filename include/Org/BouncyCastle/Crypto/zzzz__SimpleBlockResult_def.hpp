#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class SimpleBlockResult;
}
// Type: Org.BouncyCastle.Crypto::SimpleBlockResult
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1354))
// CS Name: Org.BouncyCastle.Crypto.SimpleBlockResult
class CORDL_TYPE SimpleBlockResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockResult
constexpr operator  Org::BouncyCastle::Crypto::IBlockResult() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SimpleBlockResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleBlockResult", modifiers: " const&", def_value: None }]
constexpr SimpleBlockResult(SimpleBlockResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleBlockResult", modifiers: "&&", def_value: None }]
constexpr SimpleBlockResult(SimpleBlockResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleBlockResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SimpleBlockResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleBlockResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleBlockResult& operator=(SimpleBlockResult&& o) noexcept = default;
  constexpr SimpleBlockResult& operator=(SimpleBlockResult const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_result, put=__set_result))  result;

constexpr void __set_result(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_result() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

static Org::BouncyCastle::Crypto::SimpleBlockResult New_ctor(::ArrayW<uint8_t> result) ;

/// @brief Method .ctor addr 0xf38e58 size 0x28 virtual false final false
 void _ctor(::ArrayW<uint8_t> result) ;

/// @brief Method get_Length addr 0xf38e80 size 0x1c virtual false final false
 int32_t get_Length() ;

/// @brief Method Collect addr 0xf38e9c size 0x8 virtual true final true
 ::ArrayW<uint8_t> Collect() ;

/// @brief Method Collect addr 0xf38ea4 size 0x40 virtual true final true
 int32_t Collect(::ArrayW<uint8_t> destination, int32_t offset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::SimpleBlockResult);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::SimpleBlockResult, "Org.BouncyCastle.Crypto", "SimpleBlockResult");
