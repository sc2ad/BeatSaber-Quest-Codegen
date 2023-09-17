#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
struct ____HoudiniEngineUnity__JSONNode__Enumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace HoudiniEngineUnity {
struct JSONNodeType;
}
namespace HoudiniEngineUnity {
struct JSONTextMode;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class JSONNull;
}
// Type: HoudiniEngineUnity::JSONNull
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9810))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9819))
// CS Name: HoudiniEngineUnity.JSONNull
class CORDL_TYPE JSONNull : public ::HoudiniEngineUnity::JSONNode {
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
constexpr explicit JSONNull(void* ptr) noexcept : ::HoudiniEngineUnity::JSONNode(ptr) {
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

static ::HoudiniEngineUnity::JSONNull __declspec(property(get=__get_m_StaticInstance, put=__set_m_StaticInstance))  m_StaticInstance;

static void __set_m_StaticInstance(::HoudiniEngineUnity::JSONNull value) ;

static ::HoudiniEngineUnity::JSONNull __get_m_StaticInstance() ;

static bool __declspec(property(get=__get_reuseSameInstance, put=__set_reuseSameInstance))  reuseSameInstance;

static void __set_reuseSameInstance(bool value) ;

static bool __get_reuseSameInstance() ;


// Properties

 ::HoudiniEngineUnity::JSONNodeType __declspec(property(get=get_Tag))  Tag;

 bool __declspec(property(get=get_IsNull))  IsNull;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 bool __declspec(property(get=get_AsBool, put=set_AsBool))  AsBool;


// Methods

/// @brief Method CreateOrGet addr 0x2063bc0 size 0x94 virtual false final false
static ::HoudiniEngineUnity::JSONNull CreateOrGet() ;

// Ctor Parameters []
explicit JSONNull() ;

/// @brief Method .ctor addr 0x2069828 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Tag addr 0x2069830 size 0x8 virtual true final false
 ::HoudiniEngineUnity::JSONNodeType get_Tag() ;

/// @brief Method get_IsNull addr 0x2069838 size 0x8 virtual true final false
 bool get_IsNull() ;

/// @brief Method GetEnumerator addr 0x2069840 size 0x14 virtual true final false
 ::HoudiniEngineUnity::____HoudiniEngineUnity__JSONNode__Enumerator GetEnumerator() ;

/// @brief Method get_Value addr 0x2069854 size 0x40 virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x2069894 size 0x4 virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method get_AsBool addr 0x2069898 size 0x8 virtual true final false
 bool get_AsBool() ;

/// @brief Method set_AsBool addr 0x20698a0 size 0x4 virtual true final false
 void set_AsBool(bool value) ;

/// @brief Method Equals addr 0x20698a4 size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2069930 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method WriteToStringBuilder addr 0x2069938 size 0x54 virtual true final false
 void WriteToStringBuilder(::System::Text::StringBuilder aSB, int32_t aIndent, int32_t aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::JSONNull);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONNull, "HoudiniEngineUnity", "JSONNull");
