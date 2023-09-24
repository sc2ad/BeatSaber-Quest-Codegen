#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputDeviceBuilder__RefInstance;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceBuilder;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputDeviceBuilder__RefInstance;
}
// Type: ::RefInstance
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6700))
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceBuilder::RefInstance
struct CORDL_TYPE UnityEngine__InputSystem__Layouts__InputDeviceBuilder__RefInstance : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;


                    constexpr UnityEngine__InputSystem__Layouts__InputDeviceBuilder__RefInstance(UnityEngine__InputSystem__Layouts__InputDeviceBuilder__RefInstance const&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputDeviceBuilder__RefInstance(UnityEngine__InputSystem__Layouts__InputDeviceBuilder__RefInstance&&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputDeviceBuilder__RefInstance& operator=(UnityEngine__InputSystem__Layouts__InputDeviceBuilder__RefInstance const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Layouts__InputDeviceBuilder__RefInstance& operator=(UnityEngine__InputSystem__Layouts__InputDeviceBuilder__RefInstance&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputDeviceBuilder__RefInstance(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Methods

/// @brief Method Dispose addr 0x2973f4c size 0x8c virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
// Type: UnityEngine.InputSystem.Layouts::InputDeviceBuilder
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6701))
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceBuilder
struct CORDL_TYPE InputDeviceBuilder : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using RefInstance = UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceBuilder__RefInstance;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Device", ty: "UnityEngine::InputSystem::InputDevice", modifiers: "", def_value: None }, CppParam { name: "m_LayoutCacheRef", ty: "UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance", modifiers: "", def_value: None }, CppParam { name: "m_ChildControlOverrides", ty: "System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>", modifiers: "", def_value: None }, CppParam { name: "m_StateOffsetToControlMap", ty: "System::Collections::Generic::List_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "m_StringBuilder", ty: "System::Text::StringBuilder", modifiers: "", def_value: None }]
constexpr InputDeviceBuilder(UnityEngine::InputSystem::InputDevice m_Device, UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance m_LayoutCacheRef, System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> m_ChildControlOverrides, System::Collections::Generic::List_1<uint32_t> m_StateOffsetToControlMap, System::Text::StringBuilder m_StringBuilder) noexcept;


                    constexpr InputDeviceBuilder(InputDeviceBuilder const&) = default;
                    constexpr InputDeviceBuilder(InputDeviceBuilder&&) = default;
                    constexpr InputDeviceBuilder& operator=(InputDeviceBuilder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputDeviceBuilder& operator=(InputDeviceBuilder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputDeviceBuilder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::InputDevice __declspec(property(get=__get_m_Device, put=__set_m_Device))  m_Device;

constexpr void __set_m_Device(UnityEngine::InputSystem::InputDevice value) ;

constexpr UnityEngine::InputSystem::InputDevice __get_m_Device() const;

 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance __declspec(property(get=__get_m_LayoutCacheRef, put=__set_m_LayoutCacheRef))  m_LayoutCacheRef;

constexpr void __set_m_LayoutCacheRef(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance value) ;

constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance __get_m_LayoutCacheRef() const;

 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> __declspec(property(get=__get_m_ChildControlOverrides, put=__set_m_ChildControlOverrides))  m_ChildControlOverrides;

constexpr void __set_m_ChildControlOverrides(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> __get_m_ChildControlOverrides() const;

 System::Collections::Generic::List_1<uint32_t> __declspec(property(get=__get_m_StateOffsetToControlMap, put=__set_m_StateOffsetToControlMap))  m_StateOffsetToControlMap;

constexpr void __set_m_StateOffsetToControlMap(System::Collections::Generic::List_1<uint32_t> value) ;

constexpr System::Collections::Generic::List_1<uint32_t> __get_m_StateOffsetToControlMap() const;

 System::Text::StringBuilder __declspec(property(get=__get_m_StringBuilder, put=__set_m_StringBuilder))  m_StringBuilder;

constexpr void __set_m_StringBuilder(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get_m_StringBuilder() const;

/// @brief Field kSizeForControlUsingStateFromOtherControl offset 0
static constexpr uint32_t  kSizeForControlUsingStateFromOtherControl{4294967295u};

static UnityEngine::InputSystem::Layouts::InputDeviceBuilder __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(UnityEngine::InputSystem::Layouts::InputDeviceBuilder value) ;

static UnityEngine::InputSystem::Layouts::InputDeviceBuilder __get_s_Instance() ;

static int32_t __declspec(property(get=__get_s_InstanceRef, put=__set_s_InstanceRef))  s_InstanceRef;

static void __set_s_InstanceRef(int32_t value) ;

static int32_t __get_s_InstanceRef() ;


// Properties

static UnityEngine::InputSystem::Layouts::InputDeviceBuilder __declspec(property(get=get_instance))  instance;


// Methods

/// @brief Method Setup addr 0x2970e6c size 0x15c virtual false final false
 void Setup(UnityEngine::InputSystem::Utilities::InternedString layout, UnityEngine::InputSystem::Utilities::InternedString variants, UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription) ;

/// @brief Method Finish addr 0x29711cc size 0x18 virtual false final false
 UnityEngine::InputSystem::InputDevice Finish() ;

/// @brief Method Dispose addr 0x2971258 size 0x8 virtual true final true
 void Dispose() ;

/// @brief Method Reset addr 0x29711e4 size 0x74 virtual false final false
 void Reset() ;

/// @brief Method InstantiateLayout addr 0x2970fc8 size 0x6c virtual false final false
 UnityEngine::InputSystem::InputControl InstantiateLayout(UnityEngine::InputSystem::Utilities::InternedString layout, UnityEngine::InputSystem::Utilities::InternedString variants, UnityEngine::InputSystem::Utilities::InternedString name, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method InstantiateLayout addr 0x29712bc size 0x5a0 virtual false final false
 UnityEngine::InputSystem::InputControl InstantiateLayout(UnityEngine::InputSystem::Layouts::InputControlLayout layout, UnityEngine::InputSystem::Utilities::InternedString variants, UnityEngine::InputSystem::Utilities::InternedString name, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method AddChildControls addr 0x297185c size 0x68c virtual false final false
 void AddChildControls(UnityEngine::InputSystem::Layouts::InputControlLayout layout, UnityEngine::InputSystem::Utilities::InternedString variants, UnityEngine::InputSystem::InputControl parent, ByRef<bool> haveChildrenUsingStateFromOtherControls) ;

/// @brief Method AddChildControl addr 0x29729f0 size 0x728 virtual false final false
 UnityEngine::InputSystem::InputControl AddChildControl(UnityEngine::InputSystem::Layouts::InputControlLayout layout, UnityEngine::InputSystem::Utilities::InternedString variants, UnityEngine::InputSystem::InputControl parent, ByRef<bool> haveChildrenUsingStateFromOtherControls, UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem controlItem, int32_t childIndex, ::StringW nameOverride) ;

/// @brief Method InsertChildControlOverride addr 0x2972858 size 0x198 virtual false final false
 void InsertChildControlOverride(UnityEngine::InputSystem::InputControl parent, ByRef<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlItem) ;

/// @brief Method ChildControlOverridePath addr 0x29731c8 size 0x90 virtual false final false
 ::StringW ChildControlOverridePath(UnityEngine::InputSystem::InputControl parent, UnityEngine::InputSystem::Utilities::InternedString controlName) ;

/// @brief Method AddChildControlIfMissing addr 0x2973118 size 0xb0 virtual false final false
 void AddChildControlIfMissing(UnityEngine::InputSystem::Layouts::InputControlLayout layout, UnityEngine::InputSystem::Utilities::InternedString variants, UnityEngine::InputSystem::InputControl parent, ByRef<bool> haveChildrenUsingStateFromOtherControls, ByRef<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlItem) ;

/// @brief Method InsertChildControl addr 0x297351c size 0x328 virtual false final false
 UnityEngine::InputSystem::InputControl InsertChildControl(UnityEngine::InputSystem::Layouts::InputControlLayout layout, UnityEngine::InputSystem::Utilities::InternedString variant, UnityEngine::InputSystem::InputControl parent, ByRef<bool> haveChildrenUsingStateFromOtherControls, ByRef<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlItem) ;

/// @brief Method ApplyUseStateFrom addr 0x29726bc size 0x19c virtual false final false
static void ApplyUseStateFrom(UnityEngine::InputSystem::InputControl parent, ByRef<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlItem, UnityEngine::InputSystem::Layouts::InputControlLayout layout) ;

/// @brief Method ShiftChildIndicesInHierarchyOneUp addr 0x2973844 size 0x60 virtual false final false
static void ShiftChildIndicesInHierarchyOneUp(UnityEngine::InputSystem::InputDevice device, int32_t startIndex, UnityEngine::InputSystem::InputControl exceptControl) ;

/// @brief Method SetDisplayName addr 0x29738a4 size 0x200 virtual false final false
 void SetDisplayName(UnityEngine::InputSystem::InputControl control, ::StringW longDisplayNameFromLayout, ::StringW shortDisplayNameFromLayout, bool shortName) ;

/// @brief Method AddParentDisplayNameRecursive addr 0x2973aa4 size 0xb0 virtual false final false
static void AddParentDisplayNameRecursive(UnityEngine::InputSystem::InputControl control, System::Text::StringBuilder stringBuilder, bool shortName) ;

/// @brief Method AddProcessors addr 0x29732e0 size 0x23c virtual false final false
static void AddProcessors(UnityEngine::InputSystem::InputControl control, ByRef<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlItem, ::StringW layoutName) ;

/// @brief Method SetFormat addr 0x2973258 size 0x88 virtual false final false
static void SetFormat(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem controlItem) ;

/// @brief Method FindOrLoadLayout addr 0x2971260 size 0x5c virtual false final false
static UnityEngine::InputSystem::Layouts::InputControlLayout FindOrLoadLayout(::StringW name) ;

/// @brief Method ComputeStateLayout addr 0x2971ee8 size 0x7d4 virtual false final false
static void ComputeStateLayout(UnityEngine::InputSystem::InputControl control) ;

/// @brief Method FinalizeControlHierarchy addr 0x2971034 size 0x198 virtual false final false
 void FinalizeControlHierarchy() ;

/// @brief Method FinalizeControlHierarchyRecursive addr 0x2973b54 size 0x360 virtual false final false
 void FinalizeControlHierarchyRecursive(UnityEngine::InputSystem::InputControl control, int32_t controlIndex, ::ArrayW<UnityEngine::InputSystem::InputControl> allControls, bool noisy, bool dontReset) ;

/// @brief Method get_instance addr 0x2973eb4 size 0x44 virtual false final false
static ByRef<UnityEngine::InputSystem::Layouts::InputDeviceBuilder> get_instance() ;

/// @brief Method Ref addr 0x2973ef8 size 0x54 virtual false final false
static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceBuilder__RefInstance Ref() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::InputDeviceBuilder, "UnityEngine.InputSystem.Layouts", "InputDeviceBuilder");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceBuilder__RefInstance, "UnityEngine.InputSystem.Layouts", "InputDeviceBuilder/RefInstance");
