#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Text {
class StringBuilder;
}
namespace OVRSimpleJSON {
struct JSONNodeType;
}
namespace OVRSimpleJSON {
struct JSONTextMode;
}
namespace OVRSimpleJSON {
struct ____OVRSimpleJSON__JSONNode__Enumerator;
}
// Forward declare root types
namespace OVRSimpleJSON {
class JSONNull;
}
// Type: OVRSimpleJSON::JSONNull
namespace OVRSimpleJSON {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8987))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8996))
// CS Name: OVRSimpleJSON.JSONNull
class CORDL_TYPE JSONNull : public ::OVRSimpleJSON::JSONNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JSONNull() = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONNull", modifiers: " const&", def_value: None }]
constexpr JSONNull(JSONNull const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONNull", modifiers: "&&", def_value: None }]
constexpr JSONNull(JSONNull&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JSONNull(void* ptr) noexcept : ::OVRSimpleJSON::JSONNode(ptr) {
}


  constexpr JSONNull& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JSONNull& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JSONNull& operator=(JSONNull&& o) noexcept = default;
  constexpr JSONNull& operator=(JSONNull const& o) noexcept = default;
                


// Fields

static ::OVRSimpleJSON::JSONNull __declspec(property(get=__get_m_StaticInstance, put=__set_m_StaticInstance))  m_StaticInstance;

static void __set_m_StaticInstance(::OVRSimpleJSON::JSONNull value) ;

static ::OVRSimpleJSON::JSONNull __get_m_StaticInstance() ;

static bool __declspec(property(get=__get_reuseSameInstance, put=__set_reuseSameInstance))  reuseSameInstance;

static void __set_reuseSameInstance(bool value) ;

static bool __get_reuseSameInstance() ;


// Properties

 ::OVRSimpleJSON::JSONNodeType __declspec(property(get=get_Tag))  Tag;

 bool __declspec(property(get=get_IsNull))  IsNull;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 bool __declspec(property(get=get_AsBool, put=set_AsBool))  AsBool;


// Methods

/// @brief Method CreateOrGet addr 0x263e744 size 0x94 virtual false final false
static ::OVRSimpleJSON::JSONNull CreateOrGet() ;

// Ctor Parameters []
explicit JSONNull() ;

/// @brief Method .ctor addr 0x2640adc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Tag addr 0x2640ae4 size 0x8 virtual true final false
 ::OVRSimpleJSON::JSONNodeType get_Tag() ;

/// @brief Method get_IsNull addr 0x2640aec size 0x8 virtual true final false
 bool get_IsNull() ;

/// @brief Method GetEnumerator addr 0x2640af4 size 0x14 virtual true final false
 ::OVRSimpleJSON::____OVRSimpleJSON__JSONNode__Enumerator GetEnumerator() ;

/// @brief Method get_Value addr 0x2640b08 size 0x40 virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x2640b48 size 0x4 virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method get_AsBool addr 0x2640b4c size 0x8 virtual true final false
 bool get_AsBool() ;

/// @brief Method set_AsBool addr 0x2640b54 size 0x4 virtual true final false
 void set_AsBool(bool value) ;

/// @brief Method Equals addr 0x2640b58 size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2640be4 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method WriteToStringBuilder addr 0x2640bec size 0x54 virtual true final false
 void WriteToStringBuilder(::System::Text::StringBuilder aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVRSimpleJSON
} // end anonymous namespace
NEED_NO_BOX(::OVRSimpleJSON::JSONNull);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONNull, "OVRSimpleJSON", "JSONNull");
