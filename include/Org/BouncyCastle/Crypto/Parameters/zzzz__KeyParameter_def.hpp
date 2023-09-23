#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Type: Org.BouncyCastle.Crypto.Parameters::KeyParameter
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1015))
// CS Name: Org.BouncyCastle.Crypto.Parameters.KeyParameter
class CORDL_TYPE KeyParameter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~KeyParameter() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyParameter", modifiers: " const&", def_value: None }]
constexpr KeyParameter(KeyParameter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyParameter", modifiers: "&&", def_value: None }]
constexpr KeyParameter(KeyParameter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyParameter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KeyParameter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyParameter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyParameter& operator=(KeyParameter&& o) noexcept = default;
  constexpr KeyParameter& operator=(KeyParameter const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_key() const;


// Methods

// Ctor Parameters [CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit KeyParameter(::ArrayW<uint8_t> key) ;

/// @brief Method .ctor addr 0xe9b1bc size 0x100 virtual false final false
 void _ctor(::ArrayW<uint8_t> key) ;

// Ctor Parameters [CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "keyOff", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyLen", ty: "int32_t", modifiers: "", def_value: None }]
explicit KeyParameter(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen) ;

/// @brief Method .ctor addr 0xea2560 size 0x150 virtual false final false
 void _ctor(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen) ;

/// @brief Method GetKey addr 0xe91c24 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetKey() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::KeyParameter);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::KeyParameter, "Org.BouncyCastle.Crypto.Parameters", "KeyParameter");
