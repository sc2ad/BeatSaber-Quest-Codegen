#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization::Formatters::Binary {
struct ValueFixupEnum;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ReadObjectInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ParseRecord;
}
namespace System {
class Array;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ValueFixup;
}
// Type: System.Runtime.Serialization.Formatters.Binary::ValueFixup
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3292))
// CS Name: System.Runtime.Serialization.Formatters.Binary.ValueFixup
class CORDL_TYPE ValueFixup : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ValueFixup() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueFixup", modifiers: " const&", def_value: None }]
constexpr ValueFixup(ValueFixup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueFixup", modifiers: "&&", def_value: None }]
constexpr ValueFixup(ValueFixup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValueFixup(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValueFixup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValueFixup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValueFixup& operator=(ValueFixup&& o) noexcept = default;
  constexpr ValueFixup& operator=(ValueFixup const& o) noexcept = default;
                


// Fields

 System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum __declspec(property(get=__get_valueFixupEnum, put=__set_valueFixupEnum))  valueFixupEnum;

constexpr void __set_valueFixupEnum(System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum __get_valueFixupEnum() const;

 System::Array __declspec(property(get=__get_arrayObj, put=__set_arrayObj))  arrayObj;

constexpr void __set_arrayObj(System::Array value) ;

constexpr System::Array __get_arrayObj() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_indexMap, put=__set_indexMap))  indexMap;

constexpr void __set_indexMap(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_indexMap() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_header, put=__set_header))  header;

constexpr void __set_header(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_header() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_memberObject, put=__set_memberObject))  memberObject;

constexpr void __set_memberObject(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_memberObject() const;

static System::Reflection::MemberInfo __declspec(property(get=__get_valueInfo, put=__set_valueInfo))  valueInfo;

static void __set_valueInfo(System::Reflection::MemberInfo value) ;

static System::Reflection::MemberInfo __get_valueInfo() ;

 System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo __declspec(property(get=__get_objectInfo, put=__set_objectInfo))  objectInfo;

constexpr void __set_objectInfo(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo __get_objectInfo() const;

 ::StringW __declspec(property(get=__get_memberName, put=__set_memberName))  memberName;

constexpr void __set_memberName(::StringW value) ;

constexpr ::StringW __get_memberName() const;


// Methods

// Ctor Parameters [CppParam { name: "arrayObj", ty: "System::Array", modifiers: "", def_value: None }, CppParam { name: "indexMap", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }]
explicit ValueFixup(System::Array arrayObj, ::ArrayW<int32_t> indexMap) ;

/// @brief Method .ctor addr 0x23622d4 size 0x34 virtual false final false
 void _ctor(System::Array arrayObj, ::ArrayW<int32_t> indexMap) ;

// Ctor Parameters [CppParam { name: "memberObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "memberName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "objectInfo", ty: "System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo", modifiers: "", def_value: None }]
explicit ValueFixup(::bs_hook::Il2CppWrapperType memberObject, ::StringW memberName, System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo objectInfo) ;

/// @brief Method .ctor addr 0x236272c size 0x44 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType memberObject, ::StringW memberName, System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo objectInfo) ;

/// @brief Method Fixup addr 0x236172c size 0x314 virtual false final false
 void Fixup(System::Runtime::Serialization::Formatters::Binary::ParseRecord record, System::Runtime::Serialization::Formatters::Binary::ParseRecord parent) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::ValueFixup);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ValueFixup, "System.Runtime.Serialization.Formatters.Binary", "ValueFixup");
