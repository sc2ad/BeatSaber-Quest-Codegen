#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace LIV::SDK::Unity {
struct SDKInputFrame;
}
namespace LIV::SDK::Unity {
struct SDKApplicationOutput;
}
namespace LIV::SDK::Unity {
struct SDKResolution;
}
namespace LIV::SDK::Unity {
struct SDKOutputFrame;
}
namespace LIV::SDK::Unity {
struct SDKTexture;
}
namespace LIV::SDK::Unity {
struct SDKPlane;
}
namespace System {
class Action;
}
// Forward declare root types
namespace LIV::SDK::Unity {
class SDKBridge;
}
namespace LIV::SDK::Unity {
template<typename T>
struct LIV__SDK__Unity__SDKBridge__SDKInjection_1;
}
// Type: ::SDKInjection`1
namespace LIV::SDK::Unity {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15143))
// CS Name: LIV.SDK.Unity.SDKBridge::SDKInjection`1
struct CORDL_TYPE LIV__SDK__Unity__SDKBridge__SDKInjection_1 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "active", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Action", modifiers: "", def_value: None }, CppParam { name: "data", ty: "T", modifiers: "", def_value: None }]
constexpr LIV__SDK__Unity__SDKBridge__SDKInjection_1(bool active, System::Action action, T data) noexcept;


                    constexpr LIV__SDK__Unity__SDKBridge__SDKInjection_1(LIV__SDK__Unity__SDKBridge__SDKInjection_1 const&) = default;
                    constexpr LIV__SDK__Unity__SDKBridge__SDKInjection_1(LIV__SDK__Unity__SDKBridge__SDKInjection_1&&) = default;
                    constexpr LIV__SDK__Unity__SDKBridge__SDKInjection_1& operator=(LIV__SDK__Unity__SDKBridge__SDKInjection_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LIV__SDK__Unity__SDKBridge__SDKInjection_1& operator=(LIV__SDK__Unity__SDKBridge__SDKInjection_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LIV__SDK__Unity__SDKBridge__SDKInjection_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_active, put=__set_active))  active;

constexpr void __set_active(bool value) ;

constexpr bool __get_active() const;

 System::Action __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(System::Action value) ;

constexpr System::Action __get_action() const;

 T __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(T value) ;

constexpr T __get_data() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
// Type: LIV.SDK.Unity::SDKBridge
namespace LIV::SDK::Unity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15144))
// CS Name: LIV.SDK.Unity.SDKBridge
class CORDL_TYPE SDKBridge : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using SDKInjection_1 = LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SDKBridge() = default;

