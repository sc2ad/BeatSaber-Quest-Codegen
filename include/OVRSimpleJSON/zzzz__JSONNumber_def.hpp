#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Text {
class StringBuilder;
}
namespace OVRSimpleJSON {
struct OVRSimpleJSON__JSONNode__Enumerator;
}
namespace OVRSimpleJSON {
struct JSONNodeType;
}
namespace OVRSimpleJSON {
struct JSONTextMode;
}
// Forward declare root types
namespace OVRSimpleJSON {
class JSONNumber;
}
// Type: OVRSimpleJSON::JSONNumber
namespace OVRSimpleJSON {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8987))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8994))
// CS Name: OVRSimpleJSON.JSONNumber
class CORDL_TYPE JSONNumber : public OVRSimpleJSON::JSONNode {
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
constexpr explicit JSONNumber(void* ptr) noexcept : OVRSimpleJSON::JSONNode(ptr) {
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

 OVRSimpleJSON::JSONNodeType __declspec(property(get=get_Tag))  Tag;

 bool __declspec(property(get=get_IsNumber))  IsNumber;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 double_t __declspec(property(get=get_AsDouble, put=set_AsDouble))  AsDouble;

 int64_t __declspec(property(get=get_AsLong, put=set_AsLong))  AsLong;


// Methods

/// @brief Method get_Tag addr 0x26403c0 size 0x8 virtual true final false
 OVRSimpleJSON::JSONNodeType get_Tag() ;

/// @brief Method get_IsNumber addr 0x26403c8 size 0x8 virtual true final false
 bool get_IsNumber() ;

/// @brief Method GetEnumerator addr 0x26403d0 size 0x14 virtual true final false
 OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator GetEnumerator() ;

/// @brief Method get_Value addr 0x26403e4 size 0x68 virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x264044c size 0x8c virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method get_AsDouble addr 0x26404d8 size 0x8 virtual true final false
 double_t get_AsDouble() ;

/// @brief Method set_AsDouble addr 0x26404e0 size 0x8 virtual true final false
 void set_AsDouble(double_t value) ;

/// @brief Method get_AsLong addr 0x26404e8 size 0x20 virtual true final false
 int64_t get_AsLong() ;

/// @brief Method set_AsLong addr 0x2640508 size 0xc virtual true final false
 void set_AsLong(int64_t value) ;

static OVRSimpleJSON::JSONNumber New_ctor(double_t aData) ;

/// @brief Method .ctor addr 0x2640514 size 0x28 virtual false final false
 void _ctor(double_t aData) ;

static OVRSimpleJSON::JSONNumber New_ctor(::StringW aData) ;

/// @brief Method .ctor addr 0x264053c size 0x34 virtual false final false
 void _ctor(::StringW aData) ;

/// @brief Method WriteToStringBuilder addr 0x2640570 size 0x34 virtual true final false
 void WriteToStringBuilder(System::Text::StringBuilder aSB, int32_t aIndent, int32_t aIndentInc, OVRSimpleJSON::JSONTextMode aMode) ;

/// @brief Method IsNumeric addr 0x26405a4 size 0x1a0 virtual false final false
static bool IsNumeric(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Equals addr 0x2640744 size 0x110 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2640854 size 0x70 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVRSimpleJSON
NEED_NO_BOX(OVRSimpleJSON::JSONNumber);
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONNumber, "OVRSimpleJSON", "JSONNumber");
