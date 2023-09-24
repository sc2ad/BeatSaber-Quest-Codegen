#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class StreamOverflowException;
}
// Type: Org.BouncyCastle.Utilities.IO::StreamOverflowException
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1812))
// CS Name: Org.BouncyCastle.Utilities.IO.StreamOverflowException
class CORDL_TYPE StreamOverflowException : public System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~StreamOverflowException() = default;

// Ctor Parameters [CppParam { name: "", ty: "StreamOverflowException", modifiers: " const&", def_value: None }]
constexpr StreamOverflowException(StreamOverflowException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StreamOverflowException", modifiers: "&&", def_value: None }]
constexpr StreamOverflowException(StreamOverflowException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StreamOverflowException(void* ptr) noexcept : System::IO::IOException(ptr) {
}


  constexpr StreamOverflowException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StreamOverflowException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StreamOverflowException& operator=(StreamOverflowException&& o) noexcept = default;
  constexpr StreamOverflowException& operator=(StreamOverflowException const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Utilities::IO::StreamOverflowException New_ctor() ;

/// @brief Method .ctor addr 0x10d3b04 size 0x8 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Utilities::IO::StreamOverflowException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x10d3b0c size 0x8 virtual false final false
 void _ctor(::StringW message) ;

static Org::BouncyCastle::Utilities::IO::StreamOverflowException New_ctor(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x10d3b14 size 0x8 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(Org::BouncyCastle::Utilities::IO::StreamOverflowException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::StreamOverflowException, "Org.BouncyCastle.Utilities.IO", "StreamOverflowException");
