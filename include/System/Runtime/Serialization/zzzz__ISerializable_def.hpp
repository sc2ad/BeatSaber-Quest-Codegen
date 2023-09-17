#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ISerializable;
}
// Type: System.Runtime.Serialization::ISerializable
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3192))
// CS Name: System.Runtime.Serialization.ISerializable
class CORDL_TYPE ISerializable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISerializable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISerializable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::ISerializable);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ISerializable, "System.Runtime.Serialization", "ISerializable");
