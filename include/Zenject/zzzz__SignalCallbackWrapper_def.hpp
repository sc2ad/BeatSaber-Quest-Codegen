#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
class Type;
}
namespace Zenject {
class SignalBindingBindInfo;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class SignalBus;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class SignalCallbackWrapper;
}
// Type: Zenject::SignalCallbackWrapper
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10591))
// CS Name: Zenject.SignalCallbackWrapper
class CORDL_TYPE SignalCallbackWrapper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SignalCallbackWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalCallbackWrapper", modifiers: " const&", def_value: None }]
constexpr SignalCallbackWrapper(SignalCallbackWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalCallbackWrapper", modifiers: "&&", def_value: None }]
constexpr SignalCallbackWrapper(SignalCallbackWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalCallbackWrapper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignalCallbackWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalCallbackWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalCallbackWrapper& operator=(SignalCallbackWrapper&& o) noexcept = default;
  constexpr SignalCallbackWrapper& operator=(SignalCallbackWrapper const& o) noexcept = default;
                


// Fields

 Zenject::SignalBus __declspec(property(get=__get__signalBus, put=__set__signalBus))  _signalBus;

constexpr void __set__signalBus(Zenject::SignalBus value) ;

constexpr Zenject::SignalBus __get__signalBus() const;

 System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__action, put=__set__action))  _action;

constexpr void __set__action(System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Action_1<::bs_hook::Il2CppWrapperType> __get__action() const;

 System::Type __declspec(property(get=__get__signalType, put=__set__signalType))  _signalType;

constexpr void __set__signalType(System::Type value) ;

constexpr System::Type __get__signalType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__identifier, put=__set__identifier))  _identifier;

constexpr void __set__identifier(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__identifier() const;


// Methods

// Ctor Parameters [CppParam { name: "bindInfo", ty: "Zenject::SignalBindingBindInfo", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Action_1<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "signalBus", ty: "Zenject::SignalBus", modifiers: "", def_value: None }]
explicit SignalCallbackWrapper(Zenject::SignalBindingBindInfo bindInfo, System::Action_1<::bs_hook::Il2CppWrapperType> action, Zenject::SignalBus signalBus) ;

/// @brief Method .ctor addr 0x2d48734 size 0xc8 virtual false final false
 void _ctor(Zenject::SignalBindingBindInfo bindInfo, System::Action_1<::bs_hook::Il2CppWrapperType> action, Zenject::SignalBus signalBus) ;

/// @brief Method OnSignalFired addr 0x2d487fc size 0x24 virtual false final false
 void OnSignalFired(::bs_hook::Il2CppWrapperType signal) ;

/// @brief Method Dispose addr 0x2d48820 size 0xa0 virtual true final true
 void Dispose() ;

/// @brief Method __zenCreate addr 0x2d488c0 size 0x178 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d48a38 size 0x394 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SignalCallbackWrapper);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SignalCallbackWrapper, "Zenject", "SignalCallbackWrapper");
