#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class IObjectReference;
}
// Type: System.Runtime.Serialization::IObjectReference
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3191))
// CS Name: System.Runtime.Serialization.IObjectReference
class CORDL_TYPE IObjectReference : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IObjectReference() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IObjectReference(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetRealObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetRealObject(System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::IObjectReference);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::IObjectReference, "System.Runtime.Serialization", "IObjectReference");
