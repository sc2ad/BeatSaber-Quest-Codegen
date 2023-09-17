#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509CollectionStore;
}
// Type: Org.BouncyCastle.X509.Store::X509CollectionStore
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1848))
// CS Name: Org.BouncyCastle.X509.Store.X509CollectionStore
class CORDL_TYPE X509CollectionStore : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::X509::Store::IX509Store
constexpr operator  ::Org::BouncyCastle::X509::Store::IX509Store() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X509CollectionStore() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CollectionStore", modifiers: " const&", def_value: None }]
constexpr X509CollectionStore(X509CollectionStore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CollectionStore", modifiers: "&&", def_value: None }]
constexpr X509CollectionStore(X509CollectionStore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509CollectionStore(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509CollectionStore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509CollectionStore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509CollectionStore& operator=(X509CollectionStore&& o) noexcept = default;
  constexpr X509CollectionStore& operator=(X509CollectionStore const& o) noexcept = default;
                


// Fields

 ::System::Collections::ICollection __declspec(property(get=__get__local, put=__set__local))  _local;

constexpr void __set__local(::System::Collections::ICollection value) ;

constexpr ::System::Collections::ICollection __get__local() const;


// Methods

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Collections::ICollection", modifiers: "", def_value: None }]
explicit X509CollectionStore(::System::Collections::ICollection collection) ;

/// @brief Method .ctor addr 0x10e64a4 size 0x74 virtual false final false
 void _ctor(::System::Collections::ICollection collection) ;

/// @brief Method GetMatches addr 0x10e6518 size 0x448 virtual true final true
 ::System::Collections::ICollection GetMatches(::Org::BouncyCastle::X509::Store::IX509Selector selector) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509::Store
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::X509CollectionStore);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::X509CollectionStore, "Org.BouncyCastle.X509.Store", "X509CollectionStore");
