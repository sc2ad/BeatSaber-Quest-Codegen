#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
template<typename T>
class IObserver_1;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
class TakeNObservable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
class UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
class TakeNObservable_1<TValue>;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
class UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue>;
}
// Type: ::Take
// Type: UnityEngine.InputSystem.Utilities::TakeNObservable`1
// Type: ::Take
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6775))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6775), inst: 2 })
// CS Name: UnityEngine.InputSystem.Utilities.TakeNObservable`1::Take
class CORDL_TYPE UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IObserver_1<TValue>
constexpr operator  System::IObserver_1<TValue>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take(UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take(UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take& operator=(UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take& operator=(UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take const& o) noexcept = default;
                


// Fields

 System::IObserver_1<TValue> __declspec(property(get=__get_m_Observer, put=__set_m_Observer))  m_Observer;

constexpr void __set_m_Observer(System::IObserver_1<TValue> value) ;

constexpr System::IObserver_1<TValue> __get_m_Observer() const;

 int32_t __declspec(property(get=__get_m_Remaining, put=__set_m_Remaining))  m_Remaining;

constexpr void __set_m_Remaining(int32_t value) ;

constexpr int32_t __get_m_Remaining() const;


// Methods

// Ctor Parameters [CppParam { name: "observable", ty: "UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>", modifiers: "", def_value: None }, CppParam { name: "observer", ty: "System::IObserver_1<TValue>", modifiers: "", def_value: None }]
explicit UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take(UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue> observable, System::IObserver_1<TValue> observer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue> observable, System::IObserver_1<TValue> observer) ;

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
// Type: UnityEngine.InputSystem.Utilities::TakeNObservable`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6776))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6776), inst: 2 })
// CS Name: UnityEngine.InputSystem.Utilities.TakeNObservable`1
class CORDL_TYPE TakeNObservable_1<TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Take = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue>;

/// @brief Convert operator to System::IObservable_1<TValue>
constexpr operator  System::IObservable_1<TValue>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TakeNObservable_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TakeNObservable_1", modifiers: " const&", def_value: None }]
constexpr TakeNObservable_1(TakeNObservable_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TakeNObservable_1", modifiers: "&&", def_value: None }]
constexpr TakeNObservable_1(TakeNObservable_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TakeNObservable_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TakeNObservable_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TakeNObservable_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TakeNObservable_1& operator=(TakeNObservable_1&& o) noexcept = default;
  constexpr TakeNObservable_1& operator=(TakeNObservable_1 const& o) noexcept = default;
                


// Fields

 System::IObservable_1<TValue> __declspec(property(get=__get_m_Source, put=__set_m_Source))  m_Source;

constexpr void __set_m_Source(System::IObservable_1<TValue> value) ;

constexpr System::IObservable_1<TValue> __get_m_Source() const;

 int32_t __declspec(property(get=__get_m_Count, put=__set_m_Count))  m_Count;

constexpr void __set_m_Count(int32_t value) ;

constexpr int32_t __get_m_Count() const;


// Methods

// Ctor Parameters [CppParam { name: "source", ty: "System::IObservable_1<TValue>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
explicit TakeNObservable_1(System::IObservable_1<TValue> source, int32_t count) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::IObservable_1<TValue> source, int32_t count) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual true final true
 System::IDisposable Subscribe(System::IObserver_1<TValue> observer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::InputSystem::Utilities::TakeNObservable_1, "UnityEngine.InputSystem.Utilities", "TakeNObservable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take, "UnityEngine.InputSystem.Utilities", "TakeNObservable`1/Take");
