#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class SignalBindingBindInfo;
}
// Type: Zenject::SignalBindingBindInfo
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10595))
// CS Name: Zenject.SignalBindingBindInfo
class CORDL_TYPE SignalBindingBindInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SignalBindingBindInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalBindingBindInfo", modifiers: " const&", def_value: None }]
constexpr SignalBindingBindInfo(SignalBindingBindInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalBindingBindInfo", modifiers: "&&", def_value: None }]
constexpr SignalBindingBindInfo(SignalBindingBindInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalBindingBindInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignalBindingBindInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalBindingBindInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalBindingBindInfo& operator=(SignalBindingBindInfo&& o) noexcept = default;
  constexpr SignalBindingBindInfo& operator=(SignalBindingBindInfo const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__Identifier_k__BackingField, put=__set__Identifier_k__BackingField))  _Identifier_k__BackingField;

constexpr void __set__Identifier_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__Identifier_k__BackingField() const;

 ::System::Type __declspec(property(get=__get__SignalType_k__BackingField, put=__set__SignalType_k__BackingField))  _SignalType_k__BackingField;

constexpr void __set__SignalType_k__BackingField(::System::Type value) ;

constexpr ::System::Type __get__SignalType_k__BackingField() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Identifier, put=set_Identifier))  Identifier;

 ::System::Type __declspec(property(get=get_SignalType, put=set_SignalType))  SignalType;


// Methods

// Ctor Parameters [CppParam { name: "signalType", ty: "::System::Type", modifiers: "", def_value: None }]
explicit SignalBindingBindInfo(::System::Type signalType) ;

/// @brief Method .ctor addr 0x2d48f10 size 0x28 virtual false final false
 void _ctor(::System::Type signalType) ;

/// @brief Method get_Identifier addr 0x2d48f38 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Identifier() ;

/// @brief Method set_Identifier addr 0x2d48f40 size 0x8 virtual false final false
 void set_Identifier(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_SignalType addr 0x2d48f48 size 0x8 virtual false final false
 ::System::Type get_SignalType() ;

/// @brief Method set_SignalType addr 0x2d48f50 size 0x8 virtual false final false
 void set_SignalType(::System::Type value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::SignalBindingBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalBindingBindInfo, "Zenject", "SignalBindingBindInfo");
