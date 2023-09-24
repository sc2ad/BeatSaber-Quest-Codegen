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
class OutOfMemoryException;
}
// Type: System::OutOfMemoryException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2528))
// CS Name: System.OutOfMemoryException
class CORDL_TYPE OutOfMemoryException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~OutOfMemoryException() = default;

// Ctor Parameters [CppParam { name: "", ty: "OutOfMemoryException", modifiers: " const&", def_value: None }]
constexpr OutOfMemoryException(OutOfMemoryException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OutOfMemoryException", modifiers: "&&", def_value: None }]
constexpr OutOfMemoryException(OutOfMemoryException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OutOfMemoryException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr OutOfMemoryException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OutOfMemoryException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OutOfMemoryException& operator=(OutOfMemoryException&& o) noexcept = default;
  constexpr OutOfMemoryException& operator=(OutOfMemoryException const& o) noexcept = default;
                


// Methods

static System::OutOfMemoryException New_ctor() ;

/// @brief Method .ctor addr 0x24639e0 size 0x58 virtual false final false
 void _ctor() ;

static System::OutOfMemoryException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x2463a38 size 0x20 virtual false final false
 void _ctor(::StringW message) ;

static System::OutOfMemoryException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2463a58 size 0x4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::OutOfMemoryException);
DEFINE_IL2CPP_ARG_TYPE(System::OutOfMemoryException, "System", "OutOfMemoryException");
