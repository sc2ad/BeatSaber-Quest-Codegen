#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
// Type: UnityEngine.InputSystem::IInputActionCollection
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6210))
// CS Name: UnityEngine.InputSystem.IInputActionCollection
class CORDL_TYPE IInputActionCollection : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

~IInputActionCollection() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInputActionCollection(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> __declspec(property(get=get_bindingMask, put=set_bindingMask))  bindingMask;

 ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> __declspec(property(get=get_devices, put=set_devices))  devices;

 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> __declspec(property(get=get_controlSchemes))  controlSchemes;


// Methods

/// @brief Method get_bindingMask addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask() ;

/// @brief Method set_bindingMask addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value) ;

/// @brief Method get_devices addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> get_devices() ;

/// @brief Method set_devices addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> value) ;

/// @brief Method get_controlSchemes addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Contains(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method Enable addr 0x0 size 0xffffffffffffffff virtual true final false
 void Enable() ;

/// @brief Method Disable addr 0x0 size 0xffffffffffffffff virtual true final false
 void Disable() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::IInputActionCollection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::IInputActionCollection, "UnityEngine.InputSystem", "IInputActionCollection");
