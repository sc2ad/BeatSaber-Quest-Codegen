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
class ExecutionEngineException;
}
// Type: System::ExecutionEngineException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2379))
// CS Name: System.ExecutionEngineException
class CORDL_TYPE ExecutionEngineException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ExecutionEngineException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExecutionEngineException", modifiers: " const&", def_value: None }]
constexpr ExecutionEngineException(ExecutionEngineException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExecutionEngineException", modifiers: "&&", def_value: None }]
constexpr ExecutionEngineException(ExecutionEngineException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExecutionEngineException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr ExecutionEngineException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExecutionEngineException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExecutionEngineException& operator=(ExecutionEngineException&& o) noexcept = default;
  constexpr ExecutionEngineException& operator=(ExecutionEngineException const& o) noexcept = default;
                


// Methods

static System::ExecutionEngineException New_ctor() ;

/// @brief Method .ctor addr 0x2429288 size 0x5c virtual false final false
 void _ctor() ;

static System::ExecutionEngineException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x24292e4 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

static System::ExecutionEngineException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2429308 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ExecutionEngineException);
DEFINE_IL2CPP_ARG_TYPE(System::ExecutionEngineException, "System", "ExecutionEngineException");
