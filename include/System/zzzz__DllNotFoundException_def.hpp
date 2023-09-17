#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__TypeLoadException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class DllNotFoundException;
}
// Type: System::DllNotFoundException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2373))
// CS Name: System.DllNotFoundException
class CORDL_TYPE DllNotFoundException : public ::System::TypeLoadException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~DllNotFoundException() = default;

// Ctor Parameters [CppParam { name: "", ty: "DllNotFoundException", modifiers: " const&", def_value: None }]
constexpr DllNotFoundException(DllNotFoundException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DllNotFoundException", modifiers: "&&", def_value: None }]
constexpr DllNotFoundException(DllNotFoundException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DllNotFoundException(void* ptr) noexcept : ::System::TypeLoadException(ptr) {
}


  constexpr DllNotFoundException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DllNotFoundException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DllNotFoundException& operator=(DllNotFoundException&& o) noexcept = default;
  constexpr DllNotFoundException& operator=(DllNotFoundException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DllNotFoundException() ;

/// @brief Method .ctor addr 0x24277f4 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit DllNotFoundException(::StringW message) ;

/// @brief Method .ctor addr 0x2427850 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit DllNotFoundException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2427874 size 0x8 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::DllNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::System::DllNotFoundException, "System", "DllNotFoundException");
