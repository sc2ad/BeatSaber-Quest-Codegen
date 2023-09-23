#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include <cmath>
#include <cstddef>
namespace UnityEngine::UI::CoroutineTween {
class ITweenValue;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
// Forward declare root types
namespace UnityEngine::UI::CoroutineTween {
class UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback;
}
namespace UnityEngine::UI::CoroutineTween {
struct FloatTween;
}
// Type: ::FloatTweenCallback
namespace UnityEngine::UI::CoroutineTween {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 374 }), TypeDefinitionIndex(TypeDefinitionIndex(10401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13093))
// CS Name: UnityEngine.UI.CoroutineTween.FloatTween::FloatTweenCallback
class CORDL_TYPE UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback : public UnityEngine::Events::UnityEvent_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback(UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback(UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<float_t>(ptr) {
}


  constexpr UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback& operator=(UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback&& o) noexcept = default;
  constexpr UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback& operator=(UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback() ;

/// @brief Method .ctor addr 0x2c191f0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI::CoroutineTween
// Type: UnityEngine.UI.CoroutineTween::FloatTween
namespace UnityEngine::UI::CoroutineTween {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13094))
// CS Name: UnityEngine.UI.CoroutineTween.FloatTween
struct CORDL_TYPE FloatTween : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using FloatTweenCallback = UnityEngine::UI::CoroutineTween::UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback;

/// @brief Convert operator to UnityEngine::UI::CoroutineTween::ITweenValue
constexpr operator  UnityEngine::UI::CoroutineTween::ITweenValue() const;

// Ctor Parameters [CppParam { name: "m_Target", ty: "UnityEngine::UI::CoroutineTween::UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback", modifiers: "", def_value: None }, CppParam { name: "m_StartValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TargetValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_IgnoreTimeScale", ty: "bool", modifiers: "", def_value: None }]
constexpr FloatTween(UnityEngine::UI::CoroutineTween::UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback m_Target, float_t m_StartValue, float_t m_TargetValue, float_t m_Duration, bool m_IgnoreTimeScale) noexcept;


                    constexpr FloatTween(FloatTween const&) = default;
                    constexpr FloatTween(FloatTween&&) = default;
                    constexpr FloatTween& operator=(FloatTween const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FloatTween& operator=(FloatTween&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FloatTween(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UI::CoroutineTween::UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback __declspec(property(get=__get_m_Target, put=__set_m_Target))  m_Target;

constexpr void __set_m_Target(UnityEngine::UI::CoroutineTween::UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback value) ;

constexpr UnityEngine::UI::CoroutineTween::UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback __get_m_Target() const;

 float_t __declspec(property(get=__get_m_StartValue, put=__set_m_StartValue))  m_StartValue;

constexpr void __set_m_StartValue(float_t value) ;

constexpr float_t __get_m_StartValue() const;

 float_t __declspec(property(get=__get_m_TargetValue, put=__set_m_TargetValue))  m_TargetValue;

constexpr void __set_m_TargetValue(float_t value) ;

constexpr float_t __get_m_TargetValue() const;

 float_t __declspec(property(get=__get_m_Duration, put=__set_m_Duration))  m_Duration;

constexpr void __set_m_Duration(float_t value) ;

constexpr float_t __get_m_Duration() const;

 bool __declspec(property(get=__get_m_IgnoreTimeScale, put=__set_m_IgnoreTimeScale))  m_IgnoreTimeScale;

constexpr void __set_m_IgnoreTimeScale(bool value) ;

constexpr bool __get_m_IgnoreTimeScale() const;


// Properties

 float_t __declspec(property(get=get_startValue, put=set_startValue))  startValue;

 float_t __declspec(property(get=get_targetValue, put=set_targetValue))  targetValue;

 float_t __declspec(property(get=get_duration, put=set_duration))  duration;

 bool __declspec(property(get=get_ignoreTimeScale, put=set_ignoreTimeScale))  ignoreTimeScale;


// Methods

/// @brief Method get_startValue addr 0x2c19088 size 0x8 virtual false final false
 float_t get_startValue() ;

/// @brief Method set_startValue addr 0x2c19090 size 0x8 virtual false final false
 void set_startValue(float_t value) ;

/// @brief Method get_targetValue addr 0x2c19098 size 0x8 virtual false final false
 float_t get_targetValue() ;

/// @brief Method set_targetValue addr 0x2c190a0 size 0x8 virtual false final false
 void set_targetValue(float_t value) ;

/// @brief Method get_duration addr 0x2c190a8 size 0x8 virtual true final true
 float_t get_duration() ;

/// @brief Method set_duration addr 0x2c190b0 size 0x8 virtual false final false
 void set_duration(float_t value) ;

/// @brief Method get_ignoreTimeScale addr 0x2c190b8 size 0x8 virtual true final true
 bool get_ignoreTimeScale() ;

/// @brief Method set_ignoreTimeScale addr 0x2c190c0 size 0xc virtual false final false
 void set_ignoreTimeScale(bool value) ;

/// @brief Method TweenValue addr 0x2c190cc size 0x8c virtual true final true
 void TweenValue(float_t floatPercentage) ;

/// @brief Method AddOnChangedCallback addr 0x2c19168 size 0x88 virtual false final false
 void AddOnChangedCallback(UnityEngine::Events::UnityAction_1<float_t> callback) ;

/// @brief Method GetIgnoreTimescale addr 0x2c19238 size 0x8 virtual false final false
 bool GetIgnoreTimescale() ;

/// @brief Method GetDuration addr 0x2c19240 size 0x8 virtual false final false
 float_t GetDuration() ;

/// @brief Method ValidTarget addr 0x2c19158 size 0x10 virtual true final true
 bool ValidTarget() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI::CoroutineTween
NEED_NO_BOX(UnityEngine::UI::CoroutineTween::UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CoroutineTween::UnityEngine__UI__CoroutineTween__FloatTween__FloatTweenCallback, "UnityEngine.UI.CoroutineTween", "FloatTween/FloatTweenCallback");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CoroutineTween::FloatTween, "UnityEngine.UI.CoroutineTween", "FloatTween");
