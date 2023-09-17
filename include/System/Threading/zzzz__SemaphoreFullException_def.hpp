#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
namespace {
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Threading {
class SemaphoreFullException;
}
// Type: System.Threading::SemaphoreFullException
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2666))
// CS Name: System.Threading.SemaphoreFullException
class CORDL_TYPE SemaphoreFullException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~SemaphoreFullException() = default;

// Ctor Parameters [CppParam { name: "", ty: "SemaphoreFullException", modifiers: " const&", def_value: None }]
constexpr SemaphoreFullException(SemaphoreFullException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SemaphoreFullException", modifiers: "&&", def_value: None }]
constexpr SemaphoreFullException(SemaphoreFullException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SemaphoreFullException(void* ptr) noexcept : ::System::SystemException(ptr) {
}


  constexpr SemaphoreFullException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SemaphoreFullException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SemaphoreFullException& operator=(SemaphoreFullException&& o) noexcept = default;
  constexpr SemaphoreFullException& operator=(SemaphoreFullException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SemaphoreFullException() ;

/// @brief Method .ctor addr 0x24a2ac0 size 0x4c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit SemaphoreFullException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24a2b0c size 0x8 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::SemaphoreFullException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SemaphoreFullException, "System.Threading", "SemaphoreFullException");
