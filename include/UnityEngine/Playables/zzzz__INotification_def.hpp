#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine {
struct PropertyName;
}
// Forward declare root types
namespace UnityEngine::Playables {
class INotification;
}
// Type: UnityEngine.Playables::INotification
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10355))
// CS Name: UnityEngine.Playables.INotification
class CORDL_TYPE INotification : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INotification() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INotification(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 UnityEngine::PropertyName __declspec(property(get=get_id))  id;


// Methods

/// @brief Method get_id addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::PropertyName get_id() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
NEED_NO_BOX(UnityEngine::Playables::INotification);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::INotification, "UnityEngine.Playables", "INotification");
