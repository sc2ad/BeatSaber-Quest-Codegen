#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace OVRSimpleJSON {
struct JSONNodeType;
}
namespace OVRSimpleJSON {
struct OVRSimpleJSON__JSONNode__Enumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace OVRSimpleJSON {
struct JSONTextMode;
}
// Forward declare root types
namespace OVRSimpleJSON {
class JSONString;
}
// Type: OVRSimpleJSON::JSONString
namespace OVRSimpleJSON {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8987))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8993))
// CS Name: OVRSimpleJSON.JSONString
class CORDL_TYPE JSONString : public OVRSimpleJSON::JSONNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~JSONString() = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONString", modifiers: " const&", def_value: None }]
constexpr JSONString(JSONString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONString", modifiers: "&&", def_value: None }]
constexpr JSONString(JSONString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JSONString(void* ptr) noexcept : OVRSimpleJSON::JSONNode(ptr) {
}


  constexpr JSONString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JSONString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JSONString& operator=(JSONString&& o) noexcept = default;
  constexpr JSONString& operator=(JSONString const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Data, put=__set_m_Data))  m_Data;

constexpr void __set_m_Data(::StringW value) ;

constexpr ::StringW __get_m_Data() const;


// Properties

 OVRSimpleJSON::JSONNodeType __declspec(property(get=get_Tag))  Tag;

 bool __declspec(property(get=get_IsString))  IsString;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

/// @brief Method get_Tag addr 0x26401e8 size 0x8 virtual true final false
 OVRSimpleJSON::JSONNodeType get_Tag() ;

/// @brief Method get_IsString addr 0x26401f0 size 0x8 virtual true final false
 bool get_IsString() ;

/// @brief Method GetEnumerator addr 0x26401f8 size 0x14 virtual true final false
 OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator GetEnumerator() ;

/// @brief Method get_Value addr 0x264020c size 0x8 virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x2640214 size 0x8 virtual true final false
 void set_Value(::StringW value) ;

// Ctor Parameters [CppParam { name: "aData", ty: "::StringW", modifiers: "", def_value: None }]
explicit JSONString(::StringW aData) ;

/// @brief Method .ctor addr 0x264021c size 0x28 virtual false final false
 void _ctor(::StringW aData) ;

/// @brief Method WriteToStringBuilder addr 0x2640244 size 0x60 virtual true final false
 void WriteToStringBuilder(System::Text::StringBuilder aSB, int32_t aIndent, int32_t aIndentInc, OVRSimpleJSON::JSONTextMode aMode) ;

/// @brief Method Equals addr 0x26402a4 size 0xfc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26403a0 size 0x20 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVRSimpleJSON
NEED_NO_BOX(OVRSimpleJSON::JSONString);
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONString, "OVRSimpleJSON", "JSONString");
