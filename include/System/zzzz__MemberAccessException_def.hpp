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
class MemberAccessException;
}
// Type: System::MemberAccessException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2435))
// CS Name: System.MemberAccessException
class CORDL_TYPE MemberAccessException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~MemberAccessException() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberAccessException", modifiers: " const&", def_value: None }]
constexpr MemberAccessException(MemberAccessException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberAccessException", modifiers: "&&", def_value: None }]
constexpr MemberAccessException(MemberAccessException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemberAccessException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr MemberAccessException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemberAccessException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemberAccessException& operator=(MemberAccessException&& o) noexcept = default;
  constexpr MemberAccessException& operator=(MemberAccessException const& o) noexcept = default;
                


// Methods

static System::MemberAccessException New_ctor() ;

/// @brief Method .ctor addr 0x2441ca0 size 0x5c virtual false final false
 void _ctor() ;

static System::MemberAccessException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x2441cfc size 0x24 virtual false final false
 void _ctor(::StringW message) ;

static System::MemberAccessException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2441d20 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::MemberAccessException);
DEFINE_IL2CPP_ARG_TYPE(System::MemberAccessException, "System", "MemberAccessException");
