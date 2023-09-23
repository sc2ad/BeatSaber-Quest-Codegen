#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__NotSupportedException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class PlatformNotSupportedException;
}
// Type: System::PlatformNotSupportedException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2445))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2459))
// CS Name: System.PlatformNotSupportedException
class CORDL_TYPE PlatformNotSupportedException : public System::NotSupportedException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PlatformNotSupportedException() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformNotSupportedException", modifiers: " const&", def_value: None }]
constexpr PlatformNotSupportedException(PlatformNotSupportedException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformNotSupportedException", modifiers: "&&", def_value: None }]
constexpr PlatformNotSupportedException(PlatformNotSupportedException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlatformNotSupportedException(void* ptr) noexcept : System::NotSupportedException(ptr) {
}


  constexpr PlatformNotSupportedException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlatformNotSupportedException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlatformNotSupportedException& operator=(PlatformNotSupportedException&& o) noexcept = default;
  constexpr PlatformNotSupportedException& operator=(PlatformNotSupportedException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PlatformNotSupportedException() ;

/// @brief Method .ctor addr 0x24515b8 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit PlatformNotSupportedException(::StringW message) ;

/// @brief Method .ctor addr 0x2451614 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit PlatformNotSupportedException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2451638 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::PlatformNotSupportedException);
DEFINE_IL2CPP_ARG_TYPE(System::PlatformNotSupportedException, "System", "PlatformNotSupportedException");
