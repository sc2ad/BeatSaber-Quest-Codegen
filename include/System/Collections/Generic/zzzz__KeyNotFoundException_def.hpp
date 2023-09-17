#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
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
namespace System::Collections::Generic {
class KeyNotFoundException;
}
// Type: System.Collections.Generic::KeyNotFoundException
namespace System::Collections::Generic {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3824))
// CS Name: System.Collections.Generic.KeyNotFoundException
class CORDL_TYPE KeyNotFoundException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~KeyNotFoundException() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyNotFoundException", modifiers: " const&", def_value: None }]
constexpr KeyNotFoundException(KeyNotFoundException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyNotFoundException", modifiers: "&&", def_value: None }]
constexpr KeyNotFoundException(KeyNotFoundException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyNotFoundException(void* ptr) noexcept : ::System::SystemException(ptr) {
}


  constexpr KeyNotFoundException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyNotFoundException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyNotFoundException& operator=(KeyNotFoundException&& o) noexcept = default;
  constexpr KeyNotFoundException& operator=(KeyNotFoundException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit KeyNotFoundException() ;

/// @brief Method .ctor addr 0x241de4c size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit KeyNotFoundException(::StringW message) ;

/// @brief Method .ctor addr 0x241dea8 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit KeyNotFoundException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x241decc size 0x8 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
NEED_NO_BOX(::System::Collections::Generic::KeyNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::KeyNotFoundException, "System.Collections.Generic", "KeyNotFoundException");
