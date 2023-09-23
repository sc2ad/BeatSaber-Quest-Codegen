#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
// Type: UnityEngine.InputSystem::InputActionProperty
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6247))
// CS Name: UnityEngine.InputSystem.InputActionProperty
struct CORDL_TYPE InputActionProperty : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::InputActionProperty>
constexpr operator  System::IEquatable_1<UnityEngine::InputSystem::InputActionProperty>() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::InputAction>
constexpr operator  System::IEquatable_1<UnityEngine::InputSystem::InputAction>() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::InputActionReference>
constexpr operator  System::IEquatable_1<UnityEngine::InputSystem::InputActionReference>() const;

// Ctor Parameters [CppParam { name: "m_UseReference", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Action", ty: "UnityEngine::InputSystem::InputAction", modifiers: "", def_value: None }, CppParam { name: "m_Reference", ty: "UnityEngine::InputSystem::InputActionReference", modifiers: "", def_value: None }]
constexpr InputActionProperty(bool m_UseReference, UnityEngine::InputSystem::InputAction m_Action, UnityEngine::InputSystem::InputActionReference m_Reference) noexcept;


                    constexpr InputActionProperty(InputActionProperty const&) = default;
                    constexpr InputActionProperty(InputActionProperty&&) = default;
                    constexpr InputActionProperty& operator=(InputActionProperty const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputActionProperty& operator=(InputActionProperty&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputActionProperty(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_m_UseReference, put=__set_m_UseReference))  m_UseReference;

constexpr void __set_m_UseReference(bool value) ;

constexpr bool __get_m_UseReference() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_Action, put=__set_m_Action))  m_Action;

constexpr void __set_m_Action(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get_m_Action() const;

 UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get_m_Reference, put=__set_m_Reference))  m_Reference;

constexpr void __set_m_Reference(UnityEngine::InputSystem::InputActionReference value) ;

constexpr UnityEngine::InputSystem::InputActionReference __get_m_Reference() const;


// Properties

 UnityEngine::InputSystem::InputAction __declspec(property(get=get_action))  action;

 UnityEngine::InputSystem::InputActionReference __declspec(property(get=get_reference))  reference;


// Methods

/// @brief Method get_action addr 0x28b5054 size 0x94 virtual false final false
 UnityEngine::InputSystem::InputAction get_action() ;

/// @brief Method get_reference addr 0x28b5194 size 0x18 virtual false final false
 UnityEngine::InputSystem::InputActionReference get_reference() ;

/// @brief Method .ctor addr 0x28b51ac size 0xc virtual false final false
 void _ctor(UnityEngine::InputSystem::InputAction action) ;

/// @brief Method .ctor addr 0x28b51b8 size 0x10 virtual false final false
 void _ctor(UnityEngine::InputSystem::InputActionReference reference) ;

/// @brief Method Equals addr 0x28b51c8 size 0xa4 virtual true final true
 bool Equals(UnityEngine::InputSystem::InputActionProperty other) ;

/// @brief Method Equals addr 0x28b526c size 0x1c virtual true final true
 bool Equals(UnityEngine::InputSystem::InputAction other) ;

/// @brief Method Equals addr 0x28b5288 size 0x6c virtual true final true
 bool Equals(UnityEngine::InputSystem::InputActionReference other) ;

/// @brief Method Equals addr 0x28b52f4 size 0xcc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x28b53c0 size 0x9c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x28b545c size 0x30 virtual false final false
static bool op_Equality(UnityEngine::InputSystem::InputActionProperty left, UnityEngine::InputSystem::InputActionProperty right) ;

/// @brief Method op_Inequality addr 0x28b548c size 0x34 virtual false final false
static bool op_Inequality(UnityEngine::InputSystem::InputActionProperty left, UnityEngine::InputSystem::InputActionProperty right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::InputActionProperty, "UnityEngine.InputSystem", "InputActionProperty");
