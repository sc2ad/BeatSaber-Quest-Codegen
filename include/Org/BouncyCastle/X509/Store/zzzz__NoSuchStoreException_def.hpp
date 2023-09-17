#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509StoreException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class NoSuchStoreException;
}
// Type: Org.BouncyCastle.X509.Store::NoSuchStoreException
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1844))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1845))
// CS Name: Org.BouncyCastle.X509.Store.NoSuchStoreException
class CORDL_TYPE NoSuchStoreException : public ::Org::BouncyCastle::X509::Store::X509StoreException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~NoSuchStoreException() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoSuchStoreException", modifiers: " const&", def_value: None }]
constexpr NoSuchStoreException(NoSuchStoreException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoSuchStoreException", modifiers: "&&", def_value: None }]
constexpr NoSuchStoreException(NoSuchStoreException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoSuchStoreException(void* ptr) noexcept : ::Org::BouncyCastle::X509::Store::X509StoreException(ptr) {
}


  constexpr NoSuchStoreException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoSuchStoreException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoSuchStoreException& operator=(NoSuchStoreException&& o) noexcept = default;
  constexpr NoSuchStoreException& operator=(NoSuchStoreException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NoSuchStoreException() ;

/// @brief Method .ctor addr 0x10e505c size 0x4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit NoSuchStoreException(::StringW message) ;

/// @brief Method .ctor addr 0x10e5060 size 0x4 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "e", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit NoSuchStoreException(::StringW message, ::System::Exception e) ;

/// @brief Method .ctor addr 0x10e5064 size 0x4 virtual false final false
 void _ctor(::StringW message, ::System::Exception e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509::Store
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::NoSuchStoreException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::NoSuchStoreException, "Org.BouncyCastle.X509.Store", "NoSuchStoreException");
