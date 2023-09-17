#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem {
struct InputActionType;
}
namespace System {
struct Guid;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace GlobalNamespace {
struct ______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputActionSetupExtensions;
}
namespace UnityEngine::InputSystem {
class ____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionSetupExtensions__CompositeSyntax;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax;
}
// Type: ::BindingSyntax
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6249))
// CS Name: UnityEngine.InputSystem.InputActionSetupExtensions::BindingSyntax
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_ActionMap", ty: "::UnityEngine::InputSystem::InputActionMap", modifiers: "", def_value: None }, CppParam { name: "m_Action", ty: "::UnityEngine::InputSystem::InputAction", modifiers: "", def_value: None }, CppParam { name: "m_BindingIndexInMap", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax(::UnityEngine::InputSystem::InputActionMap m_ActionMap, ::UnityEngine::InputSystem::InputAction m_Action, int32_t m_BindingIndexInMap) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax(____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax(____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax& operator=(____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax& operator=(____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::InputActionMap __declspec(property(get=__get_m_ActionMap, put=__set_m_ActionMap))  m_ActionMap;

constexpr void __set_m_ActionMap(::UnityEngine::InputSystem::InputActionMap value) ;

constexpr ::UnityEngine::InputSystem::InputActionMap __get_m_ActionMap() const;

 ::UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_Action, put=__set_m_Action))  m_Action;

constexpr void __set_m_Action(::UnityEngine::InputSystem::InputAction value) ;

constexpr ::UnityEngine::InputSystem::InputAction __get_m_Action() const;

 int32_t __declspec(property(get=__get_m_BindingIndexInMap, put=__set_m_BindingIndexInMap))  m_BindingIndexInMap;

constexpr void __set_m_BindingIndexInMap(int32_t value) ;

constexpr int32_t __get_m_BindingIndexInMap() const;


// Properties

 bool __declspec(property(get=get_valid))  valid;

 int32_t __declspec(property(get=get_bindingIndex))  bindingIndex;

 ::UnityEngine::InputSystem::InputBinding __declspec(property(get=get_binding))  binding;


// Methods

/// @brief Method get_valid addr 0x28b8a50 size 0x6c virtual false final false
 bool get_valid() ;

/// @brief Method get_bindingIndex addr 0x28b8abc size 0x38 virtual false final false
 int32_t get_bindingIndex() ;

/// @brief Method get_binding addr 0x28b8af4 size 0xac virtual false final false
 ::UnityEngine::InputSystem::InputBinding get_binding() ;

