#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements::Experimental {
class IValueAnimationUpdate;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
template<typename T>
class ObjectPool_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements::Experimental {
struct StyleValues;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
template<typename T>
class ValueAnimation_1;
}
namespace UnityEngine::UIElements::Experimental {
template<::cordl_internals::il2cpp_reference_type T>
class ValueAnimation_1<T>;
}
namespace UnityEngine::UIElements::Experimental {
template<>
class ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>;
}
// Type: UnityEngine.UIElements.Experimental::ValueAnimation`1
// Type: UnityEngine.UIElements.Experimental::ValueAnimation`1
namespace UnityEngine::UIElements::Experimental {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7558))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7558), inst: 2 })
// CS Name: UnityEngine.UIElements.Experimental.ValueAnimation`1
class CORDL_TYPE ValueAnimation_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::Experimental::IValueAnimationUpdate
constexpr operator  ::UnityEngine::UIElements::Experimental::IValueAnimationUpdate() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ValueAnimation_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueAnimation_1", modifiers: " const&", def_value: None }]
constexpr ValueAnimation_1(ValueAnimation_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueAnimation_1", modifiers: "&&", def_value: None }]
constexpr ValueAnimation_1(ValueAnimation_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValueAnimation_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValueAnimation_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValueAnimation_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValueAnimation_1& operator=(ValueAnimation_1&& o) noexcept = default;
  constexpr ValueAnimation_1& operator=(ValueAnimation_1 const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_StartTimeMs, put=__set_m_StartTimeMs))  m_StartTimeMs;

constexpr void __set_m_StartTimeMs(int64_t value) ;

constexpr int64_t __get_m_StartTimeMs() const;

 int32_t __declspec(property(get=__get_m_DurationMs, put=__set_m_DurationMs))  m_DurationMs;

constexpr void __set_m_DurationMs(int32_t value) ;

constexpr int32_t __get_m_DurationMs() const;

 ::System::Func_2<float_t,float_t> __declspec(property(get=__get__easingCurve_k__BackingField, put=__set__easingCurve_k__BackingField))  _easingCurve_k__BackingField;

constexpr void __set__easingCurve_k__BackingField(::System::Func_2<float_t,float_t> value) ;

constexpr ::System::Func_2<float_t,float_t> __get__easingCurve_k__BackingField() const;

 bool __declspec(property(get=__get__isRunning_k__BackingField, put=__set__isRunning_k__BackingField))  _isRunning_k__BackingField;

constexpr void __set__isRunning_k__BackingField(bool value) ;

constexpr bool __get__isRunning_k__BackingField() const;

 ::System::Action __declspec(property(get=__get__onAnimationCompleted_k__BackingField, put=__set__onAnimationCompleted_k__BackingField))  _onAnimationCompleted_k__BackingField;

constexpr void __set__onAnimationCompleted_k__BackingField(::System::Action value) ;

constexpr ::System::Action __get__onAnimationCompleted_k__BackingField() const;

 bool __declspec(property(get=__get__autoRecycle_k__BackingField, put=__set__autoRecycle_k__BackingField))  _autoRecycle_k__BackingField;

constexpr void __set__autoRecycle_k__BackingField(bool value) ;

constexpr bool __get__autoRecycle_k__BackingField() const;

 bool __declspec(property(get=__get__recycled_k__BackingField, put=__set__recycled_k__BackingField))  _recycled_k__BackingField;

constexpr void __set__recycled_k__BackingField(bool value) ;

constexpr bool __get__recycled_k__BackingField() const;

static ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>> __declspec(property(get=__get_sObjectPool, put=__set_sObjectPool))  sObjectPool;

static void __set_sObjectPool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>> value) ;

static ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>> __get_sObjectPool() ;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get__owner_k__BackingField, put=__set__owner_k__BackingField))  _owner_k__BackingField;

