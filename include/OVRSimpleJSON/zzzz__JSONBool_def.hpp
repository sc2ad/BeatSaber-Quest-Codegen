#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace OVRSimpleJSON {
struct JSONNodeType;
}
namespace OVRSimpleJSON {
struct ____OVRSimpleJSON__JSONNode__Enumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace OVRSimpleJSON {
struct JSONTextMode;
}
// Forward declare root types
namespace OVRSimpleJSON {
class JSONBool;
}
// Type: OVRSimpleJSON::JSONBool
namespace OVRSimpleJSON {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8987))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8995))
// CS Name: OVRSimpleJSON.JSONBool
class CORDL_TYPE JSONBool : public ::OVRSimpleJSON::JSONNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~JSONBool() = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONBool", modifiers: " const&", def_value: None }]
constexpr JSONBool(JSONBool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONBool", modifiers: "&&", def_value: None }]
constexpr JSONBool(JSONBool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JSONBool(void* ptr) noexcept : ::OVRSimpleJSON::JSONNode(ptr) {
}


  constexpr JSONBool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JSONBool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JSONBool& operator=(JSONBool&& o) noexcept = default;
  constexpr JSONBool& operator=(JSONBool const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_Data, put=__set_m_Data))  m_Data;

constexpr void __set_m_Data(bool value) ;

constexpr bool __get_m_Data() const;


// Properties

 ::OVRSimpleJSON::JSONNodeType __declspec(property(get=get_Tag))  Tag;

 bool __declspec(property(get=get_IsBoolean))  IsBoolean;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 bool __declspec(property(get=get_AsBool, put=set_AsBool))  AsBool;


// Methods

/// @brief Method get_Tag addr 0x26408c4 size 0x8 virtual true final false
 ::OVRSimpleJSON::JSONNodeType get_Tag() ;

/// @brief Method get_IsBoolean addr 0x26408cc size 0x8 virtual true final false
 bool get_IsBoolean() ;

/// @brief Method GetEnumerator addr 0x26408d4 size 0x14 virtual true final false
 ::OVRSimpleJSON::____OVRSimpleJSON__JSONNode__Enumerator GetEnumerator() ;

/// @brief Method get_Value addr 0x26408e8 size 0xc virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x26408f4 size 0x7c virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method get_AsBool addr 0x2640970 size 0x8 virtual true final false
 bool get_AsBool() ;

/// @brief Method set_AsBool addr 0x2640978 size 0xc virtual true final false
 void set_AsBool(bool value) ;

// Ctor Parameters [CppParam { name: "aData", ty: "bool", modifiers: "", def_value: None }]
explicit JSONBool(bool aData) ;

/// @brief Method .ctor addr 0x2640984 size 0x28 virtual false final false
 void _ctor(bool aData) ;

// Ctor Parameters [CppParam { name: "aData", ty: "::StringW", modifiers: "", def_value: None }]
explicit JSONBool(::StringW aData) ;

/// @brief Method .ctor addr 0x26409ac size 0x34 virtual false final false
 void _ctor(::StringW aData) ;

/// @brief Method WriteToStringBuilder addr 0x26409e0 size 0x78 virtual true final false
 void WriteToStringBuilder(::System::Text::StringBuilder aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode) ;

/// @brief Method Equals addr 0x2640a58 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2640ad0 size 0xc virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVRSimpleJSON
} // end anonymous namespace
NEED_NO_BOX(::OVRSimpleJSON::JSONBool);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONBool, "OVRSimpleJSON", "JSONBool");
