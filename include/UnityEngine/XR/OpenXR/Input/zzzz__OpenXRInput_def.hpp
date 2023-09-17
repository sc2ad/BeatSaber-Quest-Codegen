#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::XR::OpenXR::Features {
class ____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR::OpenXR::Features {
struct ____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::XR::OpenXR::Features {
class ____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class ____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Input {
struct ____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags;
}
namespace UnityEngine::XR::OpenXR::Input {
class OpenXRInput;
}
namespace UnityEngine::XR::OpenXR::Input {
class ____UnityEngine__XR__OpenXR__Input__OpenXRInput____c;
}
namespace UnityEngine::XR::OpenXR::Input {
struct ____UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand;
}
namespace UnityEngine::XR::OpenXR::Input {
struct ____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding;
}
namespace UnityEngine::XR::OpenXR::Input {
struct ____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid;
}
// Type: ::SerializedGuid
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14191))
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput::SerializedGuid
struct CORDL_TYPE ____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "guid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "ulong1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "ulong2", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid(::System::Guid guid, uint64_t ulong1, uint64_t ulong2) noexcept;


                    constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid(____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid const&) = default;
                    constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid(____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid&&) = default;
                    constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid& operator=(____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid& operator=(____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Guid __declspec(property(get=__get_guid, put=__set_guid))  guid;

constexpr void __set_guid(::System::Guid value) ;

constexpr ::System::Guid __get_guid() const;

 uint64_t __declspec(property(get=__get_ulong1, put=__set_ulong1))  ulong1;

constexpr void __set_ulong1(uint64_t value) ;

constexpr uint64_t __get_ulong1() const;

 uint64_t __declspec(property(get=__get_ulong2, put=__set_ulong2))  ulong2;

constexpr void __set_ulong2(uint64_t value) ;

constexpr uint64_t __get_ulong2() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Input
// Type: ::SerializedBinding
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14192))
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput::SerializedBinding
struct CORDL_TYPE ____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "actionId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding(uint64_t actionId, ::StringW path) noexcept;


                    constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding(____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding const&) = default;
                    constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding(____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding&&) = default;
                    constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding& operator=(____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding& operator=(____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_actionId, put=__set_actionId))  actionId;

constexpr void __set_actionId(uint64_t value) ;

constexpr uint64_t __get_actionId() const;

 ::StringW __declspec(property(get=__get_path, put=__set_path))  path;

constexpr void __set_path(::StringW value) ;

constexpr ::StringW __get_path() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Input
// Type: ::InputSourceNameFlags
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14193))
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput::InputSourceNameFlags
struct CORDL_TYPE ____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags(int32_t value__) noexcept;


                    constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags(____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags const&) = default;
                    constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags(____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags&&) = default;
                    constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags& operator=(____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags& operator=(____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags_Unwrapped : int32_t {
__UserPath = 1,
__InteractionProfile = 2,
__Component = 4,
__All = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UserPath offset 0
static ::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags const UserPath;

/// @brief Field InteractionProfile offset 0
static ::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags const InteractionProfile;

/// @brief Field Component offset 0
static ::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags const Component;

/// @brief Field All offset 0
static ::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Input
// Type: ::GetInternalDeviceIdCommand
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14194))
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput::GetInternalDeviceIdCommand
struct CORDL_TYPE ____UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "deviceId", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, uint32_t deviceId) noexcept;


                    constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand(____UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand const&) = default;
                    constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand(____UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand&&) = default;
                    constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand& operator=(____UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand& operator=(____UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field k_BaseCommandSizeSize offset 0
static constexpr int32_t  k_BaseCommandSizeSize{8};

/// @brief Field k_Size offset 0
static constexpr int32_t  k_Size{12};

 ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand __declspec(property(get=__get_baseCommand, put=__set_baseCommand))  baseCommand;

constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand __get_baseCommand() const;

 uint32_t __declspec(property(get=__get_deviceId, put=__set_deviceId))  deviceId;

constexpr void __set_deviceId(uint32_t value) ;

constexpr uint32_t __get_deviceId() const;


// Properties

static ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Type))  Type;

 ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_Type addr 0x2aef910 size 0x30 virtual false final false
static ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic addr 0x2aef940 size 0x30 virtual true final true
 ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2aef3fc size 0x50 virtual false final false
static ::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Input
// Type: ::<>c
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14195))
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput::<>c
class CORDL_TYPE ____UnityEngine__XR__OpenXR__Input__OpenXRInput____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__XR__OpenXR__Input__OpenXRInput____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__XR__OpenXR__Input__OpenXRInput____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput____c(____UnityEngine__XR__OpenXR__Input__OpenXRInput____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__XR__OpenXR__Input__OpenXRInput____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput____c(____UnityEngine__XR__OpenXR__Input__OpenXRInput____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__XR__OpenXR__Input__OpenXRInput____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput____c& operator=(____UnityEngine__XR__OpenXR__Input__OpenXRInput____c&& o) noexcept = default;
  constexpr ____UnityEngine__XR__OpenXR__Input__OpenXRInput____c& operator=(____UnityEngine__XR__OpenXR__Input__OpenXRInput____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput____c value) ;

static ::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput____c __get___9() ;

static ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature,bool> __declspec(property(get=__get___9__9_0, put=__set___9__9_0))  __9__9_0;

static void __set___9__9_0(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature,bool> value) ;

static ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature,bool> __get___9__9_0() ;

static ::System::Func_2<::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig,::StringW> __declspec(property(get=__get___9__9_1, put=__set___9__9_1))  __9__9_1;

static void __set___9__9_1(::System::Func_2<::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig,::StringW> value) ;

static ::System::Func_2<::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig,::StringW> __get___9__9_1() ;

static ::System::Func_2<::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding,bool> __declspec(property(get=__get___9__9_2, put=__set___9__9_2))  __9__9_2;

static void __set___9__9_2(::System::Func_2<::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding,bool> value) ;

static ::System::Func_2<::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding,bool> __get___9__9_2() ;

static ::System::Func_2<::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding,::System::Collections::Generic::IEnumerable_1<::StringW>> __declspec(property(get=__get___9__9_3, put=__set___9__9_3))  __9__9_3;

static void __set___9__9_3(::System::Func_2<::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding,::System::Collections::Generic::IEnumerable_1<::StringW>> value) ;

static ::System::Func_2<::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding,::System::Collections::Generic::IEnumerable_1<::StringW>> __get___9__9_3() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__XR__OpenXR__Input__OpenXRInput____c() ;

/// @brief Method .ctor addr 0x2aef9d4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AttachActionSets>b__9_0 addr 0x2aef9dc size 0x14 virtual false final false
 bool _AttachActionSets_b__9_0(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature f) ;

/// @brief Method <AttachActionSets>b__9_1 addr 0x2aef9f0 size 0x18 virtual false final false
 ::StringW _AttachActionSets_b__9_1(::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig d) ;

/// @brief Method <AttachActionSets>b__9_2 addr 0x2aefa08 size 0x20 virtual false final false
 bool _AttachActionSets_b__9_2(::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding b) ;

/// @brief Method <AttachActionSets>b__9_3 addr 0x2aefa28 size 0x18 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::StringW> _AttachActionSets_b__9_3(::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Input
// Type: UnityEngine.XR.OpenXR.Input::OpenXRInput
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14196))
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput
class CORDL_TYPE OpenXRInput : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput____c;

using GetInternalDeviceIdCommand = ::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand;

using InputSourceNameFlags = ::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags;

using SerializedBinding = ::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding;

