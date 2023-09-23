#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class ReflectionMember;
}
// Type: Newtonsoft.Json.Utilities::ReflectionMember
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11803))
// CS Name: Newtonsoft.Json.Utilities.ReflectionMember
class CORDL_TYPE ReflectionMember : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ReflectionMember() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionMember", modifiers: " const&", def_value: None }]
constexpr ReflectionMember(ReflectionMember const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionMember", modifiers: "&&", def_value: None }]
constexpr ReflectionMember(ReflectionMember&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionMember(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReflectionMember& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionMember& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionMember& operator=(ReflectionMember&& o) noexcept = default;
  constexpr ReflectionMember& operator=(ReflectionMember const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__MemberType_k__BackingField, put=__set__MemberType_k__BackingField))  _MemberType_k__BackingField;

constexpr void __set__MemberType_k__BackingField(System::Type value) ;

constexpr System::Type __get__MemberType_k__BackingField() const;

 System::Func_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__Getter_k__BackingField, put=__set__Getter_k__BackingField))  _Getter_k__BackingField;

constexpr void __set__Getter_k__BackingField(System::Func_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Func_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __get__Getter_k__BackingField() const;

 System::Action_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__Setter_k__BackingField, put=__set__Setter_k__BackingField))  _Setter_k__BackingField;

constexpr void __set__Setter_k__BackingField(System::Action_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Action_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __get__Setter_k__BackingField() const;


// Properties

 System::Type __declspec(property(get=get_MemberType, put=set_MemberType))  MemberType;

 System::Func_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Getter, put=set_Getter))  Getter;

 System::Action_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Setter, put=set_Setter))  Setter;


// Methods

/// @brief Method get_MemberType addr 0x24e2708 size 0x8 virtual false final false
 System::Type get_MemberType() ;

/// @brief Method set_MemberType addr 0x24e2710 size 0x8 virtual false final false
 void set_MemberType(System::Type value) ;

/// @brief Method get_Getter addr 0x24e2718 size 0x8 virtual false final false
 System::Func_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> get_Getter() ;

/// @brief Method set_Getter addr 0x24e2720 size 0x8 virtual false final false
 void set_Getter(System::Func_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method get_Setter addr 0x24e2728 size 0x8 virtual false final false
 System::Action_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> get_Setter() ;

/// @brief Method set_Setter addr 0x24e2730 size 0x8 virtual false final false
 void set_Setter(System::Action_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

// Ctor Parameters []
explicit ReflectionMember() ;

/// @brief Method .ctor addr 0x24e2738 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(Newtonsoft::Json::Utilities::ReflectionMember);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::ReflectionMember, "Newtonsoft.Json.Utilities", "ReflectionMember");
