#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime {
class AmbiguousImplementationException;
}
// Type: System.Runtime::AmbiguousImplementationException
namespace System::Runtime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3046))
// CS Name: System.Runtime.AmbiguousImplementationException
class CORDL_TYPE AmbiguousImplementationException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~AmbiguousImplementationException() = default;

// Ctor Parameters [CppParam { name: "", ty: "AmbiguousImplementationException", modifiers: " const&", def_value: None }]
constexpr AmbiguousImplementationException(AmbiguousImplementationException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AmbiguousImplementationException", modifiers: "&&", def_value: None }]
constexpr AmbiguousImplementationException(AmbiguousImplementationException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AmbiguousImplementationException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr AmbiguousImplementationException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AmbiguousImplementationException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AmbiguousImplementationException& operator=(AmbiguousImplementationException&& o) noexcept = default;
  constexpr AmbiguousImplementationException& operator=(AmbiguousImplementationException const& o) noexcept = default;
                


// Methods

static System::Runtime::AmbiguousImplementationException New_ctor() ;

/// @brief Method .ctor addr 0x23198b8 size 0x80 virtual false final false
 void _ctor() ;

static System::Runtime::AmbiguousImplementationException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x2319938 size 0x78 virtual false final false
 void _ctor(::StringW message) ;

static System::Runtime::AmbiguousImplementationException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x23199b0 size 0x80 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime
NEED_NO_BOX(System::Runtime::AmbiguousImplementationException);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::AmbiguousImplementationException, "System.Runtime", "AmbiguousImplementationException");
