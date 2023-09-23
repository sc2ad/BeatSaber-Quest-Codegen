#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace Mono::Security {
class ASN1;
}
// Type: Mono.Security::ASN1
namespace Mono::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13948))
// CS Name: Mono.Security.ASN1
class CORDL_TYPE ASN1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ASN1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ASN1", modifiers: " const&", def_value: None }]
constexpr ASN1(ASN1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ASN1", modifiers: "&&", def_value: None }]
constexpr ASN1(ASN1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ASN1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ASN1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ASN1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ASN1& operator=(ASN1&& o) noexcept = default;
  constexpr ASN1& operator=(ASN1 const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_m_nTag, put=__set_m_nTag))  m_nTag;

constexpr void __set_m_nTag(uint8_t value) ;

constexpr uint8_t __get_m_nTag() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_aValue, put=__set_m_aValue))  m_aValue;

constexpr void __set_m_aValue(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_aValue() const;

 System::Collections::ArrayList __declspec(property(get=__get_elist, put=__set_elist))  elist;

constexpr void __set_elist(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get_elist() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 uint8_t __declspec(property(get=get_Tag))  Tag;

 int32_t __declspec(property(get=get_Length))  Length;

 ::ArrayW<uint8_t> __declspec(property(get=get_Value, put=set_Value))  Value;

 Mono::Security::ASN1 __declspec(property(get=get_Item))  Item;


// Methods

// Ctor Parameters [CppParam { name: "tag", ty: "uint8_t", modifiers: "", def_value: None }]
explicit ASN1(uint8_t tag) ;

/// @brief Method .ctor addr 0x227f510 size 0x2c virtual false final false
 void _ctor(uint8_t tag) ;

// Ctor Parameters [CppParam { name: "tag", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit ASN1(uint8_t tag, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x227f53c size 0x30 virtual false final false
 void _ctor(uint8_t tag, ::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit ASN1(::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x227f56c size 0x178 virtual false final false
 void _ctor(::ArrayW<uint8_t> data) ;

/// @brief Method get_Count addr 0x227f808 size 0x1c virtual false final false
 int32_t get_Count() ;

/// @brief Method get_Tag addr 0x227f824 size 0x8 virtual false final false
 uint8_t get_Tag() ;

/// @brief Method get_Length addr 0x227f82c size 0x18 virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Value addr 0x227f844 size 0x90 virtual false final false
 ::ArrayW<uint8_t> get_Value() ;

/// @brief Method set_Value addr 0x227f8d4 size 0xa8 virtual false final false
 void set_Value(::ArrayW<uint8_t> value) ;

/// @brief Method CompareArray addr 0x227f97c size 0x74 virtual false final false
 bool CompareArray(::ArrayW<uint8_t> array1, ::ArrayW<uint8_t> array2) ;

/// @brief Method CompareValue addr 0x227f9f0 size 0x10 virtual false final false
 bool CompareValue(::ArrayW<uint8_t> value) ;

/// @brief Method Add addr 0x227fa00 size 0x8c virtual false final false
 Mono::Security::ASN1 Add(Mono::Security::ASN1 asn1) ;

/// @brief Method GetBytes addr 0x227fa8c size 0x698 virtual true final false
 ::ArrayW<uint8_t> GetBytes() ;

/// @brief Method Decode addr 0x227f6e4 size 0x124 virtual false final false
 void Decode(::ArrayW<uint8_t> asn1, ByRef<int32_t> anPos, int32_t anLength) ;

/// @brief Method DecodeTLV addr 0x2280124 size 0x124 virtual false final false
 void DecodeTLV(::ArrayW<uint8_t> asn1, ByRef<int32_t> pos, ByRef<uint8_t> tag, ByRef<int32_t> length, ByRef<::ArrayW<uint8_t>> content) ;

/// @brief Method get_Item addr 0x2280248 size 0x130 virtual false final false
 Mono::Security::ASN1 get_Item(int32_t index) ;

/// @brief Method Element addr 0x2280378 size 0x154 virtual false final false
 Mono::Security::ASN1 Element(int32_t index, uint8_t anTag) ;

/// @brief Method ToString addr 0x22804cc size 0x290 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security
NEED_NO_BOX(Mono::Security::ASN1);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::ASN1, "Mono.Security", "ASN1");
