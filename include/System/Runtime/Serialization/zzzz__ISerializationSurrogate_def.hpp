#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
// Type: System.Runtime.Serialization::ISerializationSurrogate
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3199))
// CS Name: System.Runtime.Serialization.ISerializationSurrogate
class CORDL_TYPE ISerializationSurrogate : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISerializationSurrogate() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISerializationSurrogate(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method SetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType SetObjectData(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ISurrogateSelector selector) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::ISerializationSurrogate);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ISerializationSurrogate, "System.Runtime.Serialization", "ISerializationSurrogate");
