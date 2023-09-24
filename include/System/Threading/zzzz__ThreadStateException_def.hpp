#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Threading {
class ThreadStateException;
}
// Type: System.Threading::ThreadStateException
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2672))
// CS Name: System.Threading.ThreadStateException
class CORDL_TYPE ThreadStateException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ThreadStateException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadStateException", modifiers: " const&", def_value: None }]
constexpr ThreadStateException(ThreadStateException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadStateException", modifiers: "&&", def_value: None }]
constexpr ThreadStateException(ThreadStateException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadStateException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr ThreadStateException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadStateException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadStateException& operator=(ThreadStateException&& o) noexcept = default;
  constexpr ThreadStateException& operator=(ThreadStateException const& o) noexcept = default;
                


// Methods

static System::Threading::ThreadStateException New_ctor() ;

/// @brief Method .ctor addr 0x24a2dac size 0x5c virtual false final false
 void _ctor() ;

static System::Threading::ThreadStateException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x24a2e08 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

static System::Threading::ThreadStateException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24a2e2c size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::ThreadStateException);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadStateException, "System.Threading", "ThreadStateException");
