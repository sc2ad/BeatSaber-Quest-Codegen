#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class EncryptionException;
}
// Type: Org.BouncyCastle.Security::EncryptionException
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1679))
// CS Name: Org.BouncyCastle.Security.EncryptionException
class CORDL_TYPE EncryptionException : public System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~EncryptionException() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptionException", modifiers: " const&", def_value: None }]
constexpr EncryptionException(EncryptionException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptionException", modifiers: "&&", def_value: None }]
constexpr EncryptionException(EncryptionException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncryptionException(void* ptr) noexcept : System::IO::IOException(ptr) {
}


  constexpr EncryptionException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncryptionException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncryptionException& operator=(EncryptionException&& o) noexcept = default;
  constexpr EncryptionException& operator=(EncryptionException const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Security::EncryptionException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x1043c58 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

static Org::BouncyCastle::Security::EncryptionException New_ctor(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x1043c60 size 0x8 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(Org::BouncyCastle::Security::EncryptionException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::EncryptionException, "Org.BouncyCastle.Security", "EncryptionException");
