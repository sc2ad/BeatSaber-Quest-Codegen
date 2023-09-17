#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
template<typename T>
class IObserver_1;
}
namespace System {
class Exception;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
class Observer_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
class Observer_1<TValue>;
}
// Type: UnityEngine.InputSystem.Utilities::Observer`1
// Type: UnityEngine.InputSystem.Utilities::Observer`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6772))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6772), inst: 2 })
// CS Name: UnityEngine.InputSystem.Utilities.Observer`1
class CORDL_TYPE Observer_1<TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IObserver_1<TValue>
constexpr operator  ::System::IObserver_1<TValue>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Observer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Observer_1", modifiers: " const&", def_value: None }]
constexpr Observer_1(Observer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Observer_1", modifiers: "&&", def_value: None }]
constexpr Observer_1(Observer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Observer_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Observer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Observer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Observer_1& operator=(Observer_1&& o) noexcept = default;
  constexpr Observer_1& operator=(Observer_1 const& o) noexcept = default;
                


// Fields

 ::System::Action_1<TValue> __declspec(property(get=__get_m_OnNext, put=__set_m_OnNext))  m_OnNext;

constexpr void __set_m_OnNext(::System::Action_1<TValue> value) ;

constexpr ::System::Action_1<TValue> __get_m_OnNext() const;

 ::System::Action __declspec(property(get=__get_m_OnCompleted, put=__set_m_OnCompleted))  m_OnCompleted;

constexpr void __set_m_OnCompleted(::System::Action value) ;

constexpr ::System::Action __get_m_OnCompleted() const;


// Methods

// Ctor Parameters [CppParam { name: "onNext", ty: "::System::Action_1<TValue>", modifiers: "", def_value: None }, CppParam { name: "onCompleted", ty: "::System::Action", modifiers: "", def_value: None }]
explicit Observer_1(::System::Action_1<TValue> onNext, ::System::Action onCompleted) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Action_1<TValue> onNext, ::System::Action onCompleted) ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnCompleted() ;

/// @brief Method OnError addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnError(::System::Exception error) ;

/// @brief Method OnNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnNext(TValue evt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::Observer_1, "UnityEngine.InputSystem.Utilities", "Observer`1");
