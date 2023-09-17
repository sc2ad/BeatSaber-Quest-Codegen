#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
class ____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1;
}
namespace UnityEngine::InputSystem::Utilities {
class Observable;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
class ____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1<TValue>;
}
// Type: ::<>c__DisplayClass6_0`1
// Type: UnityEngine.InputSystem.Utilities::Observable
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6771))
// CS Name: UnityEngine.InputSystem.Utilities.Observable
class CORDL_TYPE Observable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename TValue>
using __c__DisplayClass6_0_1 = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1<TValue>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Observable() = default;

// Ctor Parameters [CppParam { name: "", ty: "Observable", modifiers: " const&", def_value: None }]
constexpr Observable(Observable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Observable", modifiers: "&&", def_value: None }]
constexpr Observable(Observable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Observable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Observable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Observable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Observable& operator=(Observable&& o) noexcept = default;
  constexpr Observable& operator=(Observable const& o) noexcept = default;
                


// Methods

/// @brief Method Where addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static ::System::IObservable_1<TValue> Where(::System::IObservable_1<TValue> source, ::System::Func_2<TValue,bool> predicate) ;

/// @brief Method Select addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSource,typename TResult>
static ::System::IObservable_1<TResult> Select(::System::IObservable_1<TSource> source, ::System::Func_2<TSource,TResult> filter) ;

/// @brief Method SelectMany addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSource,typename TResult>
static ::System::IObservable_1<TResult> SelectMany(::System::IObservable_1<TSource> source, ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>> filter) ;

/// @brief Method Take addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static ::System::IObservable_1<TValue> Take(::System::IObservable_1<TValue> source, int32_t count) ;

/// @brief Method ForDevice addr 0x2983644 size 0xbc virtual false final false
static ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr> ForDevice(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr> source, ::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method ForDevice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevice>
static ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr> ForDevice(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr> source) ;

/// @brief Method CallOnce addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static ::System::IDisposable CallOnce(::System::IObservable_1<TValue> source, ::System::Action_1<TValue> action) ;

/// @brief Method Call addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static ::System::IDisposable Call(::System::IObservable_1<TValue> source, ::System::Action_1<TValue> action) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::<>c__DisplayClass6_0`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6770))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6770), inst: 2 })
// CS Name: UnityEngine.InputSystem.Utilities.Observable::<>c__DisplayClass6_0`1
class CORDL_TYPE ____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1<TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1(____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1(____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1& operator=(____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1& operator=(____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1 const& o) noexcept = default;
                


// Fields

 ::System::IDisposable __declspec(property(get=__get_subscription, put=__set_subscription))  subscription;

constexpr void __set_subscription(::System::IDisposable value) ;

constexpr ::System::IDisposable __get_subscription() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <CallOnce>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _CallOnce_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1, "UnityEngine.InputSystem.Utilities", "Observable/<>c__DisplayClass6_0`1");
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::Observable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::Observable, "UnityEngine.InputSystem.Utilities", "Observable");
