#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class NullReferenceException;
}
// Type: System::NullReferenceException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2446))
// CS Name: System.NullReferenceException
class CORDL_TYPE NullReferenceException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~NullReferenceException() = default;

// Ctor Parameters [CppParam { name: "", ty: "NullReferenceException", modifiers: " const&", def_value: None }]
constexpr NullReferenceException(NullReferenceException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NullReferenceException", modifiers: "&&", def_value: None }]
constexpr NullReferenceException(NullReferenceException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NullReferenceException(void* ptr) noexcept : ::System::SystemException(ptr) {
}


  constexpr NullReferenceException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NullReferenceException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NullReferenceException& operator=(NullReferenceException&& o) noexcept = default;
  constexpr NullReferenceException& operator=(NullReferenceException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NullReferenceException() ;

/// @brief Method .ctor addr 0x2442b7c size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit NullReferenceException(::StringW message) ;

/// @brief Method .ctor addr 0x2442bd8 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit NullReferenceException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2442bfc size 0x8 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::NullReferenceException);
DEFINE_IL2CPP_ARG_TYPE(::System::NullReferenceException, "System", "NullReferenceException");
