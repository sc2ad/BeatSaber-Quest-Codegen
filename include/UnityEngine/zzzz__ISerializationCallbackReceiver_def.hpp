#pragma once
#include "../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Type: UnityEngine::ISerializationCallbackReceiver
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9993))
// CS Name: UnityEngine.ISerializationCallbackReceiver
class CORDL_TYPE ISerializationCallbackReceiver : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISerializationCallbackReceiver() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISerializationCallbackReceiver(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnBeforeSerialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnBeforeSerialize() ;

/// @brief Method OnAfterDeserialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnAfterDeserialize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ISerializationCallbackReceiver);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ISerializationCallbackReceiver, "UnityEngine", "ISerializationCallbackReceiver");
