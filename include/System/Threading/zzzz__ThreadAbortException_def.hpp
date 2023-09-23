#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Threading {
class ThreadAbortException;
}
// Type: System.Threading::ThreadAbortException
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2724))
// CS Name: System.Threading.ThreadAbortException
class CORDL_TYPE ThreadAbortException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ThreadAbortException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadAbortException", modifiers: " const&", def_value: None }]
constexpr ThreadAbortException(ThreadAbortException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadAbortException", modifiers: "&&", def_value: None }]
constexpr ThreadAbortException(ThreadAbortException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadAbortException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr ThreadAbortException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadAbortException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadAbortException& operator=(ThreadAbortException&& o) noexcept = default;
  constexpr ThreadAbortException& operator=(ThreadAbortException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ThreadAbortException() ;

/// @brief Method .ctor addr 0x24aceb0 size 0x7c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ThreadAbortException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24acf2c size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::ThreadAbortException);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadAbortException, "System.Threading", "ThreadAbortException");
