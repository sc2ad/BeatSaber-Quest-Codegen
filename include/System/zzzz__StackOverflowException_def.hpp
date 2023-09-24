#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class StackOverflowException;
}
// Type: System::StackOverflowException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2472))
// CS Name: System.StackOverflowException
class CORDL_TYPE StackOverflowException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~StackOverflowException() = default;

// Ctor Parameters [CppParam { name: "", ty: "StackOverflowException", modifiers: " const&", def_value: None }]
constexpr StackOverflowException(StackOverflowException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StackOverflowException", modifiers: "&&", def_value: None }]
constexpr StackOverflowException(StackOverflowException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StackOverflowException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr StackOverflowException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StackOverflowException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StackOverflowException& operator=(StackOverflowException&& o) noexcept = default;
  constexpr StackOverflowException& operator=(StackOverflowException const& o) noexcept = default;
                


// Methods

static System::StackOverflowException New_ctor() ;

/// @brief Method .ctor addr 0x2456940 size 0x58 virtual false final false
 void _ctor() ;

static System::StackOverflowException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x2456998 size 0x20 virtual false final false
 void _ctor(::StringW message) ;

static System::StackOverflowException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24569b8 size 0x4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::StackOverflowException);
DEFINE_IL2CPP_ARG_TYPE(System::StackOverflowException, "System", "StackOverflowException");
