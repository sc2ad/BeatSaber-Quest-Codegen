#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
// Type: System.Runtime.Serialization::ISurrogateSelector
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3200))
// CS Name: System.Runtime.Serialization.ISurrogateSelector
class CORDL_TYPE ISurrogateSelector : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISurrogateSelector() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISurrogateSelector(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetSurrogate addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Runtime::Serialization::ISerializationSurrogate GetSurrogate(System::Type type, System::Runtime::Serialization::StreamingContext context, ByRef<System::Runtime::Serialization::ISurrogateSelector> selector) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::ISurrogateSelector);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ISurrogateSelector, "System.Runtime.Serialization", "ISurrogateSelector");
