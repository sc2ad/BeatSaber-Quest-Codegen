#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__DataLengthException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class OutputLengthException;
}
// Type: Org.BouncyCastle.Crypto::OutputLengthException
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1348))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1352))
// CS Name: Org.BouncyCastle.Crypto.OutputLengthException
class CORDL_TYPE OutputLengthException : public ::Org::BouncyCastle::Crypto::DataLengthException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~OutputLengthException() = default;

// Ctor Parameters [CppParam { name: "", ty: "OutputLengthException", modifiers: " const&", def_value: None }]
constexpr OutputLengthException(OutputLengthException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OutputLengthException", modifiers: "&&", def_value: None }]
constexpr OutputLengthException(OutputLengthException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OutputLengthException(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::DataLengthException(ptr) {
}


  constexpr OutputLengthException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OutputLengthException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OutputLengthException& operator=(OutputLengthException&& o) noexcept = default;
  constexpr OutputLengthException& operator=(OutputLengthException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit OutputLengthException() ;

/// @brief Method .ctor addr 0xf38804 size 0x4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit OutputLengthException(::StringW message) ;

/// @brief Method .ctor addr 0xf386a8 size 0x4 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit OutputLengthException(::StringW message, ::System::Exception exception) ;

/// @brief Method .ctor addr 0xf38808 size 0x4 virtual false final false
 void _ctor(::StringW message, ::System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::OutputLengthException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::OutputLengthException, "Org.BouncyCastle.Crypto", "OutputLengthException");
