#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Newtonsoft::Json {
struct MemberSerialization;
}
namespace Newtonsoft::Json {
struct Required;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonObjectAttribute;
}
// Type: Newtonsoft.Json::JsonObjectAttribute
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11757))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11760))
// CS Name: Newtonsoft.Json.JsonObjectAttribute
class CORDL_TYPE JsonObjectAttribute : public Newtonsoft::Json::JsonContainerAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~JsonObjectAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonObjectAttribute", modifiers: " const&", def_value: None }]
constexpr JsonObjectAttribute(JsonObjectAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonObjectAttribute", modifiers: "&&", def_value: None }]
constexpr JsonObjectAttribute(JsonObjectAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonObjectAttribute(void* ptr) noexcept : Newtonsoft::Json::JsonContainerAttribute(ptr) {
}


  constexpr JsonObjectAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonObjectAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonObjectAttribute& operator=(JsonObjectAttribute&& o) noexcept = default;
  constexpr JsonObjectAttribute& operator=(JsonObjectAttribute const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::MemberSerialization __declspec(property(get=__get__memberSerialization, put=__set__memberSerialization))  _memberSerialization;

constexpr void __set__memberSerialization(Newtonsoft::Json::MemberSerialization value) ;

constexpr Newtonsoft::Json::MemberSerialization __get__memberSerialization() const;

 System::Nullable_1<Newtonsoft::Json::Required> __declspec(property(get=__get__itemRequired, put=__set__itemRequired))  _itemRequired;

constexpr void __set__itemRequired(System::Nullable_1<Newtonsoft::Json::Required> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::Required> __get__itemRequired() const;


// Properties

 Newtonsoft::Json::MemberSerialization __declspec(property(get=get_MemberSerialization, put=set_MemberSerialization))  MemberSerialization;

 Newtonsoft::Json::Required __declspec(property(get=get_ItemRequired, put=set_ItemRequired))  ItemRequired;


// Methods

/// @brief Method get_MemberSerialization addr 0x24c83e0 size 0x8 virtual false final false
 Newtonsoft::Json::MemberSerialization get_MemberSerialization() ;

/// @brief Method set_MemberSerialization addr 0x24c83e8 size 0x8 virtual false final false
 void set_MemberSerialization(Newtonsoft::Json::MemberSerialization value) ;

/// @brief Method get_ItemRequired addr 0x24c83f0 size 0x50 virtual false final false
 Newtonsoft::Json::Required get_ItemRequired() ;

/// @brief Method set_ItemRequired addr 0x24c8440 size 0x68 virtual false final false
 void set_ItemRequired(Newtonsoft::Json::Required value) ;

// Ctor Parameters []
explicit JsonObjectAttribute() ;

/// @brief Method .ctor addr 0x24c84a8 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "memberSerialization", ty: "Newtonsoft::Json::MemberSerialization", modifiers: "", def_value: None }]
explicit JsonObjectAttribute(Newtonsoft::Json::MemberSerialization memberSerialization) ;

/// @brief Method .ctor addr 0x24c84b0 size 0x28 virtual false final false
 void _ctor(Newtonsoft::Json::MemberSerialization memberSerialization) ;

// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }]
explicit JsonObjectAttribute(::StringW id) ;

/// @brief Method .ctor addr 0x24c84d8 size 0x28 virtual false final false
 void _ctor(::StringW id) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonObjectAttribute);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonObjectAttribute, "Newtonsoft.Json", "JsonObjectAttribute");