constexpr void __set__owner_k__BackingField(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get__owner_k__BackingField() const;

 ::System::Action_2<::UnityEngine::UIElements::VisualElement,T> __declspec(property(get=__get__valueUpdated_k__BackingField, put=__set__valueUpdated_k__BackingField))  _valueUpdated_k__BackingField;

constexpr void __set__valueUpdated_k__BackingField(::System::Action_2<::UnityEngine::UIElements::VisualElement,T> value) ;

constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement,T> __get__valueUpdated_k__BackingField() const;

 ::System::Func_2<::UnityEngine::UIElements::VisualElement,T> __declspec(property(get=__get__initialValue_k__BackingField, put=__set__initialValue_k__BackingField))  _initialValue_k__BackingField;

constexpr void __set__initialValue_k__BackingField(::System::Func_2<::UnityEngine::UIElements::VisualElement,T> value) ;

constexpr ::System::Func_2<::UnityEngine::UIElements::VisualElement,T> __get__initialValue_k__BackingField() const;

 ::System::Func_4<T,T,float_t,T> __declspec(property(get=__get__interpolator_k__BackingField, put=__set__interpolator_k__BackingField))  _interpolator_k__BackingField;

constexpr void __set__interpolator_k__BackingField(::System::Func_4<T,T,float_t,T> value) ;

constexpr ::System::Func_4<T,T,float_t,T> __get__interpolator_k__BackingField() const;

 T __declspec(property(get=__get__from, put=__set__from))  _from;

constexpr void __set__from(T value) ;

constexpr T __get__from() const;

 bool __declspec(property(get=__get_fromValueSet, put=__set_fromValueSet))  fromValueSet;

constexpr void __set_fromValueSet(bool value) ;

constexpr bool __get_fromValueSet() const;

 T __declspec(property(get=__get__to_k__BackingField, put=__set__to_k__BackingField))  _to_k__BackingField;

constexpr void __set__to_k__BackingField(T value) ;

constexpr T __get__to_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_durationMs, put=set_durationMs))  durationMs;

 ::System::Func_2<float_t,float_t> __declspec(property(get=get_easingCurve, put=set_easingCurve))  easingCurve;

 bool __declspec(property(get=get_isRunning, put=set_isRunning))  isRunning;

 ::System::Action __declspec(property(get=get_onAnimationCompleted, put=set_onAnimationCompleted))  onAnimationCompleted;

 bool __declspec(property(get=get_autoRecycle, put=set_autoRecycle))  autoRecycle;

 bool __declspec(property(get=get_recycled, put=set_recycled))  recycled;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_owner, put=set_owner))  owner;

 ::System::Action_2<::UnityEngine::UIElements::VisualElement,T> __declspec(property(get=get_valueUpdated, put=set_valueUpdated))  valueUpdated;

 ::System::Func_2<::UnityEngine::UIElements::VisualElement,T> __declspec(property(get=get_initialValue, put=set_initialValue))  initialValue;

 ::System::Func_4<T,T,float_t,T> __declspec(property(get=get_interpolator, put=set_interpolator))  interpolator;

 T __declspec(property(get=get_from, put=set_from))  from;

 T __declspec(property(get=get_to, put=set_to))  to;


// Methods

/// @brief Method get_durationMs addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_durationMs() ;

/// @brief Method set_durationMs addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_durationMs(int32_t value) ;

/// @brief Method get_easingCurve addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Func_2<float_t,float_t> get_easingCurve() ;

/// @brief Method set_easingCurve addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_easingCurve(::System::Func_2<float_t,float_t> value) ;

/// @brief Method get_isRunning addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_isRunning() ;

/// @brief Method set_isRunning addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_isRunning(bool value) ;

/// @brief Method get_onAnimationCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Action get_onAnimationCompleted() ;

/// @brief Method set_onAnimationCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_onAnimationCompleted(::System::Action value) ;

/// @brief Method get_autoRecycle addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_autoRecycle() ;

/// @brief Method set_autoRecycle addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_autoRecycle(bool value) ;

/// @brief Method get_recycled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_recycled() ;

/// @brief Method set_recycled addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_recycled(bool value) ;

/// @brief Method get_owner addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::VisualElement get_owner() ;

/// @brief Method set_owner addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_owner(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_valueUpdated addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Action_2<::UnityEngine::UIElements::VisualElement,T> get_valueUpdated() ;