/// @brief Method .ctor addr 0x28b8ba0 size 0xc virtual false final false
 void _ctor(::UnityEngine::InputSystem::InputActionMap map, int32_t bindingIndexInMap, ::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method WithName addr 0x28b8bac size 0xc0 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax WithName(::StringW name) ;

/// @brief Method WithPath addr 0x28b8c6c size 0xc0 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax WithPath(::StringW path) ;

/// @brief Method WithGroup addr 0x28b8d2c size 0x1a8 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax WithGroup(::StringW group) ;

/// @brief Method WithGroups addr 0x28b8ed4 size 0x1d4 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax WithGroups(::StringW groups) ;

/// @brief Method WithInteraction addr 0x28b90a8 size 0x1a8 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax WithInteraction(::StringW interaction) ;

/// @brief Method WithInteractions addr 0x28b9250 size 0x1d4 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax WithInteractions(::StringW interactions) ;

/// @brief Method WithInteraction addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInteraction>
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax WithInteraction() ;

/// @brief Method WithProcessor addr 0x28b9424 size 0x1a8 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax WithProcessor(::StringW processor) ;

/// @brief Method WithProcessors addr 0x28b95cc size 0x1d4 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax WithProcessors(::StringW processors) ;

/// @brief Method WithProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax WithProcessor() ;

/// @brief Method Triggering addr 0x28b97a0 size 0x17c virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax Triggering(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method To addr 0x28b991c size 0x134 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax To(::UnityEngine::InputSystem::InputBinding binding) ;

/// @brief Method NextBinding addr 0x28b9a50 size 0x34 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax NextBinding() ;

/// @brief Method PreviousBinding addr 0x28b9b34 size 0x34 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax PreviousBinding() ;

/// @brief Method NextPartBinding addr 0x28b9b68 size 0xa8 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax NextPartBinding(::StringW partName) ;

/// @brief Method PreviousPartBinding addr 0x28b9d20 size 0xa8 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax PreviousPartBinding(::StringW partName) ;

/// @brief Method NextCompositeBinding addr 0x28b9dc8 size 0x38 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax NextCompositeBinding(::StringW compositeName) ;

/// @brief Method PreviousCompositeBinding addr 0x28b9ef4 size 0x38 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax PreviousCompositeBinding(::StringW compositeName) ;

/// @brief Method Iterate addr 0x28b9a84 size 0xb0 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax Iterate(bool next) ;

/// @brief Method IterateCompositeBinding addr 0x28b9e00 size 0xf4 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax IterateCompositeBinding(bool next, ::StringW compositeName) ;

/// @brief Method IteratePartBinding addr 0x28b9c10 size 0x110 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax IteratePartBinding(bool next, ::StringW partName) ;

/// @brief Method Erase addr 0x28b9f9c size 0x17c virtual false final false
 void Erase() ;

/// @brief Method InsertPartBinding addr 0x28ba118 size 0x16c virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax InsertPartBinding(::StringW partName, ::StringW path) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::CompositeSyntax
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6250))
// CS Name: UnityEngine.InputSystem.InputActionSetupExtensions::CompositeSyntax
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionSetupExtensions__CompositeSyntax : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Action", ty: "::UnityEngine::InputSystem::InputAction", modifiers: "", def_value: None }, CppParam { name: "m_ActionMap", ty: "::UnityEngine::InputSystem::InputActionMap", modifiers: "", def_value: None }, CppParam { name: "m_BindingIndexInMap", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions__CompositeSyntax(::UnityEngine::InputSystem::InputAction m_Action, ::UnityEngine::InputSystem::InputActionMap m_ActionMap, int32_t m_BindingIndexInMap) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions__CompositeSyntax(____UnityEngine__InputSystem__InputActionSetupExtensions__CompositeSyntax const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions__CompositeSyntax(____UnityEngine__InputSystem__InputActionSetupExtensions__CompositeSyntax&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions__CompositeSyntax& operator=(____UnityEngine__InputSystem__InputActionSetupExtensions__CompositeSyntax const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions__CompositeSyntax& operator=(____UnityEngine__InputSystem__InputActionSetupExtensions__CompositeSyntax&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionSetupExtensions__CompositeSyntax(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_Action, put=__set_m_Action))  m_Action;

constexpr void __set_m_Action(::UnityEngine::InputSystem::InputAction value) ;

constexpr ::UnityEngine::InputSystem::InputAction __get_m_Action() const;

 ::UnityEngine::InputSystem::InputActionMap __declspec(property(get=__get_m_ActionMap, put=__set_m_ActionMap))  m_ActionMap;

constexpr void __set_m_ActionMap(::UnityEngine::InputSystem::InputActionMap value) ;

constexpr ::UnityEngine::InputSystem::InputActionMap __get_m_ActionMap() const;

 int32_t __declspec(property(get=__get_m_BindingIndexInMap, put=__set_m_BindingIndexInMap))  m_BindingIndexInMap;

constexpr void __set_m_BindingIndexInMap(int32_t value) ;

constexpr int32_t __get_m_BindingIndexInMap() const;


// Properties

 int32_t __declspec(property(get=get_bindingIndex))  bindingIndex;


// Methods

/// @brief Method get_bindingIndex addr 0x28ba2a0 size 0x2c virtual false final false
 int32_t get_bindingIndex() ;

/// @brief Method .ctor addr 0x28ba2cc size 0xc virtual false final false
 void _ctor(::UnityEngine::InputSystem::InputActionMap map, ::UnityEngine::InputSystem::InputAction action, int32_t compositeIndex) ;

