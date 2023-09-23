#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace TMPro {
class TMP_Style;
}
// Type: TMPro::TMP_Style
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12366))
// CS Name: TMPro.TMP_Style
class CORDL_TYPE TMP_Style : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TMP_Style() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Style", modifiers: " const&", def_value: None }]
constexpr TMP_Style(TMP_Style const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Style", modifiers: "&&", def_value: None }]
constexpr TMP_Style(TMP_Style&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_Style(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_Style& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_Style& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_Style& operator=(TMP_Style&& o) noexcept = default;
  constexpr TMP_Style& operator=(TMP_Style const& o) noexcept = default;
                


// Fields

static TMPro::TMP_Style __declspec(property(get=__get_k_NormalStyle, put=__set_k_NormalStyle))  k_NormalStyle;

static void __set_k_NormalStyle(TMPro::TMP_Style value) ;

static TMPro::TMP_Style __get_k_NormalStyle() ;

 ::StringW __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::StringW value) ;

constexpr ::StringW __get_m_Name() const;

 int32_t __declspec(property(get=__get_m_HashCode, put=__set_m_HashCode))  m_HashCode;

constexpr void __set_m_HashCode(int32_t value) ;

constexpr int32_t __get_m_HashCode() const;

 ::StringW __declspec(property(get=__get_m_OpeningDefinition, put=__set_m_OpeningDefinition))  m_OpeningDefinition;

constexpr void __set_m_OpeningDefinition(::StringW value) ;

constexpr ::StringW __get_m_OpeningDefinition() const;

 ::StringW __declspec(property(get=__get_m_ClosingDefinition, put=__set_m_ClosingDefinition))  m_ClosingDefinition;

constexpr void __set_m_ClosingDefinition(::StringW value) ;

constexpr ::StringW __get_m_ClosingDefinition() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_OpeningTagArray, put=__set_m_OpeningTagArray))  m_OpeningTagArray;

constexpr void __set_m_OpeningTagArray(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_OpeningTagArray() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_ClosingTagArray, put=__set_m_ClosingTagArray))  m_ClosingTagArray;

constexpr void __set_m_ClosingTagArray(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_ClosingTagArray() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_m_OpeningTagUnicodeArray, put=__set_m_OpeningTagUnicodeArray))  m_OpeningTagUnicodeArray;

constexpr void __set_m_OpeningTagUnicodeArray(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_m_OpeningTagUnicodeArray() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_m_ClosingTagUnicodeArray, put=__set_m_ClosingTagUnicodeArray))  m_ClosingTagUnicodeArray;

constexpr void __set_m_ClosingTagUnicodeArray(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_m_ClosingTagUnicodeArray() const;


// Properties

static TMPro::TMP_Style __declspec(property(get=get_NormalStyle))  NormalStyle;

 ::StringW __declspec(property(get=get_name, put=set_name))  name;

 int32_t __declspec(property(get=get_hashCode, put=set_hashCode))  hashCode;

 ::StringW __declspec(property(get=get_styleOpeningDefinition))  styleOpeningDefinition;

 ::StringW __declspec(property(get=get_styleClosingDefinition))  styleClosingDefinition;

 ::ArrayW<int32_t> __declspec(property(get=get_styleOpeningTagArray))  styleOpeningTagArray;

 ::ArrayW<int32_t> __declspec(property(get=get_styleClosingTagArray))  styleClosingTagArray;


// Methods

/// @brief Method get_NormalStyle addr 0x2aad1b4 size 0xbc virtual false final false
static TMPro::TMP_Style get_NormalStyle() ;

/// @brief Method get_name addr 0x2aad300 size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method set_name addr 0x2aad308 size 0x38 virtual false final false
 void set_name(::StringW value) ;

/// @brief Method get_hashCode addr 0x2aad340 size 0x8 virtual false final false
 int32_t get_hashCode() ;

/// @brief Method set_hashCode addr 0x2aad348 size 0x14 virtual false final false
 void set_hashCode(int32_t value) ;

/// @brief Method get_styleOpeningDefinition addr 0x2aad35c size 0x8 virtual false final false
 ::StringW get_styleOpeningDefinition() ;

/// @brief Method get_styleClosingDefinition addr 0x2aad364 size 0x8 virtual false final false
 ::StringW get_styleClosingDefinition() ;

/// @brief Method get_styleOpeningTagArray addr 0x2aad36c size 0x8 virtual false final false
 ::ArrayW<int32_t> get_styleOpeningTagArray() ;

/// @brief Method get_styleClosingTagArray addr 0x2aad374 size 0x8 virtual false final false
 ::ArrayW<int32_t> get_styleClosingTagArray() ;

// Ctor Parameters [CppParam { name: "styleName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "styleOpeningDefinition", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "styleClosingDefinition", ty: "::StringW", modifiers: "", def_value: None }]
explicit TMP_Style(::StringW styleName, ::StringW styleOpeningDefinition, ::StringW styleClosingDefinition) ;

/// @brief Method .ctor addr 0x2aad270 size 0x90 virtual false final false
 void _ctor(::StringW styleName, ::StringW styleOpeningDefinition, ::StringW styleClosingDefinition) ;

/// @brief Method RefreshStyle addr 0x2aad438 size 0x1f8 virtual false final false
 void RefreshStyle() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_Style);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Style, "TMPro", "TMP_Style");