// Ctor Parameters [CppParam { name: "", ty: "SDKBridge", modifiers: " const&", def_value: None }]
constexpr SDKBridge(SDKBridge const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SDKBridge", modifiers: "&&", def_value: None }]
constexpr SDKBridge(SDKBridge&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SDKBridge(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SDKBridge& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SDKBridge& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SDKBridge& operator=(SDKBridge&& o) noexcept = default;
  constexpr SDKBridge& operator=(SDKBridge const& o) noexcept = default;
                


// Fields

static LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<LIV::SDK::Unity::SDKInputFrame> __declspec(property(get=__get__injection_SDKInputFrame, put=__set__injection_SDKInputFrame))  _injection_SDKInputFrame;

static void __set__injection_SDKInputFrame(LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<LIV::SDK::Unity::SDKInputFrame> value) ;

static LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<LIV::SDK::Unity::SDKInputFrame> __get__injection_SDKInputFrame() ;

static LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<LIV::SDK::Unity::SDKResolution> __declspec(property(get=__get__injection_SDKResolution, put=__set__injection_SDKResolution))  _injection_SDKResolution;

static void __set__injection_SDKResolution(LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<LIV::SDK::Unity::SDKResolution> value) ;

static LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<LIV::SDK::Unity::SDKResolution> __get__injection_SDKResolution() ;

static LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<bool> __declspec(property(get=__get__injection_IsActive, put=__set__injection_IsActive))  _injection_IsActive;

static void __set__injection_IsActive(LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<bool> value) ;

static LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<bool> __get__injection_IsActive() ;

static bool __declspec(property(get=__get__injection_DisableSubmit, put=__set__injection_DisableSubmit))  _injection_DisableSubmit;

static void __set__injection_DisableSubmit(bool value) ;

static bool __get__injection_DisableSubmit() ;

static bool __declspec(property(get=__get__injection_DisableSubmitApplicationOutput, put=__set__injection_DisableSubmitApplicationOutput))  _injection_DisableSubmitApplicationOutput;

static void __set__injection_DisableSubmitApplicationOutput(bool value) ;

static bool __get__injection_DisableSubmitApplicationOutput() ;

static bool __declspec(property(get=__get__injection_DisableAddTexture, put=__set__injection_DisableAddTexture))  _injection_DisableAddTexture;

static void __set__injection_DisableAddTexture(bool value) ;

static bool __get__injection_DisableAddTexture() ;

static bool __declspec(property(get=__get__injection_DisableCreateFrame, put=__set__injection_DisableCreateFrame))  _injection_DisableCreateFrame;

static void __set__injection_DisableCreateFrame(bool value) ;

static bool __get__injection_DisableCreateFrame() ;


// Properties

static bool __declspec(property(get=get_IsActive))  IsActive;


// Methods

/// @brief Method AddStringToChannel addr 0x209c29c size 0x8 virtual false final false
static int32_t AddStringToChannel(int32_t slot, ::cordl_internals::intptr_t str, int32_t length, uint64_t tag) ;

/// @brief Method addtexture addr 0x209c2a4 size 0x8 virtual false final false
static int32_t addtexture(::cordl_internals::intptr_t sourcetexture, uint64_t tag) ;

/// @brief Method GetObjectTimeStamp addr 0x209c2ac size 0x8 virtual false final false
static uint64_t GetObjectTimeStamp(::cordl_internals::intptr_t obj) ;

/// @brief Method GetCurrentTimeTicks addr 0x209c2b4 size 0x8 virtual false final false
static uint64_t GetCurrentTimeTicks() ;

/// @brief Method GetIsCaptureActive addr 0x209c2bc size 0x8 virtual false final false
static bool GetIsCaptureActive() ;

/// @brief Method GetRenderEventFunc addr 0x209c2c4 size 0x48 virtual false final false
static ::cordl_internals::intptr_t GetRenderEventFunc() ;

/// @brief Method GetCompositorChannelObject addr 0x209c30c size 0x48 virtual false final false
static ::cordl_internals::intptr_t GetCompositorChannelObject(int32_t slot, uint64_t tag, uint64_t timestamp) ;

/// @brief Method AddObjectToCompositorChannel addr 0x209c354 size 0x8 virtual false final false
static int32_t AddObjectToCompositorChannel(int32_t slot, ::cordl_internals::intptr_t obj, int32_t objectsize, uint64_t tag) ;

/// @brief Method AddObjectToFrame addr 0x209c35c size 0x8 virtual false final false
static int32_t AddObjectToFrame(::cordl_internals::intptr_t obj, int32_t objectsize, uint64_t tag) ;

/// @brief Method updatinputframe addr 0x209c364 size 0x48 virtual false final false
static ::cordl_internals::intptr_t updatinputframe(::cordl_internals::intptr_t InputFrame) ;

/// @brief Method GetViewportTexture addr 0x209c3ac size 0x48 virtual false final false
static ::cordl_internals::intptr_t GetViewportTexture() ;

/// @brief Method GetChannelObject addr 0x209c3f4 size 0x48 virtual false final false
static ::cordl_internals::intptr_t GetChannelObject(int32_t slot, uint64_t tag, uint64_t timestamp) ;

/// @brief Method AddObjectToChannel addr 0x209c43c size 0x8 virtual false final false
static int32_t AddObjectToChannel(int32_t slot, ::cordl_internals::intptr_t obj, int32_t objectsize, uint64_t tag) ;

/// @brief Method Tag addr 0x209c444 size 0x84 virtual false final false
static uint64_t Tag(::StringW str) ;

/// @brief Method AddString addr 0x209c4c8 size 0xfc virtual false final false
static void AddString(::StringW tag, ::StringW value, int32_t slot) ;

/// @brief Method AddTexture addr 0x209c5c4 size 0xc0 virtual false final false
static void AddTexture(LIV::SDK::Unity::SDKTexture texture, uint64_t tag) ;

/// @brief Method GetObjectTime addr 0x209c684 size 0x5c virtual false final false
static uint64_t GetObjectTime(::cordl_internals::intptr_t objectptr) ;

/// @brief Method GetCurrentTime addr 0x209c6e0 size 0x5c virtual false final false
static uint64_t GetCurrentTime() ;

/// @brief Method get_IsActive addr 0x209b4e4 size 0x98 virtual false final false
static bool get_IsActive() ;

/// @brief Method IssuePluginEvent addr 0x209c73c size 0xb0 virtual false final false
static void IssuePluginEvent() ;

/// @brief Method SubmitApplicationOutput addr 0x209bcf8 size 0x1f0 virtual false final false
static void SubmitApplicationOutput(LIV::SDK::Unity::SDKApplicationOutput applicationOutput) ;

/// @brief Method GetStructFromGlobalChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool GetStructFromGlobalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag) ;

/// @brief Method AddStructToGlobalChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t AddStructToGlobalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag) ;

/// @brief Method GetStructFromLocalChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool GetStructFromLocalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag) ;

/// @brief Method AddStructToLocalChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t AddStructToLocalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag) ;

/// @brief Method AddStructToFrame addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AddStructToFrame(ByRef<T> mystruct, uint64_t tag) ;

/// @brief Method UpdateInputFrame addr 0x209c7ec size 0x2c0 virtual false final false
static bool UpdateInputFrame(ByRef<LIV::SDK::Unity::SDKInputFrame> setframe) ;

/// @brief Method GetViewfinderTexture addr 0x209cbf0 size 0x1d4 virtual false final false
static LIV::SDK::Unity::SDKTexture GetViewfinderTexture() ;

/// @brief Method AddTexture addr 0x209ce20 size 0x130 virtual false final false
static void AddTexture(LIV::SDK::Unity::SDKTexture texture) ;

/// @brief Method CreateFrame addr 0x209cf50 size 0x168 virtual false final false
static void CreateFrame(LIV::SDK::Unity::SDKOutputFrame frame) ;

/// @brief Method SetGroundPlane addr 0x209d0b8 size 0xa0 virtual false final false
static void SetGroundPlane(LIV::SDK::Unity::SDKPlane groundPlane) ;

/// @brief Method GetResolution addr 0x209d158 size 0x130 virtual false final false
static bool GetResolution(ByRef<LIV::SDK::Unity::SDKResolution> sdkResolution) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
NEED_NO_BOX(LIV::SDK::Unity::SDKBridge);
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::SDKBridge, "LIV.SDK.Unity", "SDKBridge");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1, "LIV.SDK.Unity", "SDKBridge/SDKInjection`1");
