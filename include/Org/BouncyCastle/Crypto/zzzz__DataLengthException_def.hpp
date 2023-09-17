#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CryptoException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class DataLengthException;
}
// Type: Org.BouncyCastle.Crypto::DataLengthException
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1348))
// CS Name: Org.BouncyCastle.Crypto.DataLengthException
class CORDL_TYPE DataLengthException : public ::Org::BouncyCastle::Crypto::CryptoException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~DataLengthException() = default;

// Ctor Parameters [CppParam { name: "", ty: "DataLengthException", modifiers: " const&", def_value: None }]
constexpr DataLengthException(DataLengthException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DataLengthException", modifiers: "&&", def_value: None }]
constexpr DataLengthException(DataLengthException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DataLengthException(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::CryptoException(ptr) {
}


  constexpr DataLengthException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DataLengthException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DataLengthException& operator=(DataLengthException&& o) noexcept = default;
  constexpr DataLengthException& operator=(DataLengthException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DataLengthException() ;

/// @brief Method .ctor addr 0xf387e4 size 0x4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit DataLengthException(::StringW message) ;

/// @brief Method .ctor addr 0xf37678 size 0x4 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit DataLengthException(::StringW message, ::System::Exception exception) ;

/// @brief Method .ctor addr 0xf387e8 size 0x4 virtual false final false
 void _ctor(::StringW message, ::System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::DataLengthException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::DataLengthException, "Org.BouncyCastle.Crypto", "DataLengthException");
