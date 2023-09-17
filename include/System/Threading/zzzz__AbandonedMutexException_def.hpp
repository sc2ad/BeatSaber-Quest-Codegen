#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Threading {
class WaitHandle;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Threading {
class Mutex;
}
// Forward declare root types
namespace System::Threading {
class AbandonedMutexException;
}
// Type: System.Threading::AbandonedMutexException
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2655))
// CS Name: System.Threading.AbandonedMutexException
class CORDL_TYPE AbandonedMutexException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~AbandonedMutexException() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbandonedMutexException", modifiers: " const&", def_value: None }]
constexpr AbandonedMutexException(AbandonedMutexException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbandonedMutexException", modifiers: "&&", def_value: None }]
constexpr AbandonedMutexException(AbandonedMutexException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbandonedMutexException(void* ptr) noexcept : ::System::SystemException(ptr) {
}


  constexpr AbandonedMutexException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbandonedMutexException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbandonedMutexException& operator=(AbandonedMutexException&& o) noexcept = default;
  constexpr AbandonedMutexException& operator=(AbandonedMutexException const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__mutexIndex, put=__set__mutexIndex))  _mutexIndex;

constexpr void __set__mutexIndex(int32_t value) ;

constexpr int32_t __get__mutexIndex() const;

 ::System::Threading::Mutex __declspec(property(get=__get__mutex, put=__set__mutex))  _mutex;

constexpr void __set__mutex(::System::Threading::Mutex value) ;

constexpr ::System::Threading::Mutex __get__mutex() const;


// Methods

// Ctor Parameters []
explicit AbandonedMutexException() ;

/// @brief Method .ctor addr 0x24a25fc size 0x64 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "location", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "handle", ty: "::System::Threading::WaitHandle", modifiers: "", def_value: None }]
explicit AbandonedMutexException(int32_t location, ::System::Threading::WaitHandle handle) ;

/// @brief Method .ctor addr 0x24a2660 size 0xb8 virtual false final false
 void _ctor(int32_t location, ::System::Threading::WaitHandle handle) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit AbandonedMutexException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24a2784 size 0x10 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method SetupException addr 0x24a2718 size 0x6c virtual false final false
 void SetupException(int32_t location, ::System::Threading::WaitHandle handle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::AbandonedMutexException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::AbandonedMutexException, "System.Threading", "AbandonedMutexException");