/// @brief Method set_valueUpdated addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_valueUpdated(::System::Action_2<::UnityEngine::UIElements::VisualElement,T> value) ;

/// @brief Method get_initialValue addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Func_2<::UnityEngine::UIElements::VisualElement,T> get_initialValue() ;

/// @brief Method set_initialValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_initialValue(::System::Func_2<::UnityEngine::UIElements::VisualElement,T> value) ;

/// @brief Method get_interpolator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Func_4<T,T,float_t,T> get_interpolator() ;

/// @brief Method set_interpolator addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_interpolator(::System::Func_4<T,T,float_t,T> value) ;

/// @brief Method get_from addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_from() ;

/// @brief Method set_from addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_from(T value) ;

/// @brief Method get_to addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_to() ;

/// @brief Method set_to addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_to(T value) ;

// Ctor Parameters []
explicit ValueAnimation_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final true
 void Start() ;

/// @brief Method Stop addr 0x0 size 0xffffffffffffffff virtual true final true
 void Stop() ;

/// @brief Method Recycle addr 0x0 size 0xffffffffffffffff virtual true final true
 void Recycle() ;

/// @brief Method UnityEngine.UIElements.Experimental.IValueAnimationUpdate.Tick addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnityEngine_UIElements_Experimental_IValueAnimationUpdate_Tick(int64_t currentTimeMs) ;

/// @brief Method SetDefaultValues addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetDefaultValues() ;

/// @brief Method Unregister addr 0x0 size 0xffffffffffffffff virtual false final false
 void Unregister() ;

/// @brief Method Register addr 0x0 size 0xffffffffffffffff virtual false final false
 void Register() ;

/// @brief Method SetOwner addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetOwner(::UnityEngine::UIElements::VisualElement e) ;

/// @brief Method CheckNotRecycled addr 0x0 size 0xffffffffffffffff virtual false final false
 void CheckNotRecycled() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T> Create(::UnityEngine::UIElements::VisualElement e, ::System::Func_4<T,T,float_t,T> interpolator) ;

/// @brief Method KeepAlive addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T> KeepAlive() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::Experimental
// Type: UnityEngine.UIElements.Experimental::ValueAnimation`1
namespace UnityEngine::UIElements::Experimental {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7558))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7558), inst: 5120 })
// CS Name: UnityEngine.UIElements.Experimental.ValueAnimation`1
class CORDL_TYPE ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::Experimental::IValueAnimationUpdate
constexpr operator  ::UnityEngine::UIElements::Experimental::IValueAnimationUpdate() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ValueAnimation_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueAnimation_1", modifiers: " const&", def_value: None }]
constexpr ValueAnimation_1(ValueAnimation_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueAnimation_1", modifiers: "&&", def_value: None }]
constexpr ValueAnimation_1(ValueAnimation_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValueAnimation_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValueAnimation_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValueAnimation_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValueAnimation_1& operator=(ValueAnimation_1&& o) noexcept = default;
  constexpr ValueAnimation_1& operator=(ValueAnimation_1 const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_StartTimeMs, put=__set_m_StartTimeMs))  m_StartTimeMs;

constexpr void __set_m_StartTimeMs(int64_t value) ;

constexpr int64_t __get_m_StartTimeMs() const;

 int32_t __declspec(property(get=__get_m_DurationMs, put=__set_m_DurationMs))  m_DurationMs;

constexpr void __set_m_DurationMs(int32_t value) ;

constexpr int32_t __get_m_DurationMs() const;

 ::System::Func_2<float_t,float_t> __declspec(property(get=__get__easingCurve_k__BackingField, put=__set__easingCurve_k__BackingField))  _easingCurve_k__BackingField;

constexpr void __set__easingCurve_k__BackingField(::System::Func_2<float_t,float_t> value) ;

constexpr ::System::Func_2<float_t,float_t> __get__easingCurve_k__BackingField() const;

 bool __declspec(property(get=__get__isRunning_k__BackingField, put=__set__isRunning_k__BackingField))  _isRunning_k__BackingField;

constexpr void __set__isRunning_k__BackingField(bool value) ;

constexpr bool __get__isRunning_k__BackingField() const;

 ::System::Action __declspec(property(get=__get__onAnimationCompleted_k__BackingField, put=__set__onAnimationCompleted_k__BackingField))  _onAnimationCompleted_k__BackingField;

constexpr void __set__onAnimationCompleted_k__BackingField(::System::Action value) ;

constexpr ::System::Action __get__onAnimationCompleted_k__BackingField() const;

 bool __declspec(property(get=__get__autoRecycle_k__BackingField, put=__set__autoRecycle_k__BackingField))  _autoRecycle_k__BackingField;

constexpr void __set__autoRecycle_k__BackingField(bool value) ;

constexpr bool __get__autoRecycle_k__BackingField() const;

 bool __declspec(property(get=__get__recycled_k__BackingField, put=__set__recycled_k__BackingField))  _recycled_k__BackingField;

constexpr void __set__recycled_k__BackingField(bool value) ;

constexpr bool __get__recycled_k__BackingField() const;

static ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>> __declspec(property(get=__get_sObjectPool, put=__set_sObjectPool))  sObjectPool;

static void __set_sObjectPool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>> value) ;

static ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>> __get_sObjectPool() ;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get__owner_k__BackingField, put=__set__owner_k__BackingField))  _owner_k__BackingField;

constexpr void __set__owner_k__BackingField(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get__owner_k__BackingField() const;

 ::System::Action_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::Experimental::StyleValues> __declspec(property(get=__get__valueUpdated_k__BackingField, put=__set__valueUpdated_k__BackingField))  _valueUpdated_k__BackingField;

constexpr void __set__valueUpdated_k__BackingField(::System::Action_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::Experimental::StyleValues> value) ;

constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::Experimental::StyleValues> __get__valueUpdated_k__BackingField() const;

 ::System::Func_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::Experimental::StyleValues> __declspec(property(get=__get__initialValue_k__BackingField, put=__set__initialValue_k__BackingField))  _initialValue_k__BackingField;

constexpr void __set__initialValue_k__BackingField(::System::Func_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::Experimental::StyleValues> value) ;

constexpr ::System::Func_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::Experimental::StyleValues> __get__initialValue_k__BackingField() const;

 ::System::Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues> __declspec(property(get=__get__interpolator_k__BackingField, put=__set__interpolator_k__BackingField))  _interpolator_k__BackingField;

constexpr void __set__interpolator_k__BackingField(::System::Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues> value) ;

constexpr ::System::Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues> __get__interpolator_k__BackingField() const;

 ::UnityEngine::UIElements::Experimental::StyleValues __declspec(property(get=__get__from, put=__set__from))  _from;

constexpr void __set__from(::UnityEngine::UIElements::Experimental::StyleValues value) ;

constexpr ::UnityEngine::UIElements::Experimental::StyleValues __get__from() const;

 bool __declspec(property(get=__get_fromValueSet, put=__set_fromValueSet))  fromValueSet;

constexpr void __set_fromValueSet(bool value) ;

constexpr bool __get_fromValueSet() const;

 ::UnityEngine::UIElements::Experimental::StyleValues __declspec(property(get=__get__to_k__BackingField, put=__set__to_k__BackingField))  _to_k__BackingField;

constexpr void __set__to_k__BackingField(::UnityEngine::UIElements::Experimental::StyleValues value) ;

constexpr ::UnityEngine::UIElements::Experimental::StyleValues __get__to_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_durationMs, put=set_durationMs))  durationMs;

 ::System::Func_2<float_t,float_t> __declspec(property(get=get_easingCurve, put=set_easingCurve))  easingCurve;

 bool __declspec(property(get=get_isRunning, put=set_isRunning))  isRunning;

 ::System::Action __declspec(property(get=get_onAnimationCompleted, put=set_onAnimationCompleted))  onAnimationCompleted;

 bool __declspec(property(get=get_autoRecycle, put=set_autoRecycle))  autoRecycle;

 bool __declspec(property(get=get_recycled, put=set_recycled))  recycled;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_owner, put=set_owner))  owner;

 ::System::Action_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::Experimental::StyleValues> __declspec(property(get=get_valueUpdated, put=set_valueUpdated))  valueUpdated;

 ::System::Func_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::Experimental::StyleValues> __declspec(property(get=get_initialValue, put=set_initialValue))  initialValue;

 ::System::Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues> __declspec(property(get=get_interpolator, put=set_interpolator))  interpolator;

 ::UnityEngine::UIElements::Experimental::StyleValues __declspec(property(get=get_from, put=set_from))  from;

 ::UnityEngine::UIElements::Experimental::StyleValues __declspec(property(get=get_to, put=set_to))  to;


