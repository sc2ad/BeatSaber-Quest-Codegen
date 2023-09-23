#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs12Entry_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class AsymmetricKeyEntry;
}
// Type: Org.BouncyCastle.Pkcs::AsymmetricKeyEntry
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1693))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1694))
// CS Name: Org.BouncyCastle.Pkcs.AsymmetricKeyEntry
class CORDL_TYPE AsymmetricKeyEntry : public Org::BouncyCastle::Pkcs::Pkcs12Entry {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AsymmetricKeyEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricKeyEntry", modifiers: " const&", def_value: None }]
constexpr AsymmetricKeyEntry(AsymmetricKeyEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricKeyEntry", modifiers: "&&", def_value: None }]
constexpr AsymmetricKeyEntry(AsymmetricKeyEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsymmetricKeyEntry(void* ptr) noexcept : Org::BouncyCastle::Pkcs::Pkcs12Entry(ptr) {
}


  constexpr AsymmetricKeyEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsymmetricKeyEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsymmetricKeyEntry& operator=(AsymmetricKeyEntry&& o) noexcept = default;
  constexpr AsymmetricKeyEntry& operator=(AsymmetricKeyEntry const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_key() const;


// Properties

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=get_Key))  Key;


// Methods

// Ctor Parameters [CppParam { name: "key", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit AsymmetricKeyEntry(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key) ;

/// @brief Method .ctor addr 0x1049d4c size 0x74 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key) ;

// Ctor Parameters [CppParam { name: "key", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }]
explicit AsymmetricKeyEntry(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, System::Collections::Hashtable attributes) ;

/// @brief Method .ctor addr 0x1049dc0 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, System::Collections::Hashtable attributes) ;

// Ctor Parameters [CppParam { name: "key", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "System::Collections::IDictionary", modifiers: "", def_value: None }]
explicit AsymmetricKeyEntry(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, System::Collections::IDictionary attributes) ;

/// @brief Method .ctor addr 0x1049de8 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, System::Collections::IDictionary attributes) ;

/// @brief Method get_Key addr 0x1049e10 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::AsymmetricKeyParameter get_Key() ;

/// @brief Method Equals addr 0x1049e18 size 0xa4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x1049ebc size 0x28 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Pkcs::AsymmetricKeyEntry);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkcs::AsymmetricKeyEntry, "Org.BouncyCastle.Pkcs", "AsymmetricKeyEntry");
