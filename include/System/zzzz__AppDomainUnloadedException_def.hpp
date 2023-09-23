#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class AppDomainUnloadedException;
}
// Type: System::AppDomainUnloadedException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2523))
// CS Name: System.AppDomainUnloadedException
class CORDL_TYPE AppDomainUnloadedException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~AppDomainUnloadedException() = default;

// Ctor Parameters [CppParam { name: "", ty: "AppDomainUnloadedException", modifiers: " const&", def_value: None }]
constexpr AppDomainUnloadedException(AppDomainUnloadedException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AppDomainUnloadedException", modifiers: "&&", def_value: None }]
constexpr AppDomainUnloadedException(AppDomainUnloadedException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AppDomainUnloadedException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr AppDomainUnloadedException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AppDomainUnloadedException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AppDomainUnloadedException& operator=(AppDomainUnloadedException&& o) noexcept = default;
  constexpr AppDomainUnloadedException& operator=(AppDomainUnloadedException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AppDomainUnloadedException() ;

/// @brief Method .ctor addr 0x2462e9c size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit AppDomainUnloadedException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2462ef4 size 0x4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::AppDomainUnloadedException);
DEFINE_IL2CPP_ARG_TYPE(System::AppDomainUnloadedException, "System", "AppDomainUnloadedException");
