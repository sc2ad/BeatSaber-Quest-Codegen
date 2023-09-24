#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class CannotUnloadAppDomainException;
}
// Type: System::CannotUnloadAppDomainException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2524))
// CS Name: System.CannotUnloadAppDomainException
class CORDL_TYPE CannotUnloadAppDomainException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CannotUnloadAppDomainException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CannotUnloadAppDomainException", modifiers: " const&", def_value: None }]
constexpr CannotUnloadAppDomainException(CannotUnloadAppDomainException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CannotUnloadAppDomainException", modifiers: "&&", def_value: None }]
constexpr CannotUnloadAppDomainException(CannotUnloadAppDomainException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CannotUnloadAppDomainException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr CannotUnloadAppDomainException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CannotUnloadAppDomainException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CannotUnloadAppDomainException& operator=(CannotUnloadAppDomainException&& o) noexcept = default;
  constexpr CannotUnloadAppDomainException& operator=(CannotUnloadAppDomainException const& o) noexcept = default;
                


// Methods

static System::CannotUnloadAppDomainException New_ctor() ;

/// @brief Method .ctor addr 0x2462ef8 size 0x58 virtual false final false
 void _ctor() ;

static System::CannotUnloadAppDomainException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x2462f50 size 0x20 virtual false final false
 void _ctor(::StringW message) ;

static System::CannotUnloadAppDomainException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2462f70 size 0x4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::CannotUnloadAppDomainException);
DEFINE_IL2CPP_ARG_TYPE(System::CannotUnloadAppDomainException, "System", "CannotUnloadAppDomainException");
