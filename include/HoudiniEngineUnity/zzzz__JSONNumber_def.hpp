#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
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
class JSONNumber;
}
// Type: HoudiniEngineUnity::JSONNumber
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9810))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9817))
// CS Name: HoudiniEngineUnity.JSONNumber
class CORDL_TYPE JSONNumber : public HoudiniEngineUnity::JSONNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~JSONNumber() = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONNumber", modifiers: " const&", def_value: None }]
constexpr JSONNumber(JSONNumber const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONNumber", modifiers: "&&", def_value: None }]
constexpr JSONNumber(JSONNumber&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JSONNumber(void* ptr) noexcept : HoudiniEngineUnity::JSONNode(ptr) {
}


  constexpr JSONNumber& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JSONNumber& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JSONNumber& operator=(JSONNumber&& o) noexcept = default;
  constexpr JSONNumber& operator=(JSONNumber const& o) noexcept = default;
                


// Fields

 double_t __declspec(property(get=__get_m_Data, put=__set_m_Data))  m_Data;

constexpr void __set_m_Data(double_t value) ;

constexpr double_t __get_m_Data() const;


// Properties

 HoudiniEngineUnity::JSONNodeType __declspec(property(get=get_Tag))  Tag;

 bool __declspec(property(get=get_IsNumber))  IsNumber;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 double_t __declspec(property(get=get_AsDouble, put=set_AsDouble))  AsDouble;

 int64_t __declspec(property(get=get_AsLong, put=set_AsLong))  AsLong;


// Methods

/// @brief Method get_Tag addr 0x206916c size 0x8 virtual true final false
 HoudiniEngineUnity::JSONNodeType get_Tag() ;

/// @brief Method get_IsNumber addr 0x2069174 size 0x8 virtual true final false
 bool get_IsNumber() ;

/// @brief Method GetEnumerator addr 0x206917c size 0x14 virtual true final false
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator GetEnumerator() ;

/// @brief Method get_Value addr 0x2069190 size 0x68 virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x20691f8 size 0x8c virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method get_AsDouble addr 0x2069284 size 0x8 virtual true final false
 double_t get_AsDouble() ;

/// @brief Method set_AsDouble addr 0x206928c size 0x8 virtual true final false
 void set_AsDouble(double_t value) ;

/// @brief Method get_AsLong addr 0x2069294 size 0x20 virtual true final false
 int64_t get_AsLong() ;

/// @brief Method set_AsLong addr 0x20692b4 size 0xc virtual true final false
 void set_AsLong(int64_t value) ;

static HoudiniEngineUnity::JSONNumber New_ctor(double_t aData) ;

/// @brief Method .ctor addr 0x20632e8 size 0x28 virtual false final false
 void _ctor(double_t aData) ;

static HoudiniEngineUnity::JSONNumber New_ctor(::StringW aData) ;

/// @brief Method .ctor addr 0x20692c0 size 0x34 virtual false final false
 void _ctor(::StringW aData) ;

/// @brief Method WriteToStringBuilder addr 0x20692f4 size 0x34 virtual true final false
 void WriteToStringBuilder(System::Text::StringBuilder aSB, int32_t aIndent, int32_t aIndentInc, HoudiniEngineUnity::JSONTextMode aMode) ;

/// @brief Method IsNumeric addr 0x2069328 size 0x1a0 virtual false final false
static bool IsNumeric(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Equals addr 0x20694c8 size 0x100 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x20695c8 size 0x70 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::JSONNumber);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::JSONNumber, "HoudiniEngineUnity", "JSONNumber");
