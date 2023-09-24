#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class InvalidTimeZoneException;
}
// Type: System::InvalidTimeZoneException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2428))
// CS Name: System.InvalidTimeZoneException
class CORDL_TYPE InvalidTimeZoneException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~InvalidTimeZoneException() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidTimeZoneException", modifiers: " const&", def_value: None }]
constexpr InvalidTimeZoneException(InvalidTimeZoneException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidTimeZoneException", modifiers: "&&", def_value: None }]
constexpr InvalidTimeZoneException(InvalidTimeZoneException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvalidTimeZoneException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr InvalidTimeZoneException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvalidTimeZoneException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvalidTimeZoneException& operator=(InvalidTimeZoneException&& o) noexcept = default;
  constexpr InvalidTimeZoneException& operator=(InvalidTimeZoneException const& o) noexcept = default;
                


// Methods

static System::InvalidTimeZoneException New_ctor() ;

/// @brief Method .ctor addr 0x2440838 size 0x58 virtual false final false
 void _ctor() ;

static System::InvalidTimeZoneException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x2440890 size 0x68 virtual false final false
 void _ctor(::StringW message) ;

static System::InvalidTimeZoneException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24408f8 size 0x80 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::InvalidTimeZoneException);
DEFINE_IL2CPP_ARG_TYPE(System::InvalidTimeZoneException, "System", "InvalidTimeZoneException");
