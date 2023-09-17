#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
// Type: System.Runtime.Serialization::IDeserializationCallback
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3189))
// CS Name: System.Runtime.Serialization.IDeserializationCallback
class CORDL_TYPE IDeserializationCallback : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDeserializationCallback() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDeserializationCallback(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::IDeserializationCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::IDeserializationCallback, "System.Runtime.Serialization", "IDeserializationCallback");
