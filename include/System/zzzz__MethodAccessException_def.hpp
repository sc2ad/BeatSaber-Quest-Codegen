#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MemberAccessException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class MethodAccessException;
}
// Type: System::MethodAccessException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2435))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2439))
// CS Name: System.MethodAccessException
class CORDL_TYPE MethodAccessException : public System::MemberAccessException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~MethodAccessException() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodAccessException", modifiers: " const&", def_value: None }]
constexpr MethodAccessException(MethodAccessException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodAccessException", modifiers: "&&", def_value: None }]
constexpr MethodAccessException(MethodAccessException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodAccessException(void* ptr) noexcept : System::MemberAccessException(ptr) {
}


  constexpr MethodAccessException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodAccessException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodAccessException& operator=(MethodAccessException&& o) noexcept = default;
  constexpr MethodAccessException& operator=(MethodAccessException const& o) noexcept = default;
                


// Methods

static System::MethodAccessException New_ctor() ;

/// @brief Method .ctor addr 0x2442774 size 0x5c virtual false final false
 void _ctor() ;

static System::MethodAccessException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x24427d0 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

static System::MethodAccessException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24427f4 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::MethodAccessException);
DEFINE_IL2CPP_ARG_TYPE(System::MethodAccessException, "System", "MethodAccessException");
