#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__JSONNode__Enumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace HoudiniEngineUnity {
struct JSONTextMode;
}
namespace HoudiniEngineUnity {
struct JSONNodeType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class JSONBool;
}
// Type: HoudiniEngineUnity::JSONBool
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9810))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9818))
// CS Name: HoudiniEngineUnity.JSONBool
class CORDL_TYPE JSONBool : public HoudiniEngineUnity::JSONNode {
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
constexpr explicit JSONBool(void* ptr) noexcept : HoudiniEngineUnity::JSONNode(ptr) {
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

 HoudiniEngineUnity::JSONNodeType __declspec(property(get=get_Tag))  Tag;

 bool __declspec(property(get=get_IsBoolean))  IsBoolean;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 bool __declspec(property(get=get_AsBool, put=set_AsBool))  AsBool;


// Methods

/// @brief Method get_Tag addr 0x2069638 size 0x8 virtual true final false
 HoudiniEngineUnity::JSONNodeType get_Tag() ;

/// @brief Method get_IsBoolean addr 0x2069640 size 0x8 virtual true final false
 bool get_IsBoolean() ;

/// @brief Method GetEnumerator addr 0x2069648 size 0x14 virtual true final false
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator GetEnumerator() ;

/// @brief Method get_Value addr 0x206965c size 0xc virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x2069668 size 0x7c virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method get_AsBool addr 0x20696e4 size 0x8 virtual true final false
 bool get_AsBool() ;

/// @brief Method set_AsBool addr 0x20696ec size 0xc virtual true final false
 void set_AsBool(bool value) ;

// Ctor Parameters [CppParam { name: "aData", ty: "bool", modifiers: "", def_value: None }]
explicit JSONBool(bool aData) ;

/// @brief Method .ctor addr 0x2063638 size 0x28 virtual false final false
 void _ctor(bool aData) ;

// Ctor Parameters [CppParam { name: "aData", ty: "::StringW", modifiers: "", def_value: None }]
explicit JSONBool(::StringW aData) ;

/// @brief Method .ctor addr 0x20696f8 size 0x34 virtual false final false
 void _ctor(::StringW aData) ;

/// @brief Method WriteToStringBuilder addr 0x206972c size 0x78 virtual true final false
 void WriteToStringBuilder(System::Text::StringBuilder aSB, int32_t aIndent, int32_t aIndentInc, HoudiniEngineUnity::JSONTextMode aMode) ;

/// @brief Method Equals addr 0x20697a4 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x206981c size 0xc virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::JSONBool);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::JSONBool, "HoudiniEngineUnity", "JSONBool");
