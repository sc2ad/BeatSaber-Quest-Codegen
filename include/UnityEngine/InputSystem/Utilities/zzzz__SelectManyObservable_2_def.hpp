#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class IObserver_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename TSource,typename TResult>
class SelectManyObservable_2;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TSource,typename TResult>
class ____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TSource,::cordl_internals::il2cpp_reference_type TResult>
class SelectManyObservable_2<TSource,TResult>;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TSource,::cordl_internals::il2cpp_reference_type TResult>
class ____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select<TSource,TResult>;
}
// Type: ::Select
// Type: UnityEngine.InputSystem.Utilities::SelectManyObservable`2
// Type: ::Select
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSource,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6773))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6773), inst: 80 })
// CS Name: UnityEngine.InputSystem.Utilities.SelectManyObservable`2::Select
class CORDL_TYPE ____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select<TSource,TResult> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IObserver_1<TSource>
constexpr operator  ::System::IObserver_1<TSource>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select(____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select(____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select& operator=(____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select& operator=(____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource,TResult> __declspec(property(get=__get_m_Observable, put=__set_m_Observable))  m_Observable;

constexpr void __set_m_Observable(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource,TResult> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource,TResult> __get_m_Observable() const;

 ::System::IObserver_1<TResult> __declspec(property(get=__get_m_Observer, put=__set_m_Observer))  m_Observer;

constexpr void __set_m_Observer(::System::IObserver_1<TResult> value) ;

constexpr ::System::IObserver_1<TResult> __get_m_Observer() const;


// Methods

// Ctor Parameters [CppParam { name: "observable", ty: "::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource,TResult>", modifiers: "", def_value: None }, CppParam { name: "observer", ty: "::System::IObserver_1<TResult>", modifiers: "", def_value: None }]
explicit ____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource,TResult> observable, ::System::IObserver_1<TResult> observer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource,TResult> observable, ::System::IObserver_1<TResult> observer) ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnCompleted() ;

/// @brief Method OnError addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnError(::System::Exception error) ;

/// @brief Method OnNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnNext(TSource evt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::SelectManyObservable`2
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSource,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6774))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6774), inst: 80 })
// CS Name: UnityEngine.InputSystem.Utilities.SelectManyObservable`2
class CORDL_TYPE SelectManyObservable_2<TSource,TResult> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Select = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select<TSource, TResult>;

/// @brief Convert operator to ::System::IObservable_1<TResult>
constexpr operator  ::System::IObservable_1<TResult>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SelectManyObservable_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectManyObservable_2", modifiers: " const&", def_value: None }]
constexpr SelectManyObservable_2(SelectManyObservable_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectManyObservable_2", modifiers: "&&", def_value: None }]
constexpr SelectManyObservable_2(SelectManyObservable_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectManyObservable_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SelectManyObservable_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectManyObservable_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectManyObservable_2& operator=(SelectManyObservable_2&& o) noexcept = default;
  constexpr SelectManyObservable_2& operator=(SelectManyObservable_2 const& o) noexcept = default;
                


// Fields

 ::System::IObservable_1<TSource> __declspec(property(get=__get_m_Source, put=__set_m_Source))  m_Source;

constexpr void __set_m_Source(::System::IObservable_1<TSource> value) ;

constexpr ::System::IObservable_1<TSource> __get_m_Source() const;

 ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>> __declspec(property(get=__get_m_Filter, put=__set_m_Filter))  m_Filter;

constexpr void __set_m_Filter(::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>> value) ;

constexpr ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>> __get_m_Filter() const;


// Methods

// Ctor Parameters [CppParam { name: "source", ty: "::System::IObservable_1<TSource>", modifiers: "", def_value: None }, CppParam { name: "filter", ty: "::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>>", modifiers: "", def_value: None }]
explicit SelectManyObservable_2(::System::IObservable_1<TSource> source, ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>> filter) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::IObservable_1<TSource> source, ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>> filter) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::IDisposable Subscribe(::System::IObserver_1<TResult> observer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2, "UnityEngine.InputSystem.Utilities", "SelectManyObservable`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__SelectManyObservable_2__Select, "UnityEngine.InputSystem.Utilities", "SelectManyObservable`2/Select");
