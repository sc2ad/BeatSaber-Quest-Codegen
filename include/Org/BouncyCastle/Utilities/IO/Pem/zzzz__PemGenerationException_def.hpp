#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemGenerationException;
}
// Type: Org.BouncyCastle.Utilities.IO.Pem::PemGenerationException
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1804))
// CS Name: Org.BouncyCastle.Utilities.IO.Pem.PemGenerationException
class CORDL_TYPE PemGenerationException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PemGenerationException() = default;

// Ctor Parameters [CppParam { name: "", ty: "PemGenerationException", modifiers: " const&", def_value: None }]
constexpr PemGenerationException(PemGenerationException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PemGenerationException", modifiers: "&&", def_value: None }]
constexpr PemGenerationException(PemGenerationException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PemGenerationException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr PemGenerationException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PemGenerationException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PemGenerationException& operator=(PemGenerationException&& o) noexcept = default;
  constexpr PemGenerationException& operator=(PemGenerationException const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException New_ctor() ;

/// @brief Method .ctor addr 0x10d3620 size 0x58 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x10d3678 size 0x68 virtual false final false
 void _ctor(::StringW message) ;

static Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException New_ctor(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x10d36e0 size 0x70 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO::Pem
NEED_NO_BOX(Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException, "Org.BouncyCastle.Utilities.IO.Pem", "PemGenerationException");
