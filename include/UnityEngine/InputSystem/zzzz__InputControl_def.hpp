#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputControl__ControlFlags;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBlock;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputControl__ControlFlags;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Type: ::ControlFlags
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6297))
// CS Name: UnityEngine.InputSystem.InputControl::ControlFlags
struct CORDL_TYPE UnityEngine__InputSystem__InputControl__ControlFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputControl__ControlFlags(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__InputControl__ControlFlags(UnityEngine__InputSystem__InputControl__ControlFlags const&) = default;
                    constexpr UnityEngine__InputSystem__InputControl__ControlFlags(UnityEngine__InputSystem__InputControl__ControlFlags&&) = default;
                    constexpr UnityEngine__InputSystem__InputControl__ControlFlags& operator=(UnityEngine__InputSystem__InputControl__ControlFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputControl__ControlFlags& operator=(UnityEngine__InputSystem__InputControl__ControlFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputControl__ControlFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__InputControl__ControlFlags_Unwrapped : int32_t {
__ConfigUpToDate = 1,
__IsNoisy = 2,
__IsSynthetic = 4,
__IsButton = 8,
__DontReset = 16,
__SetupFinished = 32,
__UsesStateFromOtherControl = 64,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__InputControl__ControlFlags_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__InputControl__ControlFlags_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ConfigUpToDate offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputControl__ControlFlags const ConfigUpToDate;

/// @brief Field IsNoisy offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputControl__ControlFlags const IsNoisy;

/// @brief Field IsSynthetic offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputControl__ControlFlags const IsSynthetic;

/// @brief Field IsButton offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputControl__ControlFlags const IsButton;

/// @brief Field DontReset offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputControl__ControlFlags const DontReset;

/// @brief Field SetupFinished offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputControl__ControlFlags const SetupFinished;

/// @brief Field UsesStateFromOtherControl offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputControl__ControlFlags const UsesStateFromOtherControl;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6298))
// CS Name: UnityEngine.InputSystem.InputControl
class CORDL_TYPE InputControl : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ControlFlags = UnityEngine::InputSystem::UnityEngine__InputSystem__InputControl__ControlFlags;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd8};

virtual ~InputControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl", modifiers: " const&", def_value: None }]
constexpr InputControl(InputControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl", modifiers: "&&", def_value: None }]
constexpr InputControl(InputControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControl(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControl& operator=(InputControl&& o) noexcept = default;
  constexpr InputControl& operator=(InputControl const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::LowLevel::InputStateBlock __declspec(property(get=__get_m_StateBlock, put=__set_m_StateBlock))  m_StateBlock;

constexpr void __set_m_StateBlock(UnityEngine::InputSystem::LowLevel::InputStateBlock value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputStateBlock __get_m_StateBlock() const;

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(UnityEngine::InputSystem::Utilities::InternedString value) ;

constexpr UnityEngine::InputSystem::Utilities::InternedString __get_m_Name() const;

 ::StringW __declspec(property(get=__get_m_Path, put=__set_m_Path))  m_Path;

constexpr void __set_m_Path(::StringW value) ;

constexpr ::StringW __get_m_Path() const;

 ::StringW __declspec(property(get=__get_m_DisplayName, put=__set_m_DisplayName))  m_DisplayName;

constexpr void __set_m_DisplayName(::StringW value) ;

constexpr ::StringW __get_m_DisplayName() const;

 ::StringW __declspec(property(get=__get_m_DisplayNameFromLayout, put=__set_m_DisplayNameFromLayout))  m_DisplayNameFromLayout;

constexpr void __set_m_DisplayNameFromLayout(::StringW value) ;

constexpr ::StringW __get_m_DisplayNameFromLayout() const;

 ::StringW __declspec(property(get=__get_m_ShortDisplayName, put=__set_m_ShortDisplayName))  m_ShortDisplayName;

constexpr void __set_m_ShortDisplayName(::StringW value) ;

constexpr ::StringW __get_m_ShortDisplayName() const;

 ::StringW __declspec(property(get=__get_m_ShortDisplayNameFromLayout, put=__set_m_ShortDisplayNameFromLayout))  m_ShortDisplayNameFromLayout;

constexpr void __set_m_ShortDisplayNameFromLayout(::StringW value) ;

constexpr ::StringW __get_m_ShortDisplayNameFromLayout() const;

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_m_Layout, put=__set_m_Layout))  m_Layout;

constexpr void __set_m_Layout(UnityEngine::InputSystem::Utilities::InternedString value) ;

constexpr UnityEngine::InputSystem::Utilities::InternedString __get_m_Layout() const;

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_m_Variants, put=__set_m_Variants))  m_Variants;

constexpr void __set_m_Variants(UnityEngine::InputSystem::Utilities::InternedString value) ;

constexpr UnityEngine::InputSystem::Utilities::InternedString __get_m_Variants() const;

 UnityEngine::InputSystem::InputDevice __declspec(property(get=__get_m_Device, put=__set_m_Device))  m_Device;

constexpr void __set_m_Device(UnityEngine::InputSystem::InputDevice value) ;

constexpr UnityEngine::InputSystem::InputDevice __get_m_Device() const;

 UnityEngine::InputSystem::InputControl __declspec(property(get=__get_m_Parent, put=__set_m_Parent))  m_Parent;

constexpr void __set_m_Parent(UnityEngine::InputSystem::InputControl value) ;

constexpr UnityEngine::InputSystem::InputControl __get_m_Parent() const;

 int32_t __declspec(property(get=__get_m_UsageCount, put=__set_m_UsageCount))  m_UsageCount;

constexpr void __set_m_UsageCount(int32_t value) ;

constexpr int32_t __get_m_UsageCount() const;

 int32_t __declspec(property(get=__get_m_UsageStartIndex, put=__set_m_UsageStartIndex))  m_UsageStartIndex;

constexpr void __set_m_UsageStartIndex(int32_t value) ;

constexpr int32_t __get_m_UsageStartIndex() const;

 int32_t __declspec(property(get=__get_m_AliasCount, put=__set_m_AliasCount))  m_AliasCount;

constexpr void __set_m_AliasCount(int32_t value) ;

constexpr int32_t __get_m_AliasCount() const;

 int32_t __declspec(property(get=__get_m_AliasStartIndex, put=__set_m_AliasStartIndex))  m_AliasStartIndex;

constexpr void __set_m_AliasStartIndex(int32_t value) ;

constexpr int32_t __get_m_AliasStartIndex() const;

 int32_t __declspec(property(get=__get_m_ChildCount, put=__set_m_ChildCount))  m_ChildCount;

constexpr void __set_m_ChildCount(int32_t value) ;

constexpr int32_t __get_m_ChildCount() const;

 int32_t __declspec(property(get=__get_m_ChildStartIndex, put=__set_m_ChildStartIndex))  m_ChildStartIndex;

constexpr void __set_m_ChildStartIndex(int32_t value) ;

constexpr int32_t __get_m_ChildStartIndex() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControl__ControlFlags __declspec(property(get=__get_m_ControlFlags, put=__set_m_ControlFlags))  m_ControlFlags;

constexpr void __set_m_ControlFlags(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControl__ControlFlags value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControl__ControlFlags __get_m_ControlFlags() const;

 UnityEngine::InputSystem::Utilities::PrimitiveValue __declspec(property(get=__get_m_DefaultState, put=__set_m_DefaultState))  m_DefaultState;

constexpr void __set_m_DefaultState(UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

constexpr UnityEngine::InputSystem::Utilities::PrimitiveValue __get_m_DefaultState() const;

 UnityEngine::InputSystem::Utilities::PrimitiveValue __declspec(property(get=__get_m_MinValue, put=__set_m_MinValue))  m_MinValue;

constexpr void __set_m_MinValue(UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

constexpr UnityEngine::InputSystem::Utilities::PrimitiveValue __get_m_MinValue() const;

 UnityEngine::InputSystem::Utilities::PrimitiveValue __declspec(property(get=__get_m_MaxValue, put=__set_m_MaxValue))  m_MaxValue;

constexpr void __set_m_MaxValue(UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

constexpr UnityEngine::InputSystem::Utilities::PrimitiveValue __get_m_MaxValue() const;


// Properties

 ::StringW __declspec(property(get=get_name))  name;

 ::StringW __declspec(property(get=get_displayName, put=set_displayName))  displayName;

 ::StringW __declspec(property(get=get_shortDisplayName, put=set_shortDisplayName))  shortDisplayName;

 ::StringW __declspec(property(get=get_path))  path;

 ::StringW __declspec(property(get=get_layout))  layout;

 ::StringW __declspec(property(get=get_variants))  variants;

 UnityEngine::InputSystem::InputDevice __declspec(property(get=get_device))  device;

 UnityEngine::InputSystem::InputControl __declspec(property(get=get_parent))  parent;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputControl> __declspec(property(get=get_children))  children;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=get_usages))  usages;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=get_aliases))  aliases;

 UnityEngine::InputSystem::LowLevel::InputStateBlock __declspec(property(get=get_stateBlock))  stateBlock;

 bool __declspec(property(get=get_noisy, put=set_noisy))  noisy;

 bool __declspec(property(get=get_synthetic, put=set_synthetic))  synthetic;

 UnityEngine::InputSystem::InputControl __declspec(property(get=get_Item))  Item;

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

 void* __declspec(property(get=get_currentStatePtr))  currentStatePtr;

 void* __declspec(property(get=get_previousFrameStatePtr))  previousFrameStatePtr;

 void* __declspec(property(get=get_defaultStatePtr))  defaultStatePtr;

 void* __declspec(property(get=get_noiseMaskPtr))  noiseMaskPtr;

 uint32_t __declspec(property(get=get_stateOffsetRelativeToDeviceRoot))  stateOffsetRelativeToDeviceRoot;

 bool __declspec(property(get=get_isSetupFinished, put=set_isSetupFinished))  isSetupFinished;

 bool __declspec(property(get=get_isButton, put=set_isButton))  isButton;

 bool __declspec(property(get=get_isConfigUpToDate, put=set_isConfigUpToDate))  isConfigUpToDate;

 bool __declspec(property(get=get_dontReset, put=set_dontReset))  dontReset;

 bool __declspec(property(get=get_usesStateFromOtherControl, put=set_usesStateFromOtherControl))  usesStateFromOtherControl;

 bool __declspec(property(get=get_hasDefaultState))  hasDefaultState;


// Methods

/// @brief Method get_name addr 0x28cfa18 size 0x10 virtual false final false
 ::StringW get_name() ;

/// @brief Method get_displayName addr 0x28cfa28 size 0x58 virtual false final false
 ::StringW get_displayName() ;

/// @brief Method set_displayName addr 0x28cfab4 size 0x8 virtual false final false
 void set_displayName(::StringW value) ;

/// @brief Method get_shortDisplayName addr 0x28cfabc size 0x44 virtual false final false
 ::StringW get_shortDisplayName() ;

/// @brief Method set_shortDisplayName addr 0x28cfb00 size 0x8 virtual false final false
 void set_shortDisplayName(::StringW value) ;

/// @brief Method get_path addr 0x28cfb08 size 0x40 virtual false final false
 ::StringW get_path() ;

/// @brief Method get_layout addr 0x28cfc3c size 0x10 virtual false final false
 ::StringW get_layout() ;

/// @brief Method get_variants addr 0x28cfc4c size 0x10 virtual false final false
 ::StringW get_variants() ;

/// @brief Method get_device addr 0x28cfc5c size 0x8 virtual false final false
 UnityEngine::InputSystem::InputDevice get_device() ;

/// @brief Method get_parent addr 0x28cfc64 size 0x8 virtual false final false
 UnityEngine::InputSystem::InputControl get_parent() ;

/// @brief Method get_children addr 0x28cfc6c size 0x70 virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputControl> get_children() ;

/// @brief Method get_usages addr 0x28cfcdc size 0x70 virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> get_usages() ;

/// @brief Method get_aliases addr 0x28cfd4c size 0x70 virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> get_aliases() ;

/// @brief Method get_stateBlock addr 0x28cfdbc size 0xc virtual false final false
 UnityEngine::InputSystem::LowLevel::InputStateBlock get_stateBlock() ;

/// @brief Method get_noisy addr 0x28cfdc8 size 0xc virtual false final false
 bool get_noisy() ;

/// @brief Method set_noisy addr 0x28cfdd4 size 0xd8 virtual false final false
 void set_noisy(bool value) ;

/// @brief Method get_synthetic addr 0x28cfeac size 0xc virtual false final false
 bool get_synthetic() ;

/// @brief Method set_synthetic addr 0x28cfeb8 size 0x1c virtual false final false
 void set_synthetic(bool value) ;

/// @brief Method get_Item addr 0x28cfed4 size 0x88 virtual false final false
 UnityEngine::InputSystem::InputControl get_Item(::StringW path) ;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ToString addr 0x28cffbc size 0x68 virtual true final false
 ::StringW ToString() ;

/// @brief Method DebuggerDisplay addr 0x28d0024 size 0x124 virtual false final false
 ::StringW DebuggerDisplay() ;

/// @brief Method EvaluateMagnitude addr 0x28d01c4 size 0x2c virtual false final false
 float_t EvaluateMagnitude() ;

/// @brief Method EvaluateMagnitude addr 0x28d0204 size 0x8 virtual true final false
 float_t EvaluateMagnitude(void* statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromStateAsObject(void* statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x28d020c size 0x68 virtual true final false
 void WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x28d0274 size 0x68 virtual true final false
 void WriteValueFromObjectIntoState(::bs_hook::Il2CppWrapperType value, void* statePtr) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method TryGetChildControl addr 0x28d02dc size 0x84 virtual false final false
 UnityEngine::InputSystem::InputControl TryGetChildControl(::StringW path) ;

/// @brief Method TryGetChildControl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TControl>
 TControl TryGetChildControl(::StringW path) ;

/// @brief Method GetChildControl addr 0x28d0360 size 0x11c virtual false final false
 UnityEngine::InputSystem::InputControl GetChildControl(::StringW path) ;

/// @brief Method GetChildControl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TControl>
 TControl GetChildControl(::StringW path) ;

static UnityEngine::InputSystem::InputControl New_ctor() ;

/// @brief Method .ctor addr 0x28d0528 size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method FinishSetup addr 0x28d0548 size 0x4 virtual true final false
 void FinishSetup() ;

/// @brief Method RefreshConfigurationIfNeeded addr 0x28cfa80 size 0x34 virtual false final false
 void RefreshConfigurationIfNeeded() ;

/// @brief Method RefreshConfiguration addr 0x28d0574 size 0x4 virtual true final false
 void RefreshConfiguration() ;

/// @brief Method get_currentStatePtr addr 0x28d01f0 size 0x14 virtual false final false
 void* get_currentStatePtr() ;

/// @brief Method get_previousFrameStatePtr addr 0x28d0734 size 0x14 virtual false final false
 void* get_previousFrameStatePtr() ;

/// @brief Method get_defaultStatePtr addr 0x28d0748 size 0x48 virtual false final false
 void* get_defaultStatePtr() ;

/// @brief Method get_noiseMaskPtr addr 0x28d0790 size 0x48 virtual false final false
 void* get_noiseMaskPtr() ;

/// @brief Method get_stateOffsetRelativeToDeviceRoot addr 0x28d07d8 size 0x24 virtual false final false
 uint32_t get_stateOffsetRelativeToDeviceRoot() ;

/// @brief Method get_isSetupFinished addr 0x28d07fc size 0xc virtual false final false
 bool get_isSetupFinished() ;

/// @brief Method set_isSetupFinished addr 0x28d0808 size 0x1c virtual false final false
 void set_isSetupFinished(bool value) ;

/// @brief Method get_isButton addr 0x28d0824 size 0xc virtual false final false
 bool get_isButton() ;

/// @brief Method set_isButton addr 0x28d0830 size 0x1c virtual false final false
 void set_isButton(bool value) ;

/// @brief Method get_isConfigUpToDate addr 0x28d054c size 0xc virtual false final false
 bool get_isConfigUpToDate() ;

/// @brief Method set_isConfigUpToDate addr 0x28d0558 size 0x1c virtual false final false
 void set_isConfigUpToDate(bool value) ;

/// @brief Method get_dontReset addr 0x28d084c size 0xc virtual false final false
 bool get_dontReset() ;

/// @brief Method set_dontReset addr 0x28d0858 size 0x1c virtual false final false
 void set_dontReset(bool value) ;

/// @brief Method get_usesStateFromOtherControl addr 0x28d0874 size 0xc virtual false final false
 bool get_usesStateFromOtherControl() ;

/// @brief Method set_usesStateFromOtherControl addr 0x28d0880 size 0x1c virtual false final false
 void set_usesStateFromOtherControl(bool value) ;

/// @brief Method get_hasDefaultState addr 0x28d089c size 0x20 virtual false final false
 bool get_hasDefaultState() ;

/// @brief Method CallFinishSetupRecursive addr 0x28d08bc size 0xb0 virtual false final false
 void CallFinishSetupRecursive() ;

/// @brief Method MakeChildPath addr 0x28d047c size 0xac virtual false final false
 ::StringW MakeChildPath(::StringW path) ;

/// @brief Method BakeOffsetIntoStateBlockRecursive addr 0x28d096c size 0xb0 virtual false final false
 void BakeOffsetIntoStateBlockRecursive(uint32_t offset) ;

/// @brief Method GetDeviceIndex addr 0x28d0578 size 0x1bc virtual false final false
 int32_t GetDeviceIndex() ;

/// @brief Method IsValueConsideredPressed addr 0x28d0a1c size 0xb8 virtual false final false
 bool IsValueConsideredPressed(float_t value) ;

/// @brief Method AddProcessor addr 0x28d0ad4 size 0x4 virtual true final false
 void AddProcessor(::bs_hook::Il2CppWrapperType first) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControl__ControlFlags, "UnityEngine.InputSystem", "InputControl/ControlFlags");
NEED_NO_BOX(UnityEngine::InputSystem::InputControl);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::InputControl, "UnityEngine.InputSystem", "InputControl");
