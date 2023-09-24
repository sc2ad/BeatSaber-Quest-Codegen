#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Zenject {
struct SignalMissingHandlerResponses;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class SignalDeclarationBindInfo;
}
// Type: Zenject::SignalDeclarationBindInfo
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10596))
// CS Name: Zenject.SignalDeclarationBindInfo
class CORDL_TYPE SignalDeclarationBindInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SignalDeclarationBindInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalDeclarationBindInfo", modifiers: " const&", def_value: None }]
constexpr SignalDeclarationBindInfo(SignalDeclarationBindInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalDeclarationBindInfo", modifiers: "&&", def_value: None }]
constexpr SignalDeclarationBindInfo(SignalDeclarationBindInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalDeclarationBindInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignalDeclarationBindInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalDeclarationBindInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalDeclarationBindInfo& operator=(SignalDeclarationBindInfo&& o) noexcept = default;
  constexpr SignalDeclarationBindInfo& operator=(SignalDeclarationBindInfo const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__Identifier_k__BackingField, put=__set__Identifier_k__BackingField))  _Identifier_k__BackingField;

constexpr void __set__Identifier_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__Identifier_k__BackingField() const;

 System::Type __declspec(property(get=__get__SignalType_k__BackingField, put=__set__SignalType_k__BackingField))  _SignalType_k__BackingField;

constexpr void __set__SignalType_k__BackingField(System::Type value) ;

constexpr System::Type __get__SignalType_k__BackingField() const;

 bool __declspec(property(get=__get__RunAsync_k__BackingField, put=__set__RunAsync_k__BackingField))  _RunAsync_k__BackingField;

constexpr void __set__RunAsync_k__BackingField(bool value) ;

constexpr bool __get__RunAsync_k__BackingField() const;

 int32_t __declspec(property(get=__get__TickPriority_k__BackingField, put=__set__TickPriority_k__BackingField))  _TickPriority_k__BackingField;

constexpr void __set__TickPriority_k__BackingField(int32_t value) ;

constexpr int32_t __get__TickPriority_k__BackingField() const;

 Zenject::SignalMissingHandlerResponses __declspec(property(get=__get__MissingHandlerResponse_k__BackingField, put=__set__MissingHandlerResponse_k__BackingField))  _MissingHandlerResponse_k__BackingField;

constexpr void __set__MissingHandlerResponse_k__BackingField(Zenject::SignalMissingHandlerResponses value) ;

constexpr Zenject::SignalMissingHandlerResponses __get__MissingHandlerResponse_k__BackingField() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Identifier, put=set_Identifier))  Identifier;

 System::Type __declspec(property(get=get_SignalType, put=set_SignalType))  SignalType;

 bool __declspec(property(get=get_RunAsync, put=set_RunAsync))  RunAsync;

 int32_t __declspec(property(get=get_TickPriority, put=set_TickPriority))  TickPriority;

 Zenject::SignalMissingHandlerResponses __declspec(property(get=get_MissingHandlerResponse, put=set_MissingHandlerResponse))  MissingHandlerResponse;


// Methods

static Zenject::SignalDeclarationBindInfo New_ctor(System::Type signalType) ;

/// @brief Method .ctor addr 0x2d48f58 size 0x28 virtual false final false
 void _ctor(System::Type signalType) ;

/// @brief Method get_Identifier addr 0x2d48f80 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Identifier() ;

/// @brief Method set_Identifier addr 0x2d48f88 size 0x8 virtual false final false
 void set_Identifier(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_SignalType addr 0x2d48f90 size 0x8 virtual false final false
 System::Type get_SignalType() ;

/// @brief Method set_SignalType addr 0x2d48f98 size 0x8 virtual false final false
 void set_SignalType(System::Type value) ;

/// @brief Method get_RunAsync addr 0x2d48fa0 size 0x8 virtual false final false
 bool get_RunAsync() ;

/// @brief Method set_RunAsync addr 0x2d48fa8 size 0xc virtual false final false
 void set_RunAsync(bool value) ;

/// @brief Method get_TickPriority addr 0x2d48fb4 size 0x8 virtual false final false
 int32_t get_TickPriority() ;

/// @brief Method set_TickPriority addr 0x2d48fbc size 0x8 virtual false final false
 void set_TickPriority(int32_t value) ;

/// @brief Method get_MissingHandlerResponse addr 0x2d48fc4 size 0x8 virtual false final false
 Zenject::SignalMissingHandlerResponses get_MissingHandlerResponse() ;

/// @brief Method set_MissingHandlerResponse addr 0x2d48fcc size 0x8 virtual false final false
 void set_MissingHandlerResponse(Zenject::SignalMissingHandlerResponses value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SignalDeclarationBindInfo);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SignalDeclarationBindInfo, "Zenject", "SignalDeclarationBindInfo");
