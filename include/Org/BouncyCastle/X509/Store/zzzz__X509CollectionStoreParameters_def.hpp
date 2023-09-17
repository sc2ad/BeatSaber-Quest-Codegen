#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::X509::Store {
class IX509StoreParameters;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509CollectionStoreParameters;
}
// Type: Org.BouncyCastle.X509.Store::X509CollectionStoreParameters
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1849))
// CS Name: Org.BouncyCastle.X509.Store.X509CollectionStoreParameters
class CORDL_TYPE X509CollectionStoreParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::X509::Store::IX509StoreParameters
constexpr operator  ::Org::BouncyCastle::X509::Store::IX509StoreParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X509CollectionStoreParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CollectionStoreParameters", modifiers: " const&", def_value: None }]
constexpr X509CollectionStoreParameters(X509CollectionStoreParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CollectionStoreParameters", modifiers: "&&", def_value: None }]
constexpr X509CollectionStoreParameters(X509CollectionStoreParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509CollectionStoreParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509CollectionStoreParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509CollectionStoreParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509CollectionStoreParameters& operator=(X509CollectionStoreParameters&& o) noexcept = default;
  constexpr X509CollectionStoreParameters& operator=(X509CollectionStoreParameters const& o) noexcept = default;
                


// Fields

 ::System::Collections::IList __declspec(property(get=__get_collection, put=__set_collection))  collection;

constexpr void __set_collection(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_collection() const;


// Methods

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::ICollection", modifiers: "", def_value: None }]
explicit X509CollectionStoreParameters(::System::Collections::ICollection collection) ;

/// @brief Method .ctor addr 0x10e6960 size 0xbc virtual false final false
 void _ctor(::System::Collections::ICollection collection) ;

/// @brief Method GetCollection addr 0x10e6a1c size 0x58 virtual false final false
 ::System::Collections::ICollection GetCollection() ;

/// @brief Method ToString addr 0x10e6a74 size 0x108 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509::Store
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters, "Org.BouncyCastle.X509.Store", "X509CollectionStoreParameters");