/// @brief Method With addr 0x28ba2d8 size 0x24c virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__CompositeSyntax With(::StringW name, ::StringW binding, ::StringW groups, ::StringW processors) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::ControlSchemeSyntax
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6251))
// CS Name: UnityEngine.InputSystem.InputActionSetupExtensions::ControlSchemeSyntax
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Asset", ty: "::UnityEngine::InputSystem::InputActionAsset", modifiers: "", def_value: None }, CppParam { name: "m_ControlSchemeIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ControlScheme", ty: "::UnityEngine::InputSystem::InputControlScheme", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax(::UnityEngine::InputSystem::InputActionAsset m_Asset, int32_t m_ControlSchemeIndex, ::UnityEngine::InputSystem::InputControlScheme m_ControlScheme) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax(____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax(____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax& operator=(____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax& operator=(____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::InputActionAsset __declspec(property(get=__get_m_Asset, put=__set_m_Asset))  m_Asset;

constexpr void __set_m_Asset(::UnityEngine::InputSystem::InputActionAsset value) ;

constexpr ::UnityEngine::InputSystem::InputActionAsset __get_m_Asset() const;

 int32_t __declspec(property(get=__get_m_ControlSchemeIndex, put=__set_m_ControlSchemeIndex))  m_ControlSchemeIndex;

constexpr void __set_m_ControlSchemeIndex(int32_t value) ;

constexpr int32_t __get_m_ControlSchemeIndex() const;

 ::UnityEngine::InputSystem::InputControlScheme __declspec(property(get=__get_m_ControlScheme, put=__set_m_ControlScheme))  m_ControlScheme;

constexpr void __set_m_ControlScheme(::UnityEngine::InputSystem::InputControlScheme value) ;

constexpr ::UnityEngine::InputSystem::InputControlScheme __get_m_ControlScheme() const;


// Methods

/// @brief Method .ctor addr 0x28ba524 size 0x14 virtual false final false
 void _ctor(::UnityEngine::InputSystem::InputActionAsset asset, int32_t index) ;

/// @brief Method .ctor addr 0x28ba538 size 0x20 virtual false final false
 void _ctor(::UnityEngine::InputSystem::InputControlScheme controlScheme) ;

/// @brief Method WithBindingGroup addr 0x28ba558 size 0x124 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax WithBindingGroup(::StringW bindingGroup) ;

/// @brief Method WithRequiredDevice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevice>
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax WithRequiredDevice() ;

/// @brief Method WithOptionalDevice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevice>
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax WithOptionalDevice() ;

/// @brief Method OrWithRequiredDevice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevice>
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax OrWithRequiredDevice() ;

/// @brief Method OrWithOptionalDevice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevice>
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax OrWithOptionalDevice() ;

/// @brief Method WithRequiredDevice addr 0x28ba67c size 0x34 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax WithRequiredDevice(::StringW controlPath) ;

/// @brief Method WithOptionalDevice addr 0x28ba8bc size 0x34 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax WithOptionalDevice(::StringW controlPath) ;

/// @brief Method OrWithRequiredDevice addr 0x28ba8f0 size 0x34 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax OrWithRequiredDevice(::StringW controlPath) ;

/// @brief Method OrWithOptionalDevice addr 0x28ba924 size 0x34 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax OrWithOptionalDevice(::StringW controlPath) ;

/// @brief Method DeviceTypeToControlPath addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevice>
 ::StringW DeviceTypeToControlPath() ;

/// @brief Method Done addr 0x28ba958 size 0xc4 virtual false final false
 ::UnityEngine::InputSystem::InputControlScheme Done() ;

