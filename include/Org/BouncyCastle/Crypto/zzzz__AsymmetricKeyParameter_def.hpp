#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Type: Org.BouncyCastle.Crypto::AsymmetricKeyParameter
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1020))
// CS Name: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
class CORDL_TYPE AsymmetricKeyParameter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  ::Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AsymmetricKeyParameter() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricKeyParameter", modifiers: " const&", def_value: None }]
constexpr AsymmetricKeyParameter(AsymmetricKeyParameter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricKeyParameter", modifiers: "&&", def_value: None }]
constexpr AsymmetricKeyParameter(AsymmetricKeyParameter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsymmetricKeyParameter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsymmetricKeyParameter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsymmetricKeyParameter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsymmetricKeyParameter& operator=(AsymmetricKeyParameter&& o) noexcept = default;
  constexpr AsymmetricKeyParameter& operator=(AsymmetricKeyParameter const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_privateKey, put=__set_privateKey))  privateKey;

constexpr void __set_privateKey(bool value) ;

constexpr bool __get_privateKey() const;


// Properties

 bool __declspec(property(get=get_IsPrivate))  IsPrivate;


// Methods

// Ctor Parameters [CppParam { name: "privateKey", ty: "bool", modifiers: "", def_value: None }]
explicit AsymmetricKeyParameter(bool privateKey) ;

/// @brief Method .ctor addr 0xea3254 size 0x28 virtual false final false
 void _ctor(bool privateKey) ;

/// @brief Method get_IsPrivate addr 0xea327c size 0x8 virtual false final false
 bool get_IsPrivate() ;

/// @brief Method Equals addr 0xea3284 size 0x98 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea331c size 0x24 virtual false final false
 bool Equals(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter other) ;

/// @brief Method GetHashCode addr 0xea3340 size 0x20 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, "Org.BouncyCastle.Crypto", "AsymmetricKeyParameter");
