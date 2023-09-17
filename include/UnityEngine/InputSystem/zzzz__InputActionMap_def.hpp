#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputAction__CallbackContext;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace System {
class ICloneable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TDelegate>
struct CallbackArray_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System {
struct Guid;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionMap__Flags;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionMap__BindingJson;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionMap__DeviceArray;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionMap__ReadActionJson;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionMap__ReadFileJson;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionMap__ReadMapJson;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionMap__WriteActionJson;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionMap__WriteFileJson;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionMap__WriteMapJson;
}
// Type: ::Flags
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6224))
// CS Name: UnityEngine.InputSystem.InputActionMap::Flags
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionMap__Flags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionMap__Flags(int32_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionMap__Flags(____UnityEngine__InputSystem__InputActionMap__Flags const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__Flags(____UnityEngine__InputSystem__InputActionMap__Flags&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__Flags& operator=(____UnityEngine__InputSystem__InputActionMap__Flags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionMap__Flags& operator=(____UnityEngine__InputSystem__InputActionMap__Flags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionMap__Flags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__InputActionMap__Flags_Unwrapped : int32_t {
__NeedToResolveBindings = 1,
__BindingResolutionNeedsFullReResolve = 2,
__ControlsForEachActionInitialized = 4,
__BindingsForEachActionInitialized = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__InputActionMap__Flags_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__InputActionMap__Flags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NeedToResolveBindings offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags const NeedToResolveBindings;

/// @brief Field BindingResolutionNeedsFullReResolve offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags const BindingResolutionNeedsFullReResolve;

/// @brief Field ControlsForEachActionInitialized offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags const ControlsForEachActionInitialized;

/// @brief Field BindingsForEachActionInitialized offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags const BindingsForEachActionInitialized;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::DeviceArray
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6225))
// CS Name: UnityEngine.InputSystem.InputActionMap::DeviceArray
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionMap__DeviceArray : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_HaveValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_DeviceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DeviceArray", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice>", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionMap__DeviceArray(bool m_HaveValue, int32_t m_DeviceCount, ::ArrayW<::UnityEngine::InputSystem::InputDevice> m_DeviceArray) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionMap__DeviceArray(____UnityEngine__InputSystem__InputActionMap__DeviceArray const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__DeviceArray(____UnityEngine__InputSystem__InputActionMap__DeviceArray&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__DeviceArray& operator=(____UnityEngine__InputSystem__InputActionMap__DeviceArray const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionMap__DeviceArray& operator=(____UnityEngine__InputSystem__InputActionMap__DeviceArray&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionMap__DeviceArray(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_m_HaveValue, put=__set_m_HaveValue))  m_HaveValue;

constexpr void __set_m_HaveValue(bool value) ;

constexpr bool __get_m_HaveValue() const;

 int32_t __declspec(property(get=__get_m_DeviceCount, put=__set_m_DeviceCount))  m_DeviceCount;

constexpr void __set_m_DeviceCount(int32_t value) ;

constexpr int32_t __get_m_DeviceCount() const;

 ::ArrayW<::UnityEngine::InputSystem::InputDevice> __declspec(property(get=__get_m_DeviceArray, put=__set_m_DeviceArray))  m_DeviceArray;

constexpr void __set_m_DeviceArray(::ArrayW<::UnityEngine::InputSystem::InputDevice> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice> __get_m_DeviceArray() const;


// Methods

/// @brief Method IndexOf addr 0x28ac1c8 size 0x5c virtual false final false
 int32_t IndexOf(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method Remove addr 0x28ac224 size 0x74 virtual false final false
 bool Remove(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method Get addr 0x28a6764 size 0xa8 virtual false final false
 ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> Get() ;

/// @brief Method Set addr 0x28a6850 size 0x17c virtual false final false
 bool Set(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> devices) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::BindingOverrideListJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6226))
// CS Name: UnityEngine.InputSystem.InputActionMap::BindingOverrideListJson
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "bindings", ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson>", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson> bindings) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson(____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson(____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson& operator=(____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson& operator=(____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson> __declspec(property(get=__get_bindings, put=__set_bindings))  bindings;

constexpr void __set_bindings(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson> __get_bindings() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::BindingOverrideJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6227))
// CS Name: UnityEngine.InputSystem.InputActionMap::BindingOverrideJson
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson(::StringW action, ::StringW id, ::StringW path, ::StringW interactions, ::StringW processors) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson(____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson(____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson& operator=(____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson& operator=(____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(::StringW value) ;

constexpr ::StringW __get_action() const;

 ::StringW __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(::StringW value) ;

constexpr ::StringW __get_id() const;

 ::StringW __declspec(property(get=__get_path, put=__set_path))  path;

constexpr void __set_path(::StringW value) ;

constexpr ::StringW __get_path() const;

 ::StringW __declspec(property(get=__get_interactions, put=__set_interactions))  interactions;

constexpr void __set_interactions(::StringW value) ;

constexpr ::StringW __get_interactions() const;

 ::StringW __declspec(property(get=__get_processors, put=__set_processors))  processors;

constexpr void __set_processors(::StringW value) ;

constexpr ::StringW __get_processors() const;


// Methods

/// @brief Method FromBinding addr 0x28ac298 size 0x20 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson FromBinding(::UnityEngine::InputSystem::InputBinding binding) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::BindingJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6228))
// CS Name: UnityEngine.InputSystem.InputActionMap::BindingJson
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionMap__BindingJson : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "groups", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isComposite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isPartOfComposite", ty: "bool", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionMap__BindingJson(::StringW name, ::StringW id, ::StringW path, ::StringW interactions, ::StringW processors, ::StringW groups, ::StringW action, bool isComposite, bool isPartOfComposite) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionMap__BindingJson(____UnityEngine__InputSystem__InputActionMap__BindingJson const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__BindingJson(____UnityEngine__InputSystem__InputActionMap__BindingJson&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__BindingJson& operator=(____UnityEngine__InputSystem__InputActionMap__BindingJson const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionMap__BindingJson& operator=(____UnityEngine__InputSystem__InputActionMap__BindingJson&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionMap__BindingJson(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(::StringW value) ;

constexpr ::StringW __get_id() const;

 ::StringW __declspec(property(get=__get_path, put=__set_path))  path;

constexpr void __set_path(::StringW value) ;

constexpr ::StringW __get_path() const;

 ::StringW __declspec(property(get=__get_interactions, put=__set_interactions))  interactions;

constexpr void __set_interactions(::StringW value) ;

constexpr ::StringW __get_interactions() const;

 ::StringW __declspec(property(get=__get_processors, put=__set_processors))  processors;

constexpr void __set_processors(::StringW value) ;

constexpr ::StringW __get_processors() const;

 ::StringW __declspec(property(get=__get_groups, put=__set_groups))  groups;

constexpr void __set_groups(::StringW value) ;

constexpr ::StringW __get_groups() const;

 ::StringW __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(::StringW value) ;

constexpr ::StringW __get_action() const;

 bool __declspec(property(get=__get_isComposite, put=__set_isComposite))  isComposite;

constexpr void __set_isComposite(bool value) ;

constexpr bool __get_isComposite() const;

 bool __declspec(property(get=__get_isPartOfComposite, put=__set_isPartOfComposite))  isPartOfComposite;

constexpr void __set_isPartOfComposite(bool value) ;

constexpr bool __get_isPartOfComposite() const;


// Methods

/// @brief Method ToBinding addr 0x28ac2b8 size 0x118 virtual false final false
 ::UnityEngine::InputSystem::InputBinding ToBinding() ;

/// @brief Method FromBinding addr 0x28ac3d0 size 0x90 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson FromBinding(ByRef<::UnityEngine::InputSystem::InputBinding> binding) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::ReadActionJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6229))
// CS Name: UnityEngine.InputSystem.InputActionMap::ReadActionJson
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionMap__ReadActionJson : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "expectedControlLayout", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "passThrough", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "initialStateCheck", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionMap__ReadActionJson(::StringW name, ::StringW type, ::StringW id, ::StringW expectedControlType, ::StringW expectedControlLayout, ::StringW processors, ::StringW interactions, bool passThrough, bool initialStateCheck, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> bindings) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionMap__ReadActionJson(____UnityEngine__InputSystem__InputActionMap__ReadActionJson const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__ReadActionJson(____UnityEngine__InputSystem__InputActionMap__ReadActionJson&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__ReadActionJson& operator=(____UnityEngine__InputSystem__InputActionMap__ReadActionJson const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionMap__ReadActionJson& operator=(____UnityEngine__InputSystem__InputActionMap__ReadActionJson&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionMap__ReadActionJson(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::StringW value) ;

constexpr ::StringW __get_type() const;

 ::StringW __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(::StringW value) ;

constexpr ::StringW __get_id() const;

 ::StringW __declspec(property(get=__get_expectedControlType, put=__set_expectedControlType))  expectedControlType;

constexpr void __set_expectedControlType(::StringW value) ;

constexpr ::StringW __get_expectedControlType() const;

 ::StringW __declspec(property(get=__get_expectedControlLayout, put=__set_expectedControlLayout))  expectedControlLayout;

constexpr void __set_expectedControlLayout(::StringW value) ;

constexpr ::StringW __get_expectedControlLayout() const;

 ::StringW __declspec(property(get=__get_processors, put=__set_processors))  processors;

constexpr void __set_processors(::StringW value) ;

constexpr ::StringW __get_processors() const;

 ::StringW __declspec(property(get=__get_interactions, put=__set_interactions))  interactions;

constexpr void __set_interactions(::StringW value) ;

constexpr ::StringW __get_interactions() const;

 bool __declspec(property(get=__get_passThrough, put=__set_passThrough))  passThrough;

constexpr void __set_passThrough(bool value) ;

constexpr bool __get_passThrough() const;

 bool __declspec(property(get=__get_initialStateCheck, put=__set_initialStateCheck))  initialStateCheck;

constexpr void __set_initialStateCheck(bool value) ;

constexpr bool __get_initialStateCheck() const;

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> __declspec(property(get=__get_bindings, put=__set_bindings))  bindings;

constexpr void __set_bindings(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> __get_bindings() const;


// Methods

/// @brief Method ToAction addr 0x28ac460 size 0x25c virtual false final false
 ::UnityEngine::InputSystem::InputAction ToAction(::StringW actionName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::WriteActionJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6230))
// CS Name: UnityEngine.InputSystem.InputActionMap::WriteActionJson
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionMap__WriteActionJson : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "initialStateCheck", ty: "bool", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionMap__WriteActionJson(::StringW name, ::StringW type, ::StringW id, ::StringW expectedControlType, ::StringW processors, ::StringW interactions, bool initialStateCheck) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionMap__WriteActionJson(____UnityEngine__InputSystem__InputActionMap__WriteActionJson const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__WriteActionJson(____UnityEngine__InputSystem__InputActionMap__WriteActionJson&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__WriteActionJson& operator=(____UnityEngine__InputSystem__InputActionMap__WriteActionJson const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionMap__WriteActionJson& operator=(____UnityEngine__InputSystem__InputActionMap__WriteActionJson&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionMap__WriteActionJson(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::StringW value) ;

constexpr ::StringW __get_type() const;

 ::StringW __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(::StringW value) ;

constexpr ::StringW __get_id() const;

 ::StringW __declspec(property(get=__get_expectedControlType, put=__set_expectedControlType))  expectedControlType;

constexpr void __set_expectedControlType(::StringW value) ;

constexpr ::StringW __get_expectedControlType() const;

 ::StringW __declspec(property(get=__get_processors, put=__set_processors))  processors;

constexpr void __set_processors(::StringW value) ;

constexpr ::StringW __get_processors() const;

 ::StringW __declspec(property(get=__get_interactions, put=__set_interactions))  interactions;

constexpr void __set_interactions(::StringW value) ;

constexpr ::StringW __get_interactions() const;

 bool __declspec(property(get=__get_initialStateCheck, put=__set_initialStateCheck))  initialStateCheck;

constexpr void __set_initialStateCheck(bool value) ;

constexpr bool __get_initialStateCheck() const;


// Methods

/// @brief Method FromAction addr 0x28ac6bc size 0xbc virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson FromAction(::UnityEngine::InputSystem::InputAction action) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::ReadMapJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6231))
// CS Name: UnityEngine.InputSystem.InputActionMap::ReadMapJson
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionMap__ReadMapJson : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "actions", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson>", modifiers: "", def_value: None }, CppParam { name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionMap__ReadMapJson(::StringW name, ::StringW id, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson> actions, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> bindings) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionMap__ReadMapJson(____UnityEngine__InputSystem__InputActionMap__ReadMapJson const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__ReadMapJson(____UnityEngine__InputSystem__InputActionMap__ReadMapJson&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__ReadMapJson& operator=(____UnityEngine__InputSystem__InputActionMap__ReadMapJson const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionMap__ReadMapJson& operator=(____UnityEngine__InputSystem__InputActionMap__ReadMapJson&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionMap__ReadMapJson(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(::StringW value) ;

constexpr ::StringW __get_id() const;

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson> __declspec(property(get=__get_actions, put=__set_actions))  actions;

constexpr void __set_actions(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson> __get_actions() const;

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> __declspec(property(get=__get_bindings, put=__set_bindings))  bindings;

constexpr void __set_bindings(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> __get_bindings() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::WriteMapJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6232))
// CS Name: UnityEngine.InputSystem.InputActionMap::WriteMapJson
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionMap__WriteMapJson : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "actions", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson>", modifiers: "", def_value: None }, CppParam { name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson>", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionMap__WriteMapJson(::StringW name, ::StringW id, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson> actions, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> bindings) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionMap__WriteMapJson(____UnityEngine__InputSystem__InputActionMap__WriteMapJson const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__WriteMapJson(____UnityEngine__InputSystem__InputActionMap__WriteMapJson&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__WriteMapJson& operator=(____UnityEngine__InputSystem__InputActionMap__WriteMapJson const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionMap__WriteMapJson& operator=(____UnityEngine__InputSystem__InputActionMap__WriteMapJson&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionMap__WriteMapJson(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(::StringW value) ;

constexpr ::StringW __get_id() const;

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson> __declspec(property(get=__get_actions, put=__set_actions))  actions;

constexpr void __set_actions(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson> __get_actions() const;

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> __declspec(property(get=__get_bindings, put=__set_bindings))  bindings;

constexpr void __set_bindings(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson> __get_bindings() const;


// Methods

/// @brief Method FromMap addr 0x28ac778 size 0x1f0 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson FromMap(::UnityEngine::InputSystem::InputActionMap map) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::WriteFileJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6233))
// CS Name: UnityEngine.InputSystem.InputActionMap::WriteFileJson
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionMap__WriteFileJson : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson>", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionMap__WriteFileJson(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson> maps) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionMap__WriteFileJson(____UnityEngine__InputSystem__InputActionMap__WriteFileJson const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__WriteFileJson(____UnityEngine__InputSystem__InputActionMap__WriteFileJson&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__WriteFileJson& operator=(____UnityEngine__InputSystem__InputActionMap__WriteFileJson const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionMap__WriteFileJson& operator=(____UnityEngine__InputSystem__InputActionMap__WriteFileJson&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionMap__WriteFileJson(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson> __declspec(property(get=__get_maps, put=__set_maps))  maps;

constexpr void __set_maps(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson> __get_maps() const;


// Methods

/// @brief Method FromMap addr 0x28ac0d4 size 0x8c virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson FromMap(::UnityEngine::InputSystem::InputActionMap map) ;

/// @brief Method FromMaps addr 0x28a6e20 size 0x388 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson FromMaps(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap> maps) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::ReadFileJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6234))
// CS Name: UnityEngine.InputSystem.InputActionMap::ReadFileJson
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionMap__ReadFileJson : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "actions", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson>", modifiers: "", def_value: None }, CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson>", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionMap__ReadFileJson(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson> actions, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson> maps) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionMap__ReadFileJson(____UnityEngine__InputSystem__InputActionMap__ReadFileJson const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__ReadFileJson(____UnityEngine__InputSystem__InputActionMap__ReadFileJson&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionMap__ReadFileJson& operator=(____UnityEngine__InputSystem__InputActionMap__ReadFileJson const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionMap__ReadFileJson& operator=(____UnityEngine__InputSystem__InputActionMap__ReadFileJson&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionMap__ReadFileJson(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson> __declspec(property(get=__get_actions, put=__set_actions))  actions;

constexpr void __set_actions(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson> __get_actions() const;

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson> __declspec(property(get=__get_maps, put=__set_maps))  maps;

constexpr void __set_maps(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson> __get_maps() const;


// Methods

/// @brief Method ToMaps addr 0x28a8974 size 0xfb0 virtual false final false
 ::ArrayW<::UnityEngine::InputSystem::InputActionMap> ToMaps() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputActionMap
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6235))
// CS Name: UnityEngine.InputSystem.InputActionMap
class CORDL_TYPE InputActionMap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ReadFileJson = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadFileJson;

using WriteFileJson = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson;

using WriteMapJson = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson;

using ReadMapJson = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson;

using WriteActionJson = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson;

using ReadActionJson = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson;

using BindingJson = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson;

using BindingOverrideJson = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson;

using BindingOverrideListJson = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson;

using DeviceArray = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray;

using Flags = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags;

/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief Convert operator to ::UnityEngine::ISerializationCallbackReceiver
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief Convert operator to ::UnityEngine::InputSystem::IInputActionCollection2
constexpr operator  ::UnityEngine::InputSystem::IInputActionCollection2() const noexcept;

/// @brief Convert operator to ::UnityEngine::InputSystem::IInputActionCollection
constexpr operator  ::UnityEngine::InputSystem::IInputActionCollection() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x140};

virtual ~InputActionMap() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputActionMap", modifiers: " const&", def_value: None }]
constexpr InputActionMap(InputActionMap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputActionMap", modifiers: "&&", def_value: None }]
constexpr InputActionMap(InputActionMap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputActionMap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputActionMap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputActionMap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputActionMap& operator=(InputActionMap&& o) noexcept = default;
  constexpr InputActionMap& operator=(InputActionMap const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::StringW value) ;

constexpr ::StringW __get_m_Name() const;

 ::StringW __declspec(property(get=__get_m_Id, put=__set_m_Id))  m_Id;

constexpr void __set_m_Id(::StringW value) ;

constexpr ::StringW __get_m_Id() const;

 ::UnityEngine::InputSystem::InputActionAsset __declspec(property(get=__get_m_Asset, put=__set_m_Asset))  m_Asset;

constexpr void __set_m_Asset(::UnityEngine::InputSystem::InputActionAsset value) ;

constexpr ::UnityEngine::InputSystem::InputActionAsset __get_m_Asset() const;

 ::ArrayW<::UnityEngine::InputSystem::InputAction> __declspec(property(get=__get_m_Actions, put=__set_m_Actions))  m_Actions;

constexpr void __set_m_Actions(::ArrayW<::UnityEngine::InputSystem::InputAction> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction> __get_m_Actions() const;

 ::ArrayW<::UnityEngine::InputSystem::InputBinding> __declspec(property(get=__get_m_Bindings, put=__set_m_Bindings))  m_Bindings;

constexpr void __set_m_Bindings(::ArrayW<::UnityEngine::InputSystem::InputBinding> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding> __get_m_Bindings() const;

 ::ArrayW<::UnityEngine::InputSystem::InputBinding> __declspec(property(get=__get_m_BindingsForEachAction, put=__set_m_BindingsForEachAction))  m_BindingsForEachAction;

constexpr void __set_m_BindingsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputBinding> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding> __get_m_BindingsForEachAction() const;

 ::ArrayW<::UnityEngine::InputSystem::InputControl> __declspec(property(get=__get_m_ControlsForEachAction, put=__set_m_ControlsForEachAction))  m_ControlsForEachAction;

constexpr void __set_m_ControlsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputControl> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl> __get_m_ControlsForEachAction() const;

 int32_t __declspec(property(get=__get_m_EnabledActionsCount, put=__set_m_EnabledActionsCount))  m_EnabledActionsCount;

constexpr void __set_m_EnabledActionsCount(int32_t value) ;

constexpr int32_t __get_m_EnabledActionsCount() const;

 ::UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_SingletonAction, put=__set_m_SingletonAction))  m_SingletonAction;

constexpr void __set_m_SingletonAction(::UnityEngine::InputSystem::InputAction value) ;

constexpr ::UnityEngine::InputSystem::InputAction __get_m_SingletonAction() const;

 int32_t __declspec(property(get=__get_m_MapIndexInState, put=__set_m_MapIndexInState))  m_MapIndexInState;

constexpr void __set_m_MapIndexInState(int32_t value) ;

constexpr int32_t __get_m_MapIndexInState() const;

 ::UnityEngine::InputSystem::InputActionState __declspec(property(get=__get_m_State, put=__set_m_State))  m_State;

constexpr void __set_m_State(::UnityEngine::InputSystem::InputActionState value) ;

constexpr ::UnityEngine::InputSystem::InputActionState __get_m_State() const;

 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> __declspec(property(get=__get_m_BindingMask, put=__set_m_BindingMask))  m_BindingMask;

constexpr void __set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value) ;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> __get_m_BindingMask() const;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags value) ;

constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags __get_m_Flags() const;

 int32_t __declspec(property(get=__get_m_ParameterOverridesCount, put=__set_m_ParameterOverridesCount))  m_ParameterOverridesCount;

constexpr void __set_m_ParameterOverridesCount(int32_t value) ;

constexpr int32_t __get_m_ParameterOverridesCount() const;

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> __declspec(property(get=__get_m_ParameterOverrides, put=__set_m_ParameterOverrides))  m_ParameterOverrides;

constexpr void __set_m_ParameterOverrides(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> __get_m_ParameterOverrides() const;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray __declspec(property(get=__get_m_Devices, put=__set_m_Devices))  m_Devices;

constexpr void __set_m_Devices(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray value) ;

constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray __get_m_Devices() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>> __declspec(property(get=__get_m_ActionCallbacks, put=__set_m_ActionCallbacks))  m_ActionCallbacks;

constexpr void __set_m_ActionCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>> __get_m_ActionCallbacks() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t> __declspec(property(get=__get_m_ActionIndexByNameOrId, put=__set_m_ActionIndexByNameOrId))  m_ActionIndexByNameOrId;

constexpr void __set_m_ActionIndexByNameOrId(::System::Collections::Generic::Dictionary_2<::StringW,int32_t> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t> __get_m_ActionIndexByNameOrId() const;

static int32_t __declspec(property(get=__get_s_DeferBindingResolution, put=__set_s_DeferBindingResolution))  s_DeferBindingResolution;

static void __set_s_DeferBindingResolution(int32_t value) ;

static int32_t __get_s_DeferBindingResolution() ;


// Properties

 ::StringW __declspec(property(get=get_name))  name;

 ::UnityEngine::InputSystem::InputActionAsset __declspec(property(get=get_asset))  asset;

 ::System::Guid __declspec(property(get=get_id))  id;

 ::System::Guid __declspec(property(get=get_idDontGenerate))  idDontGenerate;

 bool __declspec(property(get=get_enabled))  enabled;

 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction> __declspec(property(get=get_actions))  actions;

 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> __declspec(property(get=get_bindings))  bindings;

 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding> __declspec(property(get=UnityEngine_InputSystem_IInputActionCollection2_get_bindings))  UnityEngine_InputSystem_IInputActionCollection2_bindings;

 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> __declspec(property(get=get_controlSchemes))  controlSchemes;

 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> __declspec(property(get=get_bindingMask, put=set_bindingMask))  bindingMask;

 ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> __declspec(property(get=get_devices, put=set_devices))  devices;

 ::UnityEngine::InputSystem::InputAction __declspec(property(get=get_Item))  Item;

 bool __declspec(property(get=get_needToResolveBindings, put=set_needToResolveBindings))  needToResolveBindings;

 bool __declspec(property(get=get_bindingResolutionNeedsFullReResolve, put=set_bindingResolutionNeedsFullReResolve))  bindingResolutionNeedsFullReResolve;

 bool __declspec(property(get=get_controlsForEachActionInitialized, put=set_controlsForEachActionInitialized))  controlsForEachActionInitialized;

 bool __declspec(property(get=get_bindingsForEachActionInitialized, put=set_bindingsForEachActionInitialized))  bindingsForEachActionInitialized;


// Methods

/// @brief Method get_name addr 0x28a9da0 size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method get_asset addr 0x28a9da8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputActionAsset get_asset() ;

/// @brief Method get_id addr 0x28a9db0 size 0x64 virtual false final false
 ::System::Guid get_id() ;

/// @brief Method get_idDontGenerate addr 0x28a7898 size 0x48 virtual false final false
 ::System::Guid get_idDontGenerate() ;

/// @brief Method get_enabled addr 0x28a6488 size 0x10 virtual false final false
 bool get_enabled() ;

/// @brief Method get_actions addr 0x28a9cf0 size 0x60 virtual false final false
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction> get_actions() ;

/// @brief Method get_bindings addr 0x28a9e48 size 0x60 virtual false final false
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> get_bindings() ;

/// @brief Method UnityEngine.InputSystem.IInputActionCollection2.get_bindings addr 0x28a9ea8 size 0x64 virtual true final true
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding> UnityEngine_InputSystem_IInputActionCollection2_get_bindings() ;

/// @brief Method get_controlSchemes addr 0x28a9f0c size 0x84 virtual true final true
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes() ;

/// @brief Method get_bindingMask addr 0x28a9f90 size 0x10 virtual true final true
 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask() ;

/// @brief Method set_bindingMask addr 0x28a9fa0 size 0x13c virtual true final true
 void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value) ;

/// @brief Method get_devices addr 0x28a55d4 size 0xe0 virtual true final true
 ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> get_devices() ;

/// @brief Method set_devices addr 0x28aa0dc size 0x44 virtual true final true
 void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> value) ;

/// @brief Method get_Item addr 0x28aa120 size 0xe8 virtual false final false
 ::UnityEngine::InputSystem::InputAction get_Item(::StringW actionNameOrId) ;

/// @brief Method add_actionTriggered addr 0x28aa208 size 0x58 virtual false final false
 void add_actionTriggered(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

/// @brief Method remove_actionTriggered addr 0x28aa260 size 0x58 virtual false final false
 void remove_actionTriggered(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

// Ctor Parameters []
explicit InputActionMap() ;

/// @brief Method .ctor addr 0x28a5490 size 0x10 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit InputActionMap(::StringW name) ;

/// @brief Method .ctor addr 0x28aa2b8 size 0x30 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method Dispose addr 0x28aa2e8 size 0x14 virtual true final true
 void Dispose() ;

/// @brief Method FindActionIndex addr 0x28aa2fc size 0x204 virtual false final false
 int32_t FindActionIndex(::StringW nameOrId) ;

/// @brief Method SetUpActionLookupTable addr 0x28aa500 size 0x120 virtual false final false
 void SetUpActionLookupTable() ;

/// @brief Method ClearActionLookupTable addr 0x28aa620 size 0x58 virtual false final false
 void ClearActionLookupTable() ;

/// @brief Method FindActionIndex addr 0x28aa678 size 0x94 virtual false final false
 int32_t FindActionIndex(::System::Guid id) ;

/// @brief Method FindAction addr 0x28a73e4 size 0x11c virtual true final true
 ::UnityEngine::InputSystem::InputAction FindAction(::StringW actionNameOrId, bool throwIfNotFound) ;

/// @brief Method FindAction addr 0x28a79e8 size 0x48 virtual false final false
 ::UnityEngine::InputSystem::InputAction FindAction(::System::Guid id) ;

/// @brief Method IsUsableWithDevice addr 0x28a7db0 size 0x118 virtual false final false
 bool IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method Enable addr 0x28a8028 size 0x4c virtual true final true
 void Enable() ;

/// @brief Method Disable addr 0x28a81d4 size 0x34 virtual true final true
 void Disable() ;

/// @brief Method Clone addr 0x28aa70c size 0x21c virtual false final false
 ::UnityEngine::InputSystem::InputActionMap Clone() ;

/// @brief Method System.ICloneable.Clone addr 0x28aa928 size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Contains addr 0x28aa92c size 0x2c virtual true final true
 bool Contains(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method ToString addr 0x28aa958 size 0xc8 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetEnumerator addr 0x28aaa20 size 0xa0 virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x28aaac0 size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_needToResolveBindings addr 0x28aaac4 size 0xc virtual false final false
 bool get_needToResolveBindings() ;

/// @brief Method set_needToResolveBindings addr 0x28aaad0 size 0x1c virtual false final false
 void set_needToResolveBindings(bool value) ;

/// @brief Method get_bindingResolutionNeedsFullReResolve addr 0x28aaaec size 0xc virtual false final false
 bool get_bindingResolutionNeedsFullReResolve() ;

/// @brief Method set_bindingResolutionNeedsFullReResolve addr 0x28aaaf8 size 0x1c virtual false final false
 void set_bindingResolutionNeedsFullReResolve(bool value) ;

/// @brief Method get_controlsForEachActionInitialized addr 0x28aab14 size 0xc virtual false final false
 bool get_controlsForEachActionInitialized() ;

/// @brief Method set_controlsForEachActionInitialized addr 0x28aab20 size 0x1c virtual false final false
 void set_controlsForEachActionInitialized(bool value) ;

/// @brief Method get_bindingsForEachActionInitialized addr 0x28aab3c size 0xc virtual false final false
 bool get_bindingsForEachActionInitialized() ;

/// @brief Method set_bindingsForEachActionInitialized addr 0x28aab48 size 0x1c virtual false final false
 void set_bindingsForEachActionInitialized(bool value) ;

/// @brief Method GetBindingsForSingleAction addr 0x28a431c size 0x80 virtual false final false
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> GetBindingsForSingleAction(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method GetControlsForSingleAction addr 0x28a4414 size 0x80 virtual false final false
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl> GetControlsForSingleAction(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method SetUpPerActionControlAndBindingArrays addr 0x28aab64 size 0x5f0 virtual false final false
 void SetUpPerActionControlAndBindingArrays() ;

/// @brief Method OnWantToChangeSetup addr 0x28a83ac size 0x29c virtual false final false
 void OnWantToChangeSetup() ;

/// @brief Method OnSetupChanged addr 0x28a86cc size 0x1d8 virtual false final false
 void OnSetupChanged() ;

/// @brief Method OnBindingModified addr 0x28ab17c size 0x1c virtual false final false
 void OnBindingModified() ;

/// @brief Method ClearCachedActionData addr 0x28ab154 size 0x28 virtual false final false
 void ClearCachedActionData(bool onlyControls) ;

/// @brief Method GenerateId addr 0x28a9e14 size 0x34 virtual false final false
 void GenerateId() ;

/// @brief Method LazyResolveBindings addr 0x28a4248 size 0xa4 virtual false final false
 bool LazyResolveBindings(bool fullResolve) ;

/// @brief Method ResolveBindingsIfNecessary addr 0x28a43e0 size 0x34 virtual false final false
 bool ResolveBindingsIfNecessary() ;

/// @brief Method ResolveBindings addr 0x28ab198 size 0xbc8 virtual false final false
 void ResolveBindings() ;

/// @brief Method FindBinding addr 0x28a75ec size 0xe0 virtual true final true
 int32_t FindBinding(::UnityEngine::InputSystem::InputBinding mask, ByRef<::UnityEngine::InputSystem::InputAction> action) ;

/// @brief Method FindBindingRelativeToMap addr 0x28abe40 size 0xb8 virtual false final false
 int32_t FindBindingRelativeToMap(::UnityEngine::InputSystem::InputBinding mask) ;

/// @brief Method FromJson addr 0x28abef8 size 0xb4 virtual false final false
static ::ArrayW<::UnityEngine::InputSystem::InputActionMap> FromJson(::StringW json) ;

/// @brief Method ToJson addr 0x28abfac size 0xb8 virtual false final false
static ::StringW ToJson(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap> maps) ;

/// @brief Method ToJson addr 0x28ac064 size 0x70 virtual false final false
 ::StringW ToJson() ;

/// @brief Method OnBeforeSerialize addr 0x28ac160 size 0x4 virtual true final true
 void OnBeforeSerialize() ;

/// @brief Method OnAfterDeserialize addr 0x28ac164 size 0x64 virtual true final true
 void OnAfterDeserialize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__Flags, "UnityEngine.InputSystem", "InputActionMap/Flags");
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionMap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap, "UnityEngine.InputSystem", "InputActionMap");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingJson, "UnityEngine.InputSystem", "InputActionMap/BindingJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson, "UnityEngine.InputSystem", "InputActionMap/BindingOverrideJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideListJson, "UnityEngine.InputSystem", "InputActionMap/BindingOverrideListJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray, "UnityEngine.InputSystem", "InputActionMap/DeviceArray");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadActionJson, "UnityEngine.InputSystem", "InputActionMap/ReadActionJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadFileJson, "UnityEngine.InputSystem", "InputActionMap/ReadFileJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson, "UnityEngine.InputSystem", "InputActionMap/ReadMapJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteActionJson, "UnityEngine.InputSystem", "InputActionMap/WriteActionJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteFileJson, "UnityEngine.InputSystem", "InputActionMap/WriteFileJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson, "UnityEngine.InputSystem", "InputActionMap/WriteMapJson");
