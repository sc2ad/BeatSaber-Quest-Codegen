#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::InputSystem::LowLevel {
template<typename TSource,typename TResult>
class UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace System {
template<typename T>
class IObserver_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
template<typename TSource,typename TResult>
class SelectObservable_2;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TSource,typename TResult>
class UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select;
}
namespace UnityEngine::InputSystem::LowLevel {
template<::cordl_internals::il2cpp_reference_type TSource,::cordl_internals::il2cpp_reference_type TResult>
class SelectObservable_2<TSource,TResult>;
}
namespace UnityEngine::InputSystem::LowLevel {
template<::cordl_internals::il2cpp_reference_type TResult>
class SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>;
}
namespace UnityEngine::InputSystem::LowLevel {
template<::cordl_internals::il2cpp_reference_type TSource,::cordl_internals::il2cpp_reference_type TResult>
class UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select<TSource,TResult>;
}
namespace UnityEngine::InputSystem::LowLevel {
template<::cordl_internals::il2cpp_reference_type TResult>
class UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>;
}
// Type: ::Select
// Type: UnityEngine.InputSystem.LowLevel::SelectObservable`2
// Type: ::Select
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6661))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6661), inst: 6257 })
// CS Name: UnityEngine.InputSystem.LowLevel.SelectObservable`2::Select
class CORDL_TYPE UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>
constexpr operator  System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select(UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select(UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select& operator=(UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select& operator=(UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::LowLevel::SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> __declspec(property(get=__get_m_Observable, put=__set_m_Observable))  m_Observable;

constexpr void __set_m_Observable(UnityEngine::InputSystem::LowLevel::SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> value) ;

constexpr UnityEngine::InputSystem::LowLevel::SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> __get_m_Observable() const;

 System::IObserver_1<TResult> __declspec(property(get=__get_m_Observer, put=__set_m_Observer))  m_Observer;

constexpr void __set_m_Observer(System::IObserver_1<TResult> value) ;

constexpr System::IObserver_1<TResult> __get_m_Observer() const;


// Methods

static UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> New_ctor(UnityEngine::InputSystem::LowLevel::SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> observable, System::IObserver_1<TResult> observer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::InputSystem::LowLevel::SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> observable, System::IObserver_1<TResult> observer) ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnCompleted() ;

/// @brief Method OnError addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnError(System::Exception error) ;

/// @brief Method OnNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnNext(UnityEngine::InputSystem::LowLevel::InputEventPtr evt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::Select
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSource,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6661))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6661), inst: 80 })
// CS Name: UnityEngine.InputSystem.LowLevel.SelectObservable`2::Select
class CORDL_TYPE UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select<TSource,TResult> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IObserver_1<TSource>
constexpr operator  System::IObserver_1<TSource>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select(UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select(UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select& operator=(UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select& operator=(UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult> __declspec(property(get=__get_m_Observable, put=__set_m_Observable))  m_Observable;

constexpr void __set_m_Observable(UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult> value) ;

constexpr UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult> __get_m_Observable() const;

 System::IObserver_1<TResult> __declspec(property(get=__get_m_Observer, put=__set_m_Observer))  m_Observer;

constexpr void __set_m_Observer(System::IObserver_1<TResult> value) ;

constexpr System::IObserver_1<TResult> __get_m_Observer() const;


// Methods

static UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select<TSource,TResult> New_ctor(UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult> observable, System::IObserver_1<TResult> observer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult> observable, System::IObserver_1<TResult> observer) ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnCompleted() ;

/// @brief Method OnError addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnError(System::Exception error) ;

/// @brief Method OnNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnNext(TSource evt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::SelectObservable`2
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6662))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6662), inst: 6257 })
// CS Name: UnityEngine.InputSystem.LowLevel.SelectObservable`2
class CORDL_TYPE SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Select = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select<UnityEngine::InputSystem::LowLevel::InputEventPtr, TResult>;

/// @brief Convert operator to System::IObservable_1<TResult>
constexpr operator  System::IObservable_1<TResult>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SelectObservable_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectObservable_2", modifiers: " const&", def_value: None }]
constexpr SelectObservable_2(SelectObservable_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectObservable_2", modifiers: "&&", def_value: None }]
constexpr SelectObservable_2(SelectObservable_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectObservable_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SelectObservable_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectObservable_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectObservable_2& operator=(SelectObservable_2&& o) noexcept = default;
  constexpr SelectObservable_2& operator=(SelectObservable_2 const& o) noexcept = default;
                


// Fields

 System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> __declspec(property(get=__get_m_Source, put=__set_m_Source))  m_Source;

constexpr void __set_m_Source(System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> value) ;

constexpr System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> __get_m_Source() const;

 System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> __declspec(property(get=__get_m_Filter, put=__set_m_Filter))  m_Filter;

constexpr void __set_m_Filter(System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> value) ;

constexpr System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> __get_m_Filter() const;


// Methods

static UnityEngine::InputSystem::LowLevel::SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> New_ctor(System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> source, System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> filter) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> source, System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> filter) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual true final true
 System::IDisposable Subscribe(System::IObserver_1<TResult> observer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::SelectObservable`2
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSource,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6662))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6662), inst: 80 })
// CS Name: UnityEngine.InputSystem.LowLevel.SelectObservable`2
class CORDL_TYPE SelectObservable_2<TSource,TResult> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Select = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select<TSource, TResult>;

/// @brief Convert operator to System::IObservable_1<TResult>
constexpr operator  System::IObservable_1<TResult>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SelectObservable_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectObservable_2", modifiers: " const&", def_value: None }]
constexpr SelectObservable_2(SelectObservable_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectObservable_2", modifiers: "&&", def_value: None }]
constexpr SelectObservable_2(SelectObservable_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectObservable_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SelectObservable_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectObservable_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectObservable_2& operator=(SelectObservable_2&& o) noexcept = default;
  constexpr SelectObservable_2& operator=(SelectObservable_2 const& o) noexcept = default;
                


// Fields

 System::IObservable_1<TSource> __declspec(property(get=__get_m_Source, put=__set_m_Source))  m_Source;

constexpr void __set_m_Source(System::IObservable_1<TSource> value) ;

constexpr System::IObservable_1<TSource> __get_m_Source() const;

 System::Func_2<TSource,TResult> __declspec(property(get=__get_m_Filter, put=__set_m_Filter))  m_Filter;

constexpr void __set_m_Filter(System::Func_2<TSource,TResult> value) ;

constexpr System::Func_2<TSource,TResult> __get_m_Filter() const;


// Methods

static UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult> New_ctor(System::IObservable_1<TSource> source, System::Func_2<TSource,TResult> filter) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::IObservable_1<TSource> source, System::Func_2<TSource,TResult> filter) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual true final true
 System::IDisposable Subscribe(System::IObserver_1<TResult> observer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::InputSystem::LowLevel::SelectObservable_2, "UnityEngine.InputSystem.LowLevel", "SelectObservable`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select, "UnityEngine.InputSystem.LowLevel", "SelectObservable`2/Select");