/// @brief Method AddDeviceEntry addr 0x28ba6b0 size 0x20c virtual false final false
 void AddDeviceEntry(::StringW controlPath, ::GlobalNamespace::______UnityEngine__InputSystem__InputControlScheme__DeviceRequirement__Flags flags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::<>c__DisplayClass5_0
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6252))
// CS Name: UnityEngine.InputSystem.InputActionSetupExtensions::<>c__DisplayClass5_0
class CORDL_TYPE ____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0(____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0(____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0& operator=(____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0& operator=(____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::InputBinding __declspec(property(get=__get_binding, put=__set_binding))  binding;

constexpr void __set_binding(::UnityEngine::InputSystem::InputBinding value) ;

constexpr ::UnityEngine::InputSystem::InputBinding __get_binding() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0() ;

/// @brief Method .ctor addr 0x28baa1c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <RemoveAction>b__0 addr 0x28baa24 size 0x44 virtual false final false
 bool _RemoveAction_b__0(::UnityEngine::InputSystem::InputBinding b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputActionSetupExtensions
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6253))
// CS Name: UnityEngine.InputSystem.InputActionSetupExtensions
class CORDL_TYPE InputActionSetupExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass5_0 = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0;

using ControlSchemeSyntax = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax;

using CompositeSyntax = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__CompositeSyntax;

using BindingSyntax = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputActionSetupExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputActionSetupExtensions", modifiers: " const&", def_value: None }]
constexpr InputActionSetupExtensions(InputActionSetupExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputActionSetupExtensions", modifiers: "&&", def_value: None }]
constexpr InputActionSetupExtensions(InputActionSetupExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputActionSetupExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputActionSetupExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputActionSetupExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputActionSetupExtensions& operator=(InputActionSetupExtensions&& o) noexcept = default;
  constexpr InputActionSetupExtensions& operator=(InputActionSetupExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method AddActionMap addr 0x28b5e08 size 0x1ec virtual false final false
static ::UnityEngine::InputSystem::InputActionMap AddActionMap(::UnityEngine::InputSystem::InputActionAsset asset, ::StringW name) ;

/// @brief Method AddActionMap addr 0x28b5ff4 size 0x24c virtual false final false
static void AddActionMap(::UnityEngine::InputSystem::InputActionAsset asset, ::UnityEngine::InputSystem::InputActionMap map) ;

/// @brief Method RemoveActionMap addr 0x28b6240 size 0x160 virtual false final false
static void RemoveActionMap(::UnityEngine::InputSystem::InputActionAsset asset, ::UnityEngine::InputSystem::InputActionMap map) ;

/// @brief Method RemoveActionMap addr 0x28b63a0 size 0x118 virtual false final false
static void RemoveActionMap(::UnityEngine::InputSystem::InputActionAsset asset, ::StringW nameOrId) ;

/// @brief Method AddAction addr 0x28b64b8 size 0x3e8 virtual false final false
static ::UnityEngine::InputSystem::InputAction AddAction(::UnityEngine::InputSystem::InputActionMap map, ::StringW name, ::UnityEngine::InputSystem::InputActionType type, ::StringW binding, ::StringW interactions, ::StringW processors, ::StringW groups, ::StringW expectedControlLayout) ;

/// @brief Method RemoveAction addr 0x28b68a0 size 0x364 virtual false final false
static void RemoveAction(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method RemoveAction addr 0x28b6c04 size 0x110 virtual false final false
static void RemoveAction(::UnityEngine::InputSystem::InputActionAsset asset, ::StringW nameOrId) ;

/// @brief Method AddBinding addr 0x28b4d54 size 0x4c virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputAction action, ::StringW path, ::StringW interactions, ::StringW processors, ::StringW groups) ;

/// @brief Method AddBinding addr 0x28b6df0 size 0xb8 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method AddBinding addr 0x28b6d14 size 0xdc virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::InputBinding binding) ;

/// @brief Method AddBinding addr 0x28b7034 size 0xb8 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap actionMap, ::StringW path, ::StringW interactions, ::StringW groups, ::StringW action, ::StringW processors) ;

/// @brief Method AddBinding addr 0x28b71f0 size 0x138 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap actionMap, ::StringW path, ::UnityEngine::InputSystem::InputAction action, ::StringW interactions, ::StringW groups) ;

/// @brief Method AddBinding addr 0x28b7328 size 0xfc virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap actionMap, ::StringW path, ::System::Guid action, ::StringW interactions, ::StringW groups) ;

/// @brief Method AddBinding addr 0x28b70ec size 0x104 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap actionMap, ::UnityEngine::InputSystem::InputBinding binding) ;

/// @brief Method AddCompositeBinding addr 0x28b7424 size 0x1a8 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__CompositeSyntax AddCompositeBinding(::UnityEngine::InputSystem::InputAction action, ::StringW composite, ::StringW interactions, ::StringW processors) ;

/// @brief Method AddBindingInternal addr 0x28b6ea8 size 0x18c virtual false final false
static int32_t AddBindingInternal(::UnityEngine::InputSystem::InputActionMap map, ::UnityEngine::InputSystem::InputBinding binding, int32_t bindingIndex) ;

/// @brief Method ChangeBinding addr 0x28b334c size 0xa0 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputAction action, int32_t index) ;

/// @brief Method ChangeBinding addr 0x28b75cc size 0x50 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputAction action, ::StringW name) ;

/// @brief Method ChangeBinding addr 0x28b7770 size 0x10c virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputActionMap actionMap, int32_t index) ;

/// @brief Method ChangeBindingWithId addr 0x28b787c size 0x98 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax ChangeBindingWithId(::UnityEngine::InputSystem::InputAction action, ::StringW id) ;

/// @brief Method ChangeBindingWithId addr 0x28b7914 size 0xd4 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax ChangeBindingWithId(::UnityEngine::InputSystem::InputAction action, ::System::Guid id) ;

/// @brief Method ChangeBindingWithGroup addr 0x28b79e8 size 0x98 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax ChangeBindingWithGroup(::UnityEngine::InputSystem::InputAction action, ::StringW group) ;

/// @brief Method ChangeBindingWithPath addr 0x28b7a80 size 0xa0 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax ChangeBindingWithPath(::UnityEngine::InputSystem::InputAction action, ::StringW path) ;

/// @brief Method ChangeBinding addr 0x28b761c size 0x154 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::InputBinding match) ;

/// @brief Method ChangeCompositeBinding addr 0x28b7b20 size 0x1e8 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax ChangeCompositeBinding(::UnityEngine::InputSystem::InputAction action, ::StringW compositeName) ;

/// @brief Method Rename addr 0x28b7d08 size 0x27c virtual false final false
static void Rename(::UnityEngine::InputSystem::InputAction action, ::StringW newName) ;

/// @brief Method AddControlScheme addr 0x28b7f84 size 0x32c virtual false final false
static void AddControlScheme(::UnityEngine::InputSystem::InputActionAsset asset, ::UnityEngine::InputSystem::InputControlScheme controlScheme) ;

/// @brief Method AddControlScheme addr 0x28b82b0 size 0x178 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax AddControlScheme(::UnityEngine::InputSystem::InputActionAsset asset, ::StringW name) ;

/// @brief Method RemoveControlScheme addr 0x28b8428 size 0x13c virtual false final false
static void RemoveControlScheme(::UnityEngine::InputSystem::InputActionAsset asset, ::StringW name) ;

/// @brief Method WithBindingGroup addr 0x28b8564 size 0xc0 virtual false final false
static ::UnityEngine::InputSystem::InputControlScheme WithBindingGroup(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW bindingGroup) ;

/// @brief Method WithDevice addr 0x28b8624 size 0x12c virtual false final false
static ::UnityEngine::InputSystem::InputControlScheme WithDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath, bool required) ;

/// @brief Method WithRequiredDevice addr 0x28b8750 size 0xc0 virtual false final false
static ::UnityEngine::InputSystem::InputControlScheme WithRequiredDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath) ;

/// @brief Method WithOptionalDevice addr 0x28b8810 size 0xc0 virtual false final false
static ::UnityEngine::InputSystem::InputControlScheme WithOptionalDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath) ;

/// @brief Method OrWithRequiredDevice addr 0x28b88d0 size 0xc0 virtual false final false
static ::UnityEngine::InputSystem::InputControlScheme OrWithRequiredDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath) ;

/// @brief Method OrWithOptionalDevice addr 0x28b8990 size 0xc0 virtual false final false
static ::UnityEngine::InputSystem::InputControlScheme OrWithOptionalDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionSetupExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionSetupExtensions, "UnityEngine.InputSystem", "InputActionSetupExtensions");
NEED_NO_BOX(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions____c__DisplayClass5_0, "UnityEngine.InputSystem", "InputActionSetupExtensions/<>c__DisplayClass5_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__BindingSyntax, "UnityEngine.InputSystem", "InputActionSetupExtensions/BindingSyntax");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__CompositeSyntax, "UnityEngine.InputSystem", "InputActionSetupExtensions/CompositeSyntax");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionSetupExtensions__ControlSchemeSyntax, "UnityEngine.InputSystem", "InputActionSetupExtensions/ControlSchemeSyntax");
