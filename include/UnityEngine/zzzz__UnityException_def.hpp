#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace UnityEngine {
class UnityException;
}
// Type: UnityEngine::UnityException
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10153))
// CS Name: UnityEngine.UnityException
class CORDL_TYPE UnityException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityException() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityException", modifiers: " const&", def_value: None }]
constexpr UnityException(UnityException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityException", modifiers: "&&", def_value: None }]
constexpr UnityException(UnityException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityException(void* ptr) noexcept : ::System::Exception(ptr) {
}


  constexpr UnityException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityException& operator=(UnityException&& o) noexcept = default;
  constexpr UnityException& operator=(UnityException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityException() ;

/// @brief Method .ctor addr 0x2b5b0d4 size 0x80 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit UnityException(::StringW message) ;

/// @brief Method .ctor addr 0x2b584c0 size 0x78 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit UnityException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2b5b154 size 0x80 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UnityException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnityException, "UnityEngine", "UnityException");
