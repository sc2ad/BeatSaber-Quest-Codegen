#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngineInternal::Input {
class NativeUpdateCallback;
}
namespace UnityEngineInternal::Input {
struct NativeInputUpdateType;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace UnityEngineInternal::Input {
class NativeInputSystem;
}
// Type: UnityEngineInternal.Input::NativeInputSystem
namespace UnityEngineInternal::Input {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15958))
// CS Name: UnityEngineInternal.Input.NativeInputSystem
class CORDL_TYPE NativeInputSystem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeInputSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeInputSystem", modifiers: " const&", def_value: None }]
constexpr NativeInputSystem(NativeInputSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeInputSystem", modifiers: "&&", def_value: None }]
constexpr NativeInputSystem(NativeInputSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeInputSystem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NativeInputSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeInputSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeInputSystem& operator=(NativeInputSystem&& o) noexcept = default;
  constexpr NativeInputSystem& operator=(NativeInputSystem const& o) noexcept = default;
                


// Fields

static UnityEngineInternal::Input::NativeUpdateCallback __declspec(property(get=__get_onUpdate, put=__set_onUpdate))  onUpdate;

static void __set_onUpdate(UnityEngineInternal::Input::NativeUpdateCallback value) ;

static UnityEngineInternal::Input::NativeUpdateCallback __get_onUpdate() ;

static System::Action_1<UnityEngineInternal::Input::NativeInputUpdateType> __declspec(property(get=__get_onBeforeUpdate, put=__set_onBeforeUpdate))  onBeforeUpdate;

static void __set_onBeforeUpdate(System::Action_1<UnityEngineInternal::Input::NativeInputUpdateType> value) ;

static System::Action_1<UnityEngineInternal::Input::NativeInputUpdateType> __get_onBeforeUpdate() ;

static System::Func_2<UnityEngineInternal::Input::NativeInputUpdateType,bool> __declspec(property(get=__get_onShouldRunUpdate, put=__set_onShouldRunUpdate))  onShouldRunUpdate;

static void __set_onShouldRunUpdate(System::Func_2<UnityEngineInternal::Input::NativeInputUpdateType,bool> value) ;

static System::Func_2<UnityEngineInternal::Input::NativeInputUpdateType,bool> __get_onShouldRunUpdate() ;

static System::Action_2<int32_t,::StringW> __declspec(property(get=__get_s_OnDeviceDiscoveredCallback, put=__set_s_OnDeviceDiscoveredCallback))  s_OnDeviceDiscoveredCallback;

static void __set_s_OnDeviceDiscoveredCallback(System::Action_2<int32_t,::StringW> value) ;

static System::Action_2<int32_t,::StringW> __get_s_OnDeviceDiscoveredCallback() ;


// Properties

static System::Action_2<int32_t,::StringW> __declspec(property(get=get_onDeviceDiscovered, put=set_onDeviceDiscovered))  onDeviceDiscovered;

static bool __declspec(property(put=set_hasDeviceDiscoveredCallback))  hasDeviceDiscoveredCallback;

static double_t __declspec(property(get=get_currentTime))  currentTime;

static double_t __declspec(property(get=get_currentTimeOffsetToRealtimeSinceStartup))  currentTimeOffsetToRealtimeSinceStartup;


// Methods

/// @brief Method get_onDeviceDiscovered addr 0x2b97b60 size 0x58 virtual false final false
static System::Action_2<int32_t,::StringW> get_onDeviceDiscovered() ;

/// @brief Method set_onDeviceDiscovered addr 0x2b97bb8 size 0x84 virtual false final false
static void set_onDeviceDiscovered(System::Action_2<int32_t,::StringW> value) ;

/// @brief Method NotifyBeforeUpdate addr 0x2b97ca8 size 0x7c virtual false final false
static void NotifyBeforeUpdate(UnityEngineInternal::Input::NativeInputUpdateType updateType) ;

/// @brief Method NotifyUpdate addr 0x2b97d24 size 0x9c virtual false final false
static void NotifyUpdate(UnityEngineInternal::Input::NativeInputUpdateType updateType, ::cordl_internals::intptr_t eventBuffer) ;

/// @brief Method NotifyDeviceDiscovered addr 0x2b97dc0 size 0x90 virtual false final false
static void NotifyDeviceDiscovered(int32_t deviceId, ::StringW deviceDescriptor) ;

/// @brief Method ShouldRunUpdate addr 0x2b97e50 size 0x90 virtual false final false
static void ShouldRunUpdate(UnityEngineInternal::Input::NativeInputUpdateType updateType, ByRef<bool> retval) ;

/// @brief Method set_hasDeviceDiscoveredCallback addr 0x2b97c3c size 0x3c virtual false final false
static void set_hasDeviceDiscoveredCallback(bool value) ;

/// @brief Method get_currentTime addr 0x2b97ee0 size 0x28 virtual false final false
static double_t get_currentTime() ;

/// @brief Method get_currentTimeOffsetToRealtimeSinceStartup addr 0x2b97f08 size 0x28 virtual false final false
static double_t get_currentTimeOffsetToRealtimeSinceStartup() ;

/// @brief Method AllocateDeviceId addr 0x2b97f30 size 0x28 virtual false final false
static int32_t AllocateDeviceId() ;

/// @brief Method QueueInputEvent addr 0x2b97f58 size 0x3c virtual false final false
static void QueueInputEvent(::cordl_internals::intptr_t inputEvent) ;

/// @brief Method IOCTL addr 0x2b97f94 size 0x5c virtual false final false
static int64_t IOCTL(int32_t deviceId, int32_t code, ::cordl_internals::intptr_t data, int32_t sizeInBytes) ;

/// @brief Method SetPollingFrequency addr 0x2b97ff0 size 0x38 virtual false final false
static void SetPollingFrequency(float_t hertz) ;

/// @brief Method Update addr 0x2b98028 size 0x3c virtual false final false
static void Update(UnityEngineInternal::Input::NativeInputUpdateType updateType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngineInternal::Input
NEED_NO_BOX(UnityEngineInternal::Input::NativeInputSystem);
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::Input::NativeInputSystem, "UnityEngineInternal.Input", "NativeInputSystem");