// Methods

/// @brief Method get_durationMs addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_durationMs() ;

/// @brief Method set_durationMs addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_durationMs(int32_t value) ;

/// @brief Method get_easingCurve addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Func_2<float_t,float_t> get_easingCurve() ;

/// @brief Method set_easingCurve addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_easingCurve(::System::Func_2<float_t,float_t> value) ;

/// @brief Method get_isRunning addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_isRunning() ;

/// @brief Method set_isRunning addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_isRunning(bool value) ;

/// @brief Method get_onAnimationCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Action get_onAnimationCompleted() ;

/// @brief Method set_onAnimationCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_onAnimationCompleted(::System::Action value) ;

/// @brief Method get_autoRecycle addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_autoRecycle() ;

/// @brief Method set_autoRecycle addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_autoRecycle(bool value) ;

/// @brief Method get_recycled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_recycled() ;

/// @brief Method set_recycled addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_recycled(bool value) ;

/// @brief Method get_owner addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::VisualElement get_owner() ;

/// @brief Method set_owner addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_owner(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_valueUpdated addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Action_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::Experimental::StyleValues> get_valueUpdated() ;

/// @brief Method set_valueUpdated addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_valueUpdated(::System::Action_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::Experimental::StyleValues> value) ;

/// @brief Method get_initialValue addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Func_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::Experimental::StyleValues> get_initialValue() ;

/// @brief Method set_initialValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_initialValue(::System::Func_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::Experimental::StyleValues> value) ;

/// @brief Method get_interpolator addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues> get_interpolator() ;

/// @brief Method set_interpolator addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_interpolator(::System::Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues> value) ;

/// @brief Method get_from addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::Experimental::StyleValues get_from() ;

/// @brief Method set_from addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_from(::UnityEngine::UIElements::Experimental::StyleValues value) ;

/// @brief Method get_to addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::Experimental::StyleValues get_to() ;

/// @brief Method set_to addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_to(::UnityEngine::UIElements::Experimental::StyleValues value) ;

// Ctor Parameters []
explicit ValueAnimation_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final true
 void Start() ;

/// @brief Method Stop addr 0x0 size 0xffffffffffffffff virtual true final true
 void Stop() ;

/// @brief Method Recycle addr 0x0 size 0xffffffffffffffff virtual true final true
 void Recycle() ;

/// @brief Method UnityEngine.UIElements.Experimental.IValueAnimationUpdate.Tick addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnityEngine_UIElements_Experimental_IValueAnimationUpdate_Tick(int64_t currentTimeMs) ;

/// @brief Method SetDefaultValues addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetDefaultValues() ;

/// @brief Method Unregister addr 0x0 size 0xffffffffffffffff virtual false final false
 void Unregister() ;

/// @brief Method Register addr 0x0 size 0xffffffffffffffff virtual false final false
 void Register() ;

/// @brief Method SetOwner addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetOwner(::UnityEngine::UIElements::VisualElement e) ;

/// @brief Method CheckNotRecycled addr 0x0 size 0xffffffffffffffff virtual false final false
 void CheckNotRecycled() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues> Create(::UnityEngine::UIElements::VisualElement e, ::System::Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues> interpolator) ;

/// @brief Method KeepAlive addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues> KeepAlive() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::Experimental
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::Experimental::ValueAnimation_1, "UnityEngine.UIElements.Experimental", "ValueAnimation`1");
