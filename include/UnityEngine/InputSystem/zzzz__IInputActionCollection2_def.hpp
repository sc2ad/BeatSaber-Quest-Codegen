#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class IInputActionCollection2;
}
// Type: UnityEngine.InputSystem::IInputActionCollection2
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6211))
// CS Name: UnityEngine.InputSystem.IInputActionCollection2
class CORDL_TYPE IInputActionCollection2 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::IInputActionCollection
constexpr operator  UnityEngine::InputSystem::IInputActionCollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputAction>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputAction>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

~IInputActionCollection2() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInputActionCollection2(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputBinding> __declspec(property(get=get_bindings))  bindings;


// Methods

/// @brief Method get_bindings addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputBinding> get_bindings() ;

/// @brief Method FindAction addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::InputSystem::InputAction FindAction(::StringW actionNameOrId, bool throwIfNotFound) ;

/// @brief Method FindBinding addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t FindBinding(UnityEngine::InputSystem::InputBinding mask, ByRef<UnityEngine::InputSystem::InputAction> action) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::IInputActionCollection2);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::IInputActionCollection2, "UnityEngine.InputSystem", "IInputActionCollection2");
