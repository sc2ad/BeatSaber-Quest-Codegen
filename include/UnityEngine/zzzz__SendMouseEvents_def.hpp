#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine {
class SendMouseEvents;
}
namespace UnityEngine {
struct ____UnityEngine__SendMouseEvents__HitInfo;
}
// Type: ::HitInfo
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15840))
// CS Name: UnityEngine.SendMouseEvents::HitInfo
struct CORDL_TYPE ____UnityEngine__SendMouseEvents__HitInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "target", ty: "::UnityEngine::GameObject", modifiers: "", def_value: None }, CppParam { name: "camera", ty: "::UnityEngine::Camera", modifiers: "", def_value: None }]
constexpr ____UnityEngine__SendMouseEvents__HitInfo(::UnityEngine::GameObject target, ::UnityEngine::Camera camera) noexcept;


                    constexpr ____UnityEngine__SendMouseEvents__HitInfo(____UnityEngine__SendMouseEvents__HitInfo const&) = default;
                    constexpr ____UnityEngine__SendMouseEvents__HitInfo(____UnityEngine__SendMouseEvents__HitInfo&&) = default;
                    constexpr ____UnityEngine__SendMouseEvents__HitInfo& operator=(____UnityEngine__SendMouseEvents__HitInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__SendMouseEvents__HitInfo& operator=(____UnityEngine__SendMouseEvents__HitInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__SendMouseEvents__HitInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get_target, put=__set_target))  target;

constexpr void __set_target(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_target() const;

 ::UnityEngine::Camera __declspec(property(get=__get_camera, put=__set_camera))  camera;

constexpr void __set_camera(::UnityEngine::Camera value) ;

constexpr ::UnityEngine::Camera __get_camera() const;


// Methods

/// @brief Method SendMessage addr 0x2b9790c size 0x24 virtual false final false
 void SendMessage(::StringW name) ;

/// @brief Method op_Implicit addr 0x2b9786c size 0xa0 virtual false final false
static bool op_Implicit_bool(::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo exists) ;

/// @brief Method Compare addr 0x2b97930 size 0xb4 virtual false final false
static bool Compare(::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo lhs, ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo rhs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::SendMouseEvents
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15841))
// CS Name: UnityEngine.SendMouseEvents
class CORDL_TYPE SendMouseEvents : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using HitInfo = ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SendMouseEvents() = default;

// Ctor Parameters [CppParam { name: "", ty: "SendMouseEvents", modifiers: " const&", def_value: None }]
constexpr SendMouseEvents(SendMouseEvents const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SendMouseEvents", modifiers: "&&", def_value: None }]
constexpr SendMouseEvents(SendMouseEvents&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SendMouseEvents(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SendMouseEvents& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SendMouseEvents& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SendMouseEvents& operator=(SendMouseEvents&& o) noexcept = default;
  constexpr SendMouseEvents& operator=(SendMouseEvents const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_s_MouseUsed, put=__set_s_MouseUsed))  s_MouseUsed;

static void __set_s_MouseUsed(bool value) ;

static bool __get_s_MouseUsed() ;

static ::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo> __declspec(property(get=__get_m_LastHit, put=__set_m_LastHit))  m_LastHit;

static void __set_m_LastHit(::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo> value) ;

static ::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo> __get_m_LastHit() ;

static ::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo> __declspec(property(get=__get_m_MouseDownHit, put=__set_m_MouseDownHit))  m_MouseDownHit;

static void __set_m_MouseDownHit(::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo> value) ;

static ::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo> __get_m_MouseDownHit() ;

static ::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo> __declspec(property(get=__get_m_CurrentHit, put=__set_m_CurrentHit))  m_CurrentHit;

static void __set_m_CurrentHit(::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo> value) ;

static ::ArrayW<::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo> __get_m_CurrentHit() ;

static ::ArrayW<::UnityEngine::Camera> __declspec(property(get=__get_m_Cameras, put=__set_m_Cameras))  m_Cameras;

static void __set_m_Cameras(::ArrayW<::UnityEngine::Camera> value) ;

static ::ArrayW<::UnityEngine::Camera> __get_m_Cameras() ;

static ::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>> __declspec(property(get=__get_s_GetMouseState, put=__set_s_GetMouseState))  s_GetMouseState;

static void __set_s_GetMouseState(::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>> value) ;

static ::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>> __get_s_GetMouseState() ;

static ::UnityEngine::Vector2 __declspec(property(get=__get_s_MousePosition, put=__set_s_MousePosition))  s_MousePosition;

static void __set_s_MousePosition(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_s_MousePosition() ;

static bool __declspec(property(get=__get_s_MouseButtonPressedThisFrame, put=__set_s_MouseButtonPressedThisFrame))  s_MouseButtonPressedThisFrame;

static void __set_s_MouseButtonPressedThisFrame(bool value) ;

static bool __get_s_MouseButtonPressedThisFrame() ;

static bool __declspec(property(get=__get_s_MouseButtonIsPressed, put=__set_s_MouseButtonIsPressed))  s_MouseButtonIsPressed;

static void __set_s_MouseButtonIsPressed(bool value) ;

static bool __get_s_MouseButtonIsPressed() ;


// Methods

/// @brief Method UpdateMouse addr 0x2b968e0 size 0x1c4 virtual false final false
static void UpdateMouse() ;

/// @brief Method SetMouseMoved addr 0x2b96aa4 size 0x5c virtual false final false
static void SetMouseMoved() ;

/// @brief Method DoSendMouseEvents addr 0x2b96b00 size 0x94c virtual false final false
static void DoSendMouseEvents(int32_t skipRTCameras) ;

/// @brief Method SendEvents addr 0x2b9744c size 0x420 virtual false final false
static void SendEvents(int32_t i, ::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo hit) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::SendMouseEvents);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SendMouseEvents, "UnityEngine", "SendMouseEvents");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::____UnityEngine__SendMouseEvents__HitInfo, "UnityEngine", "SendMouseEvents/HitInfo");
