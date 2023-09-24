#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class GenericKey;
}
// Type: Org.BouncyCastle.Crypto.Operators::GenericKey
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1004))
// CS Name: Org.BouncyCastle.Crypto.Operators.GenericKey
class CORDL_TYPE GenericKey : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GenericKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericKey", modifiers: " const&", def_value: None }]
constexpr GenericKey(GenericKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericKey", modifiers: "&&", def_value: None }]
constexpr GenericKey(GenericKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericKey(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GenericKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericKey& operator=(GenericKey&& o) noexcept = default;
  constexpr GenericKey& operator=(GenericKey const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_algorithmIdentifier, put=__set_algorithmIdentifier))  algorithmIdentifier;

constexpr void __set_algorithmIdentifier(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_algorithmIdentifier() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_representation, put=__set_representation))  representation;

constexpr void __set_representation(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_representation() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_AlgorithmIdentifier))  AlgorithmIdentifier;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Representation))  Representation;


// Methods

static Org::BouncyCastle::Crypto::Operators::GenericKey New_ctor(::bs_hook::Il2CppWrapperType representation) ;

/// @brief Method .ctor addr 0xea0f40 size 0x28 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType representation) ;

static Org::BouncyCastle::Crypto::Operators::GenericKey New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algorithmIdentifier, ::ArrayW<uint8_t> representation) ;

/// @brief Method .ctor addr 0xea0f68 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algorithmIdentifier, ::ArrayW<uint8_t> representation) ;

static Org::BouncyCastle::Crypto::Operators::GenericKey New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algorithmIdentifier, ::bs_hook::Il2CppWrapperType representation) ;

/// @brief Method .ctor addr 0xea0f94 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algorithmIdentifier, ::bs_hook::Il2CppWrapperType representation) ;

/// @brief Method get_AlgorithmIdentifier addr 0xea0fc0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_AlgorithmIdentifier() ;

/// @brief Method get_Representation addr 0xea0fc8 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Representation() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Operators::GenericKey);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Operators::GenericKey, "Org.BouncyCastle.Crypto.Operators", "GenericKey");
