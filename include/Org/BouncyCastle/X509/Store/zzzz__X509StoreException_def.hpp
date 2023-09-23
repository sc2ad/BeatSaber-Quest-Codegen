#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509StoreException;
}
// Type: Org.BouncyCastle.X509.Store::X509StoreException
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1844))
// CS Name: Org.BouncyCastle.X509.Store.X509StoreException
class CORDL_TYPE X509StoreException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~X509StoreException() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509StoreException", modifiers: " const&", def_value: None }]
constexpr X509StoreException(X509StoreException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509StoreException", modifiers: "&&", def_value: None }]
constexpr X509StoreException(X509StoreException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509StoreException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr X509StoreException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509StoreException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509StoreException& operator=(X509StoreException&& o) noexcept = default;
  constexpr X509StoreException& operator=(X509StoreException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit X509StoreException() ;

/// @brief Method .ctor addr 0x10e4f2c size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit X509StoreException(::StringW message) ;

/// @brief Method .ctor addr 0x10e4f84 size 0x68 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "e", ty: "System::Exception", modifiers: "", def_value: None }]
explicit X509StoreException(::StringW message, System::Exception e) ;

/// @brief Method .ctor addr 0x10e4fec size 0x70 virtual false final false
 void _ctor(::StringW message, System::Exception e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509::Store
NEED_NO_BOX(Org::BouncyCastle::X509::Store::X509StoreException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::Store::X509StoreException, "Org.BouncyCastle.X509.Store", "X509StoreException");
