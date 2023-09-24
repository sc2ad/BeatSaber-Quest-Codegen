#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
template<typename T>
class IObserver_1;
}
namespace System {
class Exception;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
class UnityEngine__InputSystem__Utilities__WhereObservable_1__Where;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IObservable_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
class UnityEngine__InputSystem__Utilities__WhereObservable_1__Where;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
class WhereObservable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
class UnityEngine__InputSystem__Utilities__WhereObservable_1__Where<TValue>;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
class WhereObservable_1<TValue>;
}
// Type: ::Where
// Type: UnityEngine.InputSystem.Utilities::WhereObservable`1
// Type: ::Where
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6777))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6777), inst: 2 })
// CS Name: UnityEngine.InputSystem.Utilities.WhereObservable`1::Where
class CORDL_TYPE UnityEngine__InputSystem__Utilities__WhereObservable_1__Where<TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IObserver_1<TValue>
constexpr operator  System::IObserver_1<TValue>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__InputSystem__Utilities__WhereObservable_1__Where() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__WhereObservable_1__Where", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__WhereObservable_1__Where(UnityEngine__InputSystem__Utilities__WhereObservable_1__Where const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__WhereObservable_1__Where", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__WhereObservable_1__Where(UnityEngine__InputSystem__Utilities__WhereObservable_1__Where&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__WhereObservable_1__Where(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Utilities__WhereObservable_1__Where& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__WhereObservable_1__Where& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__WhereObservable_1__Where& operator=(UnityEngine__InputSystem__Utilities__WhereObservable_1__Where&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Utilities__WhereObservable_1__Where& operator=(UnityEngine__InputSystem__Utilities__WhereObservable_1__Where const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue> __declspec(property(get=__get_m_Observable, put=__set_m_Observable))  m_Observable;

constexpr void __set_m_Observable(UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue> value) ;

constexpr UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue> __get_m_Observable() const;

 System::IObserver_1<TValue> __declspec(property(get=__get_m_Observer, put=__set_m_Observer))  m_Observer;

constexpr void __set_m_Observer(System::IObserver_1<TValue> value) ;

constexpr System::IObserver_1<TValue> __get_m_Observer() const;


// Methods

static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__WhereObservable_1__Where<TValue> New_ctor(UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue> observable, System::IObserver_1<TValue> observer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue> observable, System::IObserver_1<TValue> observer) ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnCompleted() ;

/// @brief Method OnError addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnError(System::Exception error) ;

/// @brief Method OnNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnNext(TValue evt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::WhereObservable`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6778))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6778), inst: 2 })
// CS Name: UnityEngine.InputSystem.Utilities.WhereObservable`1
class CORDL_TYPE WhereObservable_1<TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Where = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__WhereObservable_1__Where<TValue>;

/// @brief Convert operator to System::IObservable_1<TValue>
constexpr operator  System::IObservable_1<TValue>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~WhereObservable_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "WhereObservable_1", modifiers: " const&", def_value: None }]
constexpr WhereObservable_1(WhereObservable_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WhereObservable_1", modifiers: "&&", def_value: None }]
constexpr WhereObservable_1(WhereObservable_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WhereObservable_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WhereObservable_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WhereObservable_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WhereObservable_1& operator=(WhereObservable_1&& o) noexcept = default;
  constexpr WhereObservable_1& operator=(WhereObservable_1 const& o) noexcept = default;
                


// Fields

 System::IObservable_1<TValue> __declspec(property(get=__get_m_Source, put=__set_m_Source))  m_Source;

constexpr void __set_m_Source(System::IObservable_1<TValue> value) ;

constexpr System::IObservable_1<TValue> __get_m_Source() const;

 System::Func_2<TValue,bool> __declspec(property(get=__get_m_Predicate, put=__set_m_Predicate))  m_Predicate;

constexpr void __set_m_Predicate(System::Func_2<TValue,bool> value) ;

constexpr System::Func_2<TValue,bool> __get_m_Predicate() const;


// Methods

static UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue> New_ctor(System::IObservable_1<TValue> source, System::Func_2<TValue,bool> predicate) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::IObservable_1<TValue> source, System::Func_2<TValue,bool> predicate) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual true final true
 System::IDisposable Subscribe(System::IObserver_1<TValue> observer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__WhereObservable_1__Where, "UnityEngine.InputSystem.Utilities", "WhereObservable`1/Where");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::InputSystem::Utilities::WhereObservable_1, "UnityEngine.InputSystem.Utilities", "WhereObservable`1");
