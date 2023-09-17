#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace TMPro {
class TMP_GlyphPairAdjustmentRecord;
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
namespace TMPro {
class TMP_FontFeatureTable;
}
namespace TMPro {
class ____TMPro__TMP_FontFeatureTable____c;
}
// Type: ::<>c
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12318))
// CS Name: TMPro.TMP_FontFeatureTable::<>c
class CORDL_TYPE ____TMPro__TMP_FontFeatureTable____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____TMPro__TMP_FontFeatureTable____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____TMPro__TMP_FontFeatureTable____c", modifiers: " const&", def_value: None }]
constexpr ____TMPro__TMP_FontFeatureTable____c(____TMPro__TMP_FontFeatureTable____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____TMPro__TMP_FontFeatureTable____c", modifiers: "&&", def_value: None }]
constexpr ____TMPro__TMP_FontFeatureTable____c(____TMPro__TMP_FontFeatureTable____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____TMPro__TMP_FontFeatureTable____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____TMPro__TMP_FontFeatureTable____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____TMPro__TMP_FontFeatureTable____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____TMPro__TMP_FontFeatureTable____c& operator=(____TMPro__TMP_FontFeatureTable____c&& o) noexcept = default;
  constexpr ____TMPro__TMP_FontFeatureTable____c& operator=(____TMPro__TMP_FontFeatureTable____c const& o) noexcept = default;
                


// Fields

static ::TMPro::____TMPro__TMP_FontFeatureTable____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::TMPro::____TMPro__TMP_FontFeatureTable____c value) ;

static ::TMPro::____TMPro__TMP_FontFeatureTable____c __get___9() ;

static ::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord,uint32_t> __declspec(property(get=__get___9__6_0, put=__set___9__6_0))  __9__6_0;

static void __set___9__6_0(::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord,uint32_t> value) ;

static ::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord,uint32_t> __get___9__6_0() ;

static ::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord,uint32_t> __declspec(property(get=__get___9__6_1, put=__set___9__6_1))  __9__6_1;

static void __set___9__6_1(::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord,uint32_t> value) ;

static ::System::Func_2<::TMPro::TMP_GlyphPairAdjustmentRecord,uint32_t> __get___9__6_1() ;


// Methods

// Ctor Parameters []
explicit ____TMPro__TMP_FontFeatureTable____c() ;

/// @brief Method .ctor addr 0x2a7a9a8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SortGlyphPairAdjustmentRecords>b__6_0 addr 0x2a7a9b0 size 0x18 virtual false final false
 uint32_t _SortGlyphPairAdjustmentRecords_b__6_0(::TMPro::TMP_GlyphPairAdjustmentRecord s) ;

/// @brief Method <SortGlyphPairAdjustmentRecords>b__6_1 addr 0x2a7a9c8 size 0x18 virtual false final false
 uint32_t _SortGlyphPairAdjustmentRecords_b__6_1(::TMPro::TMP_GlyphPairAdjustmentRecord s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_FontFeatureTable
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12319))
// CS Name: TMPro.TMP_FontFeatureTable
class CORDL_TYPE TMP_FontFeatureTable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::TMPro::____TMPro__TMP_FontFeatureTable____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TMP_FontFeatureTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_FontFeatureTable", modifiers: " const&", def_value: None }]
constexpr TMP_FontFeatureTable(TMP_FontFeatureTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_FontFeatureTable", modifiers: "&&", def_value: None }]
constexpr TMP_FontFeatureTable(TMP_FontFeatureTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_FontFeatureTable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_FontFeatureTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_FontFeatureTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_FontFeatureTable& operator=(TMP_FontFeatureTable&& o) noexcept = default;
  constexpr TMP_FontFeatureTable& operator=(TMP_FontFeatureTable const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord> __declspec(property(get=__get_m_GlyphPairAdjustmentRecords, put=__set_m_GlyphPairAdjustmentRecords))  m_GlyphPairAdjustmentRecords;

constexpr void __set_m_GlyphPairAdjustmentRecords(::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord> value) ;

constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord> __get_m_GlyphPairAdjustmentRecords() const;

 ::System::Collections::Generic::Dictionary_2<uint32_t,::TMPro::TMP_GlyphPairAdjustmentRecord> __declspec(property(get=__get_m_GlyphPairAdjustmentRecordLookupDictionary, put=__set_m_GlyphPairAdjustmentRecordLookupDictionary))  m_GlyphPairAdjustmentRecordLookupDictionary;

constexpr void __set_m_GlyphPairAdjustmentRecordLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t,::TMPro::TMP_GlyphPairAdjustmentRecord> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<uint32_t,::TMPro::TMP_GlyphPairAdjustmentRecord> __get_m_GlyphPairAdjustmentRecordLookupDictionary() const;


// Properties

 ::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord> __declspec(property(get=get_glyphPairAdjustmentRecords, put=set_glyphPairAdjustmentRecords))  glyphPairAdjustmentRecords;


// Methods

/// @brief Method get_glyphPairAdjustmentRecords addr 0x2a7a934 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord> get_glyphPairAdjustmentRecords() ;

/// @brief Method set_glyphPairAdjustmentRecords addr 0x2a7a93c size 0x8 virtual false final false
 void set_glyphPairAdjustmentRecords(::System::Collections::Generic::List_1<::TMPro::TMP_GlyphPairAdjustmentRecord> value) ;

// Ctor Parameters []
explicit TMP_FontFeatureTable() ;

/// @brief Method .ctor addr 0x2a774e0 size 0xc4 virtual false final false
 void _ctor() ;

/// @brief Method SortGlyphPairAdjustmentRecords addr 0x2a7286c size 0x1ec virtual false final false
 void SortGlyphPairAdjustmentRecords() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::TMP_FontFeatureTable);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontFeatureTable, "TMPro", "TMP_FontFeatureTable");
NEED_NO_BOX(::TMPro::____TMPro__TMP_FontFeatureTable____c);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::____TMPro__TMP_FontFeatureTable____c, "TMPro", "TMP_FontFeatureTable/<>c");
