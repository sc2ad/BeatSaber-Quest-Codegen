#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__ApplicationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Reflection {
class InvalidFilterCriteriaException;
}
// Type: System.Reflection::InvalidFilterCriteriaException
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2343))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3464))
// CS Name: System.Reflection.InvalidFilterCriteriaException
class CORDL_TYPE InvalidFilterCriteriaException : public System::ApplicationException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~InvalidFilterCriteriaException() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidFilterCriteriaException", modifiers: " const&", def_value: None }]
constexpr InvalidFilterCriteriaException(InvalidFilterCriteriaException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidFilterCriteriaException", modifiers: "&&", def_value: None }]
constexpr InvalidFilterCriteriaException(InvalidFilterCriteriaException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvalidFilterCriteriaException(void* ptr) noexcept : System::ApplicationException(ptr) {
}


  constexpr InvalidFilterCriteriaException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvalidFilterCriteriaException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvalidFilterCriteriaException& operator=(InvalidFilterCriteriaException&& o) noexcept = default;
  constexpr InvalidFilterCriteriaException& operator=(InvalidFilterCriteriaException const& o) noexcept = default;
                


// Methods

static System::Reflection::InvalidFilterCriteriaException New_ctor() ;

/// @brief Method .ctor addr 0x237a564 size 0x60 virtual false final false
 void _ctor() ;

static System::Reflection::InvalidFilterCriteriaException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x237a5c4 size 0x28 virtual false final false
 void _ctor(::StringW message) ;

static System::Reflection::InvalidFilterCriteriaException New_ctor(::StringW message, System::Exception inner) ;

/// @brief Method .ctor addr 0x237a5ec size 0x24 virtual false final false
 void _ctor(::StringW message, System::Exception inner) ;

static System::Reflection::InvalidFilterCriteriaException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x237a610 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::InvalidFilterCriteriaException);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::InvalidFilterCriteriaException, "System.Reflection", "InvalidFilterCriteriaException");
