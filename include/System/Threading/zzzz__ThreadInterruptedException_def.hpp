#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
namespace {
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Threading {
class ThreadInterruptedException;
}
// Type: System.Threading::ThreadInterruptedException
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2725))
// CS Name: System.Threading.ThreadInterruptedException
class CORDL_TYPE ThreadInterruptedException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ThreadInterruptedException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadInterruptedException", modifiers: " const&", def_value: None }]
constexpr ThreadInterruptedException(ThreadInterruptedException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadInterruptedException", modifiers: "&&", def_value: None }]
constexpr ThreadInterruptedException(ThreadInterruptedException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadInterruptedException(void* ptr) noexcept : ::System::SystemException(ptr) {
}


  constexpr ThreadInterruptedException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadInterruptedException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadInterruptedException& operator=(ThreadInterruptedException&& o) noexcept = default;
  constexpr ThreadInterruptedException& operator=(ThreadInterruptedException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ThreadInterruptedException() ;

/// @brief Method .ctor addr 0x24acf34 size 0x7c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ThreadInterruptedException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24acfb0 size 0x8 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::ThreadInterruptedException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadInterruptedException, "System.Threading", "ThreadInterruptedException");
