#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Threading {
class SynchronizationLockException;
}
// Type: System.Threading::SynchronizationLockException
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2668))
// CS Name: System.Threading.SynchronizationLockException
class CORDL_TYPE SynchronizationLockException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~SynchronizationLockException() = default;

// Ctor Parameters [CppParam { name: "", ty: "SynchronizationLockException", modifiers: " const&", def_value: None }]
constexpr SynchronizationLockException(SynchronizationLockException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SynchronizationLockException", modifiers: "&&", def_value: None }]
constexpr SynchronizationLockException(SynchronizationLockException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SynchronizationLockException(void* ptr) noexcept : ::System::SystemException(ptr) {
}


  constexpr SynchronizationLockException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SynchronizationLockException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SynchronizationLockException& operator=(SynchronizationLockException&& o) noexcept = default;
  constexpr SynchronizationLockException& operator=(SynchronizationLockException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SynchronizationLockException() ;

/// @brief Method .ctor addr 0x24a2c54 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit SynchronizationLockException(::StringW message) ;

/// @brief Method .ctor addr 0x24a2cb0 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit SynchronizationLockException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24a2cd4 size 0x8 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::SynchronizationLockException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SynchronizationLockException, "System.Threading", "SynchronizationLockException");
