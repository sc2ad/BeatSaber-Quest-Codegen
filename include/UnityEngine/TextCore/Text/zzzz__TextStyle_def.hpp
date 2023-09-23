#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextStyle;
}
// Type: UnityEngine.TextCore.Text::TextStyle
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13517))
// CS Name: UnityEngine.TextCore.Text.TextStyle
class CORDL_TYPE TextStyle : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TextStyle() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextStyle", modifiers: " const&", def_value: None }]
constexpr TextStyle(TextStyle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextStyle", modifiers: "&&", def_value: None }]
constexpr TextStyle(TextStyle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextStyle(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextStyle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextStyle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextStyle& operator=(TextStyle&& o) noexcept = default;
  constexpr TextStyle& operator=(TextStyle const& o) noexcept = default;
                


// Fields

static UnityEngine::TextCore::Text::TextStyle __declspec(property(get=__get_k_NormalStyle, put=__set_k_NormalStyle))  k_NormalStyle;

static void __set_k_NormalStyle(UnityEngine::TextCore::Text::TextStyle value) ;

static UnityEngine::TextCore::Text::TextStyle __get_k_NormalStyle() ;

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

 int32_t __declspec(property(get=get_hashCode))  hashCode;

 ::ArrayW<int32_t> __declspec(property(get=get_styleOpeningTagArray))  styleOpeningTagArray;

 ::ArrayW<int32_t> __declspec(property(get=get_styleClosingTagArray))  styleClosingTagArray;


// Methods

/// @brief Method get_hashCode addr 0x2bcc544 size 0x8 virtual false final false
 int32_t get_hashCode() ;

/// @brief Method get_styleOpeningTagArray addr 0x2bcc54c size 0x8 virtual false final false
 ::ArrayW<int32_t> get_styleOpeningTagArray() ;

/// @brief Method get_styleClosingTagArray addr 0x2bcc554 size 0x8 virtual false final false
 ::ArrayW<int32_t> get_styleClosingTagArray() ;

/// @brief Method RefreshStyle addr 0x2bcc55c size 0x1e4 virtual false final false
 void RefreshStyle() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(UnityEngine::TextCore::Text::TextStyle);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::TextStyle, "UnityEngine.TextCore.Text", "TextStyle");
