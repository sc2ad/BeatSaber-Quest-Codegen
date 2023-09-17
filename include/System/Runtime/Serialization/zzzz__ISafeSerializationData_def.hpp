#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::Serialization {
class ISafeSerializationData;
}
// Type: System.Runtime.Serialization::ISafeSerializationData
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3222))
// CS Name: System.Runtime.Serialization.ISafeSerializationData
class CORDL_TYPE ISafeSerializationData : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISafeSerializationData() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISafeSerializationData(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CompleteDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
 void CompleteDeserialization(::bs_hook::Il2CppWrapperType deserialized) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::ISafeSerializationData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ISafeSerializationData, "System.Runtime.Serialization", "ISafeSerializationData");
