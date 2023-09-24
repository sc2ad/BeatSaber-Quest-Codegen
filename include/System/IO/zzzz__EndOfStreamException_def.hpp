#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::IO {
class EndOfStreamException;
}
// Type: System.IO::EndOfStreamException
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3549))
// CS Name: System.IO.EndOfStreamException
class CORDL_TYPE EndOfStreamException : public System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~EndOfStreamException() = default;

// Ctor Parameters [CppParam { name: "", ty: "EndOfStreamException", modifiers: " const&", def_value: None }]
constexpr EndOfStreamException(EndOfStreamException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EndOfStreamException", modifiers: "&&", def_value: None }]
constexpr EndOfStreamException(EndOfStreamException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EndOfStreamException(void* ptr) noexcept : System::IO::IOException(ptr) {
}


  constexpr EndOfStreamException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EndOfStreamException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EndOfStreamException& operator=(EndOfStreamException&& o) noexcept = default;
  constexpr EndOfStreamException& operator=(EndOfStreamException const& o) noexcept = default;
                


// Methods

static System::IO::EndOfStreamException New_ctor() ;

/// @brief Method .ctor addr 0x238ed88 size 0x5c virtual false final false
 void _ctor() ;

static System::IO::EndOfStreamException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x238ede4 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

static System::IO::EndOfStreamException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x238ee08 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::EndOfStreamException);
DEFINE_IL2CPP_ARG_TYPE(System::IO::EndOfStreamException, "System.IO", "EndOfStreamException");
