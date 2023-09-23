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
class MulticastNotSupportedException;
}
// Type: System::MulticastNotSupportedException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2442))
// CS Name: System.MulticastNotSupportedException
class CORDL_TYPE MulticastNotSupportedException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~MulticastNotSupportedException() = default;

// Ctor Parameters [CppParam { name: "", ty: "MulticastNotSupportedException", modifiers: " const&", def_value: None }]
constexpr MulticastNotSupportedException(MulticastNotSupportedException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MulticastNotSupportedException", modifiers: "&&", def_value: None }]
constexpr MulticastNotSupportedException(MulticastNotSupportedException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MulticastNotSupportedException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr MulticastNotSupportedException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MulticastNotSupportedException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MulticastNotSupportedException& operator=(MulticastNotSupportedException&& o) noexcept = default;
  constexpr MulticastNotSupportedException& operator=(MulticastNotSupportedException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MulticastNotSupportedException() ;

/// @brief Method .ctor addr 0x24429dc size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit MulticastNotSupportedException(::StringW message) ;

/// @brief Method .ctor addr 0x2442a38 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit MulticastNotSupportedException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2442a5c size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::MulticastNotSupportedException);
DEFINE_IL2CPP_ARG_TYPE(System::MulticastNotSupportedException, "System", "MulticastNotSupportedException");
