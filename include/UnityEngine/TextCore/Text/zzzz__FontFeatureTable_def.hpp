#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::TextCore::Text {
class UnityEngine__TextCore__Text__FontFeatureTable____c;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class FontFeatureTable;
}
namespace UnityEngine::TextCore::Text {
class UnityEngine__TextCore__Text__FontFeatureTable____c;
}
// Type: ::<>c
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13515))
// CS Name: UnityEngine.TextCore.Text.FontFeatureTable::<>c
class CORDL_TYPE UnityEngine__TextCore__Text__FontFeatureTable____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__TextCore__Text__FontFeatureTable____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__TextCore__Text__FontFeatureTable____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__TextCore__Text__FontFeatureTable____c(UnityEngine__TextCore__Text__FontFeatureTable____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__TextCore__Text__FontFeatureTable____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__TextCore__Text__FontFeatureTable____c(UnityEngine__TextCore__Text__FontFeatureTable____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__TextCore__Text__FontFeatureTable____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__TextCore__Text__FontFeatureTable____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__TextCore__Text__FontFeatureTable____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__TextCore__Text__FontFeatureTable____c& operator=(UnityEngine__TextCore__Text__FontFeatureTable____c&& o) noexcept = default;
  constexpr UnityEngine__TextCore__Text__FontFeatureTable____c& operator=(UnityEngine__TextCore__Text__FontFeatureTable____c const& o) noexcept = default;
                


// Fields

static UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__FontFeatureTable____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__FontFeatureTable____c value) ;

static UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__FontFeatureTable____c __get___9() ;

static System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> __declspec(property(get=__get___9__6_0, put=__set___9__6_0))  __9__6_0;

static void __set___9__6_0(System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> value) ;

static System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> __get___9__6_0() ;

static System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> __declspec(property(get=__get___9__6_1, put=__set___9__6_1))  __9__6_1;

static void __set___9__6_1(System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> value) ;

static System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> __get___9__6_1() ;


// Methods

static UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__FontFeatureTable____c New_ctor() ;

/// @brief Method .ctor addr 0x2bcc4ac size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SortGlyphPairAdjustmentRecords>b__6_0 addr 0x2bcc4b4 size 0x48 virtual false final false
 uint32_t _SortGlyphPairAdjustmentRecords_b__6_0(UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord s) ;

/// @brief Method <SortGlyphPairAdjustmentRecords>b__6_1 addr 0x2bcc4fc size 0x48 virtual false final false
 uint32_t _SortGlyphPairAdjustmentRecords_b__6_1(UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::FontFeatureTable
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13516))
// CS Name: UnityEngine.TextCore.Text.FontFeatureTable
class CORDL_TYPE FontFeatureTable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__FontFeatureTable____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~FontFeatureTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "FontFeatureTable", modifiers: " const&", def_value: None }]
constexpr FontFeatureTable(FontFeatureTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FontFeatureTable", modifiers: "&&", def_value: None }]
constexpr FontFeatureTable(FontFeatureTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FontFeatureTable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FontFeatureTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FontFeatureTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FontFeatureTable& operator=(FontFeatureTable&& o) noexcept = default;
  constexpr FontFeatureTable& operator=(FontFeatureTable const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __declspec(property(get=__get_m_GlyphPairAdjustmentRecords, put=__set_m_GlyphPairAdjustmentRecords))  m_GlyphPairAdjustmentRecords;

constexpr void __set_m_GlyphPairAdjustmentRecords(System::Collections::Generic::List_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __get_m_GlyphPairAdjustmentRecords() const;

 System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __declspec(property(get=__get_m_GlyphPairAdjustmentRecordLookup, put=__set_m_GlyphPairAdjustmentRecordLookup))  m_GlyphPairAdjustmentRecordLookup;

constexpr void __set_m_GlyphPairAdjustmentRecordLookup(System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __get_m_GlyphPairAdjustmentRecordLookup() const;


// Properties

 System::Collections::Generic::List_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __declspec(property(get=get_glyphPairAdjustmentRecords))  glyphPairAdjustmentRecords;


// Methods

/// @brief Method get_glyphPairAdjustmentRecords addr 0x2bc804c size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> get_glyphPairAdjustmentRecords() ;

static UnityEngine::TextCore::Text::FontFeatureTable New_ctor() ;

/// @brief Method .ctor addr 0x2bc76f4 size 0xc4 virtual false final false
 void _ctor() ;

/// @brief Method SortGlyphPairAdjustmentRecords addr 0x2bc2af4 size 0x1ec virtual false final false
 void SortGlyphPairAdjustmentRecords() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(UnityEngine::TextCore::Text::FontFeatureTable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::FontFeatureTable, "UnityEngine.TextCore.Text", "FontFeatureTable");
NEED_NO_BOX(UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__FontFeatureTable____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__FontFeatureTable____c, "UnityEngine.TextCore.Text", "FontFeatureTable/<>c");
