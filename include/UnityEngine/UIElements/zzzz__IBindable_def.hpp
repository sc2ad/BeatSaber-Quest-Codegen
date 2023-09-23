#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
class IBinding;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IBindable;
}
// Type: UnityEngine.UIElements::IBindable
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7180))
// CS Name: UnityEngine.UIElements.IBindable
class CORDL_TYPE IBindable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBindable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBindable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 UnityEngine::UIElements::IBinding __declspec(property(get=get_binding))  binding;

 ::StringW __declspec(property(put=set_bindingPath))  bindingPath;


// Methods

/// @brief Method get_binding addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::IBinding get_binding() ;

/// @brief Method set_bindingPath addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_bindingPath(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IBindable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IBindable, "UnityEngine.UIElements", "IBindable");
