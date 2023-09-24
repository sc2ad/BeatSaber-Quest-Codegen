#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace TMPro {
class TMP_Style;
}
// Forward declare root types
namespace TMPro {
class TMP_StyleSheet;
}
// Type: TMPro::TMP_StyleSheet
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12367))
// CS Name: TMPro.TMP_StyleSheet
class CORDL_TYPE TMP_StyleSheet : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TMP_StyleSheet() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_StyleSheet", modifiers: " const&", def_value: None }]
constexpr TMP_StyleSheet(TMP_StyleSheet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_StyleSheet", modifiers: "&&", def_value: None }]
constexpr TMP_StyleSheet(TMP_StyleSheet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_StyleSheet(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr TMP_StyleSheet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_StyleSheet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_StyleSheet& operator=(TMP_StyleSheet&& o) noexcept = default;
  constexpr TMP_StyleSheet& operator=(TMP_StyleSheet const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<TMPro::TMP_Style> __declspec(property(get=__get_m_StyleList, put=__set_m_StyleList))  m_StyleList;

constexpr void __set_m_StyleList(System::Collections::Generic::List_1<TMPro::TMP_Style> value) ;

constexpr System::Collections::Generic::List_1<TMPro::TMP_Style> __get_m_StyleList() const;

 System::Collections::Generic::Dictionary_2<int32_t,TMPro::TMP_Style> __declspec(property(get=__get_m_StyleLookupDictionary, put=__set_m_StyleLookupDictionary))  m_StyleLookupDictionary;

constexpr void __set_m_StyleLookupDictionary(System::Collections::Generic::Dictionary_2<int32_t,TMPro::TMP_Style> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,TMPro::TMP_Style> __get_m_StyleLookupDictionary() const;


// Properties

 System::Collections::Generic::List_1<TMPro::TMP_Style> __declspec(property(get=get_styles))  styles;


// Methods

/// @brief Method get_styles addr 0x2aad630 size 0x8 virtual false final false
 System::Collections::Generic::List_1<TMPro::TMP_Style> get_styles() ;

/// @brief Method Reset addr 0x2aad638 size 0x4 virtual false final false
 void Reset() ;

/// @brief Method GetStyle addr 0x2aad954 size 0x88 virtual false final false
 TMPro::TMP_Style GetStyle(int32_t hashCode) ;

/// @brief Method GetStyle addr 0x2aad9dc size 0xb8 virtual false final false
 TMPro::TMP_Style GetStyle(::StringW name) ;

/// @brief Method RefreshStyles addr 0x2aada94 size 0x4 virtual false final false
 void RefreshStyles() ;

/// @brief Method LoadStyleDictionaryInternal addr 0x2aad63c size 0x318 virtual false final false
 void LoadStyleDictionaryInternal() ;

static TMPro::TMP_StyleSheet New_ctor() ;

/// @brief Method .ctor addr 0x2aada98 size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_StyleSheet);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_StyleSheet, "TMPro", "TMP_StyleSheet");
