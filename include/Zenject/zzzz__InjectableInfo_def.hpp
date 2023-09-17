#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Type;
}
namespace Zenject {
struct InjectSources;
}
// Forward declare root types
namespace Zenject {
class InjectableInfo;
}
// Type: Zenject::InjectableInfo
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15648))
// CS Name: Zenject.InjectableInfo
class CORDL_TYPE InjectableInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~InjectableInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "InjectableInfo", modifiers: " const&", def_value: None }]
constexpr InjectableInfo(InjectableInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InjectableInfo", modifiers: "&&", def_value: None }]
constexpr InjectableInfo(InjectableInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InjectableInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InjectableInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InjectableInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InjectableInfo& operator=(InjectableInfo&& o) noexcept = default;
  constexpr InjectableInfo& operator=(InjectableInfo const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_Optional, put=__set_Optional))  Optional;

constexpr void __set_Optional(bool value) ;

constexpr bool __get_Optional() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_Identifier, put=__set_Identifier))  Identifier;

constexpr void __set_Identifier(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_Identifier() const;

 ::Zenject::InjectSources __declspec(property(get=__get_SourceType, put=__set_SourceType))  SourceType;

constexpr void __set_SourceType(::Zenject::InjectSources value) ;

constexpr ::Zenject::InjectSources __get_SourceType() const;

 ::StringW __declspec(property(get=__get_MemberName, put=__set_MemberName))  MemberName;

constexpr void __set_MemberName(::StringW value) ;

constexpr ::StringW __get_MemberName() const;

 ::System::Type __declspec(property(get=__get_MemberType, put=__set_MemberType))  MemberType;

constexpr void __set_MemberType(::System::Type value) ;

constexpr ::System::Type __get_MemberType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_DefaultValue, put=__set_DefaultValue))  DefaultValue;

constexpr void __set_DefaultValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_DefaultValue() const;


// Methods

// Ctor Parameters [CppParam { name: "optional", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "identifier", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "memberName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "memberType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "defaultValue", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "sourceType", ty: "::Zenject::InjectSources", modifiers: "", def_value: None }]
explicit InjectableInfo(bool optional, ::bs_hook::Il2CppWrapperType identifier, ::StringW memberName, ::System::Type memberType, ::bs_hook::Il2CppWrapperType defaultValue, ::Zenject::InjectSources sourceType) ;

/// @brief Method .ctor addr 0x2d40258 size 0x5c virtual false final false
 void _ctor(bool optional, ::bs_hook::Il2CppWrapperType identifier, ::StringW memberName, ::System::Type memberType, ::bs_hook::Il2CppWrapperType defaultValue, ::Zenject::InjectSources sourceType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::InjectableInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectableInfo, "Zenject", "InjectableInfo");
