#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::X509::Store {
class IX509StoreParameters;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509StoreFactory;
}
// Type: Org.BouncyCastle.X509.Store::X509StoreFactory
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1851))
// CS Name: Org.BouncyCastle.X509.Store.X509StoreFactory
class CORDL_TYPE X509StoreFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509StoreFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509StoreFactory", modifiers: " const&", def_value: None }]
constexpr X509StoreFactory(X509StoreFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509StoreFactory", modifiers: "&&", def_value: None }]
constexpr X509StoreFactory(X509StoreFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509StoreFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509StoreFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509StoreFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509StoreFactory& operator=(X509StoreFactory&& o) noexcept = default;
  constexpr X509StoreFactory& operator=(X509StoreFactory const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::X509::Store::X509StoreFactory New_ctor() ;

/// @brief Method .ctor addr 0x10e754c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x10e7554 size 0x3b8 virtual false final false
static Org::BouncyCastle::X509::Store::IX509Store Create(::StringW type, Org::BouncyCastle::X509::Store::IX509StoreParameters parameters) ;

/// @brief Method checkCorrectType addr 0x10e790c size 0x380 virtual false final false
static void checkCorrectType(System::Collections::ICollection coll, System::Type t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509::Store
NEED_NO_BOX(Org::BouncyCastle::X509::Store::X509StoreFactory);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::Store::X509StoreFactory, "Org.BouncyCastle.X509.Store", "X509StoreFactory");