using SerializedGuid = ::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OpenXRInput() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInput", modifiers: " const&", def_value: None }]
constexpr OpenXRInput(OpenXRInput const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInput", modifiers: "&&", def_value: None }]
constexpr OpenXRInput(OpenXRInput&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenXRInput(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OpenXRInput& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenXRInput& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenXRInput& operator=(OpenXRInput&& o) noexcept = default;
  constexpr OpenXRInput& operator=(OpenXRInput const& o) noexcept = default;
                


// Fields

static ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType> __declspec(property(get=__get_ExpectedControlTypeToActionType, put=__set_ExpectedControlTypeToActionType))  ExpectedControlTypeToActionType;

static void __set_ExpectedControlTypeToActionType(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType> value) ;

static ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType> __get_ExpectedControlTypeToActionType() ;

/// @brief Field s_devicePoseActionName offset 0
static constexpr ::ConstString  s_devicePoseActionName{u"devicepose"};

/// @brief Field s_pointerActionName offset 0
static constexpr ::ConstString  s_pointerActionName{u"pointer"};

static ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get_kVirtualControlMap, put=__set_kVirtualControlMap))  kVirtualControlMap;

static void __set_kVirtualControlMap(::System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

static ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get_kVirtualControlMap() ;

/// @brief Field Library offset 0
static constexpr ::ConstString  Library{u"UnityOpenXR"};


// Methods

/// @brief Method RegisterLayouts addr 0x2ae6df4 size 0x1ec virtual false final false
static void RegisterLayouts() ;

/// @brief Method ValidateActionMapConfig addr 0x2aeda24 size 0x154 virtual false final false
static bool ValidateActionMapConfig(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature interactionFeature, ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig actionMapConfig) ;

/// @brief Method AttachActionSets addr 0x2ae85ac size 0x1568 virtual false final false
static void AttachActionSets() ;

/// @brief Method SanitizeCharForOpenXRPath addr 0x2aee53c size 0xfc virtual false final false
static char16_t SanitizeCharForOpenXRPath(char16_t c) ;

/// @brief Method SanitizeStringForOpenXRPath addr 0x2aedee0 size 0x1b4 virtual false final false
static ::StringW SanitizeStringForOpenXRPath(::StringW input) ;

/// @brief Method GetActionHandleName addr 0x2aee638 size 0xd8 virtual false final false
static ::StringW GetActionHandleName(::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method SendHapticImpulse addr 0x2aee710 size 0x80 virtual false final false
static void SendHapticImpulse(::UnityEngine::InputSystem::InputActionReference actionRef, float_t amplitude, float_t duration, ::UnityEngine::InputSystem::InputDevice inputDevice) ;

/// @brief Method SendHapticImpulse addr 0x2aee790 size 0xa0 virtual false final false
static void SendHapticImpulse(::UnityEngine::InputSystem::InputActionReference actionRef, float_t amplitude, float_t frequency, float_t duration, ::UnityEngine::InputSystem::InputDevice inputDevice) ;

/// @brief Method SendHapticImpulse addr 0x2aee90c size 0x80 virtual false final false
static void SendHapticImpulse(::UnityEngine::InputSystem::InputAction action, float_t amplitude, float_t duration, ::UnityEngine::InputSystem::InputDevice inputDevice) ;

/// @brief Method SendHapticImpulse addr 0x2aee830 size 0xdc virtual false final false
static void SendHapticImpulse(::UnityEngine::InputSystem::InputAction action, float_t amplitude, float_t frequency, float_t duration, ::UnityEngine::InputSystem::InputDevice inputDevice) ;

/// @brief Method StopHaptics addr 0x2aeed48 size 0xc8 virtual false final false
static void StopHaptics(::UnityEngine::InputSystem::InputActionReference actionRef, ::UnityEngine::InputSystem::InputDevice inputDevice) ;

/// @brief Method StopHaptics addr 0x2aeee10 size 0x94 virtual false final false
static void StopHaptics(::UnityEngine::InputSystem::InputAction inputAction, ::UnityEngine::InputSystem::InputDevice inputDevice) ;

/// @brief Method TryGetInputSourceName addr 0x2aeef28 size 0xe4 virtual false final false
static bool TryGetInputSourceName(::UnityEngine::InputSystem::InputAction inputAction, int32_t index, ByRef<::StringW> name, ::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags flags, ::UnityEngine::InputSystem::InputDevice inputDevice) ;

/// @brief Method GetActionIsActive addr 0x2aef104 size 0x1b4 virtual false final false
static bool GetActionIsActive(::UnityEngine::InputSystem::InputAction inputAction) ;

/// @brief Method GetActionHandle addr 0x2aee98c size 0x26c virtual false final false
static uint64_t GetActionHandle(::UnityEngine::InputSystem::InputAction inputAction, ::UnityEngine::InputSystem::InputDevice inputDevice) ;

/// @brief Method GetDeviceId addr 0x2aeebf8 size 0xa4 virtual false final false
static uint32_t GetDeviceId(::UnityEngine::InputSystem::InputDevice inputDevice) ;

/// @brief Method UserPathToDeviceName addr 0x2aedbf0 size 0x1dc virtual false final false
static ::StringW UserPathToDeviceName(::StringW userPath) ;

/// @brief Method Internal_SendHapticImpulse addr 0x2aeec9c size 0xac virtual false final false
static void Internal_SendHapticImpulse(uint32_t deviceId, uint64_t actionId, float_t amplitude, float_t frequency, float_t duration) ;

/// @brief Method Internal_StopHaptics addr 0x2aeeea4 size 0x84 virtual false final false
static void Internal_StopHaptics(uint32_t deviceId, uint64_t actionId) ;

/// @brief Method Internal_GetActionId addr 0x2aef35c size 0xa0 virtual false final false
static uint64_t Internal_GetActionId(uint32_t deviceId, ::StringW name) ;

/// @brief Method Internal_TryGetInputSourceNamePtr addr 0x2aef44c size 0xac virtual false final false
static bool Internal_TryGetInputSourceNamePtr(uint32_t deviceId, uint64_t actionId, uint32_t index, uint32_t flags, ByRef<::cordl_internals::intptr_t> outName) ;

/// @brief Method Internal_TryGetInputSourceName addr 0x2aef00c size 0xf8 virtual false final false
static bool Internal_TryGetInputSourceName(uint32_t deviceId, uint64_t actionId, uint32_t index, uint32_t flags, ByRef<::StringW> outName) ;

/// @brief Method Internal_GetActionIsActive addr 0x2aef2b8 size 0xa4 virtual false final false
static bool Internal_GetActionIsActive(uint32_t deviceId, ::StringW name) ;

/// @brief Method Internal_RegisterDeviceDefinition addr 0x2aeddcc size 0x114 virtual false final false
static uint64_t Internal_RegisterDeviceDefinition(::StringW userPath, ::StringW interactionProfile, uint32_t characteristics, ::StringW name, ::StringW manufacturer, ::StringW serialNumber) ;

/// @brief Method Internal_CreateActionSet addr 0x2aee094 size 0xc4 virtual false final false
static uint64_t Internal_CreateActionSet(::StringW name, ::StringW localizedName, ::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid guid) ;

/// @brief Method Internal_CreateAction addr 0x2aee158 size 0x234 virtual false final false
static uint64_t Internal_CreateAction(uint64_t actionSetId, ::StringW name, ::StringW localizedName, uint32_t actionType, ::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid guid, ::ArrayW<::StringW> userPaths, uint32_t userPathCount, ::ArrayW<::StringW> usages, uint32_t usageCount) ;

/// @brief Method Internal_SuggestBindings addr 0x2aee38c size 0x14c virtual false final false
static bool Internal_SuggestBindings(::StringW interactionProfile, ::ArrayW<::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding> serializedBindings, uint32_t serializedBindingCount) ;

/// @brief Method Internal_AttachActionSets addr 0x2aee4d8 size 0x64 virtual false final false
static bool Internal_AttachActionSets() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Input
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/InputSourceNameFlags");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Input::OpenXRInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::OpenXRInput, "UnityEngine.XR.OpenXR.Input", "OpenXRInput");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput____c, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/GetInternalDeviceIdCommand");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/SerializedBinding");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::____UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/SerializedGuid");
