#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::TextCore::Text {
class TextStyle;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextStyleSheet;
}
// Type: UnityEngine.TextCore.Text::TextStyleSheet
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13545))
// CS Name: UnityEngine.TextCore.Text.TextStyleSheet
class CORDL_TYPE TextStyleSheet : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TextStyleSheet() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextStyleSheet", modifiers: " const&", def_value: None }]
constexpr TextStyleSheet(TextStyleSheet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextStyleSheet", modifiers: "&&", def_value: None }]
constexpr TextStyleSheet(TextStyleSheet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextStyleSheet(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr TextStyleSheet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextStyleSheet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextStyleSheet& operator=(TextStyleSheet&& o) noexcept = default;
  constexpr TextStyleSheet& operator=(TextStyleSheet const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle> __declspec(property(get=__get_m_StyleList, put=__set_m_StyleList))  m_StyleList;

constexpr void __set_m_StyleList(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle> __get_m_StyleList() const;

 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::TextStyle> __declspec(property(get=__get_m_StyleLookupDictionary, put=__set_m_StyleLookupDictionary))  m_StyleLookupDictionary;

constexpr void __set_m_StyleLookupDictionary(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::TextStyle> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::TextStyle> __get_m_StyleLookupDictionary() const;


// Properties

 ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle> __declspec(property(get=get_styles))  styles;


// Methods

/// @brief Method get_styles addr 0x2bd4008 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle> get_styles() ;

/// @brief Method GetStyle addr 0x2bd4010 size 0x88 virtual false final false
 ::UnityEngine::TextCore::Text::TextStyle GetStyle(int32_t hashCode) ;

/// @brief Method GetStyle addr 0x2bd425c size 0x98 virtual false final false
 ::UnityEngine::TextCore::Text::TextStyle GetStyle(::StringW name) ;

/// @brief Method RefreshStyles addr 0x2bd42f4 size 0x4 virtual false final false
 void RefreshStyles() ;

/// @brief Method LoadStyleDictionaryInternal addr 0x2bd4098 size 0x1c4 virtual false final false
 void LoadStyleDictionaryInternal() ;

// Ctor Parameters []
explicit TextStyleSheet() ;

/// @brief Method .ctor addr 0x2bd42f8 size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextStyleSheet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextStyleSheet, "UnityEngine.TextCore.Text", "TextStyleSheet");
