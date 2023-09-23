#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Newtonsoft::Json::Serialization {
class ErrorContext;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ErrorEventArgs;
}
// Type: Newtonsoft.Json.Serialization::ErrorEventArgs
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11858))
// CS Name: Newtonsoft.Json.Serialization.ErrorEventArgs
class CORDL_TYPE ErrorEventArgs : public System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ErrorEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "ErrorEventArgs", modifiers: " const&", def_value: None }]
constexpr ErrorEventArgs(ErrorEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ErrorEventArgs", modifiers: "&&", def_value: None }]
constexpr ErrorEventArgs(ErrorEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ErrorEventArgs(void* ptr) noexcept : System::EventArgs(ptr) {
}


  constexpr ErrorEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ErrorEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ErrorEventArgs& operator=(ErrorEventArgs&& o) noexcept = default;
  constexpr ErrorEventArgs& operator=(ErrorEventArgs const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__CurrentObject_k__BackingField, put=__set__CurrentObject_k__BackingField))  _CurrentObject_k__BackingField;

constexpr void __set__CurrentObject_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__CurrentObject_k__BackingField() const;

 Newtonsoft::Json::Serialization::ErrorContext __declspec(property(get=__get__ErrorContext_k__BackingField, put=__set__ErrorContext_k__BackingField))  _ErrorContext_k__BackingField;

constexpr void __set__ErrorContext_k__BackingField(Newtonsoft::Json::Serialization::ErrorContext value) ;

constexpr Newtonsoft::Json::Serialization::ErrorContext __get__ErrorContext_k__BackingField() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_CurrentObject, put=set_CurrentObject))  CurrentObject;

 Newtonsoft::Json::Serialization::ErrorContext __declspec(property(get=get_ErrorContext, put=set_ErrorContext))  ErrorContext;


// Methods

/// @brief Method get_CurrentObject addr 0x24f66f4 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_CurrentObject() ;

/// @brief Method set_CurrentObject addr 0x24f66fc size 0x8 virtual false final false
 void set_CurrentObject(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_ErrorContext addr 0x24f6704 size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::ErrorContext get_ErrorContext() ;

/// @brief Method set_ErrorContext addr 0x24f670c size 0x8 virtual false final false
 void set_ErrorContext(Newtonsoft::Json::Serialization::ErrorContext value) ;

// Ctor Parameters [CppParam { name: "currentObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "errorContext", ty: "Newtonsoft::Json::Serialization::ErrorContext", modifiers: "", def_value: None }]
explicit ErrorEventArgs(::bs_hook::Il2CppWrapperType currentObject, Newtonsoft::Json::Serialization::ErrorContext errorContext) ;

/// @brief Method .ctor addr 0x24f6714 size 0x70 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType currentObject, Newtonsoft::Json::Serialization::ErrorContext errorContext) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::ErrorEventArgs);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::ErrorEventArgs, "Newtonsoft.Json.Serialization", "ErrorEventArgs");
