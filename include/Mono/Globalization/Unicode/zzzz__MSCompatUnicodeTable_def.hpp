#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Mono::Globalization::Unicode {
class Mono__Globalization__Unicode__MSCompatUnicodeTable____c;
}
namespace Mono::Globalization::Unicode {
class TailoringInfo;
}
namespace Mono::Globalization::Unicode {
class Level2Map;
}
namespace System::Globalization {
class CultureInfo;
}
namespace Mono::Globalization::Unicode {
class CodePointIndexer;
}
namespace Mono::Globalization::Unicode {
class Contraction;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
class MSCompatUnicodeTable;
}
namespace Mono::Globalization::Unicode {
class Mono__Globalization__Unicode__MSCompatUnicodeTable____c;
}
// Type: ::<>c
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2263))
// CS Name: Mono.Globalization.Unicode.MSCompatUnicodeTable::<>c
class CORDL_TYPE Mono__Globalization__Unicode__MSCompatUnicodeTable____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Mono__Globalization__Unicode__MSCompatUnicodeTable____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Globalization__Unicode__MSCompatUnicodeTable____c", modifiers: " const&", def_value: None }]
constexpr Mono__Globalization__Unicode__MSCompatUnicodeTable____c(Mono__Globalization__Unicode__MSCompatUnicodeTable____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Globalization__Unicode__MSCompatUnicodeTable____c", modifiers: "&&", def_value: None }]
constexpr Mono__Globalization__Unicode__MSCompatUnicodeTable____c(Mono__Globalization__Unicode__MSCompatUnicodeTable____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Globalization__Unicode__MSCompatUnicodeTable____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mono__Globalization__Unicode__MSCompatUnicodeTable____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Globalization__Unicode__MSCompatUnicodeTable____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Globalization__Unicode__MSCompatUnicodeTable____c& operator=(Mono__Globalization__Unicode__MSCompatUnicodeTable____c&& o) noexcept = default;
  constexpr Mono__Globalization__Unicode__MSCompatUnicodeTable____c& operator=(Mono__Globalization__Unicode__MSCompatUnicodeTable____c const& o) noexcept = default;
                


// Fields

static Mono::Globalization::Unicode::Mono__Globalization__Unicode__MSCompatUnicodeTable____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Mono::Globalization::Unicode::Mono__Globalization__Unicode__MSCompatUnicodeTable____c value) ;

static Mono::Globalization::Unicode::Mono__Globalization__Unicode__MSCompatUnicodeTable____c __get___9() ;

static System::Comparison_1<Mono::Globalization::Unicode::Level2Map> __declspec(property(get=__get___9__17_0, put=__set___9__17_0))  __9__17_0;

static void __set___9__17_0(System::Comparison_1<Mono::Globalization::Unicode::Level2Map> value) ;

static System::Comparison_1<Mono::Globalization::Unicode::Level2Map> __get___9__17_0() ;


// Methods

static Mono::Globalization::Unicode::Mono__Globalization__Unicode__MSCompatUnicodeTable____c New_ctor() ;

/// @brief Method .ctor addr 0x22a9f14 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <BuildTailoringTables>b__17_0 addr 0x22a9f1c size 0x24 virtual false final false
 int32_t _BuildTailoringTables_b__17_0(Mono::Globalization::Unicode::Level2Map a, Mono::Globalization::Unicode::Level2Map b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Globalization::Unicode
// Type: Mono.Globalization.Unicode::MSCompatUnicodeTable
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2264))
// CS Name: Mono.Globalization.Unicode.MSCompatUnicodeTable
class CORDL_TYPE MSCompatUnicodeTable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = Mono::Globalization::Unicode::Mono__Globalization__Unicode__MSCompatUnicodeTable____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MSCompatUnicodeTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "MSCompatUnicodeTable", modifiers: " const&", def_value: None }]
constexpr MSCompatUnicodeTable(MSCompatUnicodeTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MSCompatUnicodeTable", modifiers: "&&", def_value: None }]
constexpr MSCompatUnicodeTable(MSCompatUnicodeTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MSCompatUnicodeTable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MSCompatUnicodeTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MSCompatUnicodeTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MSCompatUnicodeTable& operator=(MSCompatUnicodeTable&& o) noexcept = default;
  constexpr MSCompatUnicodeTable& operator=(MSCompatUnicodeTable const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_MaxExpansionLength, put=__set_MaxExpansionLength))  MaxExpansionLength;

static void __set_MaxExpansionLength(int32_t value) ;

static int32_t __get_MaxExpansionLength() ;

static void* __declspec(property(get=__get_ignorableFlags, put=__set_ignorableFlags))  ignorableFlags;

static void __set_ignorableFlags(void* value) ;

static void* __get_ignorableFlags() ;

static void* __declspec(property(get=__get_categories, put=__set_categories))  categories;

static void __set_categories(void* value) ;

static void* __get_categories() ;

static void* __declspec(property(get=__get_level1, put=__set_level1))  level1;

static void __set_level1(void* value) ;

static void* __get_level1() ;

static void* __declspec(property(get=__get_level2, put=__set_level2))  level2;

static void __set_level2(void* value) ;

static void* __get_level2() ;

static void* __declspec(property(get=__get_level3, put=__set_level3))  level3;

static void __set_level3(void* value) ;

static void* __get_level3() ;

static void* __declspec(property(get=__get_cjkCHScategory, put=__set_cjkCHScategory))  cjkCHScategory;

static void __set_cjkCHScategory(void* value) ;

static void* __get_cjkCHScategory() ;

static void* __declspec(property(get=__get_cjkCHTcategory, put=__set_cjkCHTcategory))  cjkCHTcategory;

static void __set_cjkCHTcategory(void* value) ;

static void* __get_cjkCHTcategory() ;

static void* __declspec(property(get=__get_cjkJAcategory, put=__set_cjkJAcategory))  cjkJAcategory;

static void __set_cjkJAcategory(void* value) ;

static void* __get_cjkJAcategory() ;

static void* __declspec(property(get=__get_cjkKOcategory, put=__set_cjkKOcategory))  cjkKOcategory;

static void __set_cjkKOcategory(void* value) ;

static void* __get_cjkKOcategory() ;

static void* __declspec(property(get=__get_cjkCHSlv1, put=__set_cjkCHSlv1))  cjkCHSlv1;

static void __set_cjkCHSlv1(void* value) ;

static void* __get_cjkCHSlv1() ;

static void* __declspec(property(get=__get_cjkCHTlv1, put=__set_cjkCHTlv1))  cjkCHTlv1;

static void __set_cjkCHTlv1(void* value) ;

static void* __get_cjkCHTlv1() ;

static void* __declspec(property(get=__get_cjkJAlv1, put=__set_cjkJAlv1))  cjkJAlv1;

static void __set_cjkJAlv1(void* value) ;

static void* __get_cjkJAlv1() ;

static void* __declspec(property(get=__get_cjkKOlv1, put=__set_cjkKOlv1))  cjkKOlv1;

static void __set_cjkKOlv1(void* value) ;

static void* __get_cjkKOlv1() ;

static void* __declspec(property(get=__get_cjkKOlv2, put=__set_cjkKOlv2))  cjkKOlv2;

static void __set_cjkKOlv2(void* value) ;

static void* __get_cjkKOlv2() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_tailoringArr, put=__set_tailoringArr))  tailoringArr;

static void __set_tailoringArr(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_tailoringArr() ;

static ::ArrayW<Mono::Globalization::Unicode::TailoringInfo> __declspec(property(get=__get_tailoringInfos, put=__set_tailoringInfos))  tailoringInfos;

static void __set_tailoringInfos(::ArrayW<Mono::Globalization::Unicode::TailoringInfo> value) ;

static ::ArrayW<Mono::Globalization::Unicode::TailoringInfo> __get_tailoringInfos() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_forLock, put=__set_forLock))  forLock;

static void __set_forLock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_forLock() ;

static bool __declspec(property(get=__get_isReady, put=__set_isReady))  isReady;

static void __set_isReady(bool value) ;

static bool __get_isReady() ;


// Properties

static bool __declspec(property(get=get_IsReady))  IsReady;


// Methods

/// @brief Method GetTailoringInfo addr 0x22a80cc size 0x104 virtual false final false
static Mono::Globalization::Unicode::TailoringInfo GetTailoringInfo(int32_t lcid) ;

/// @brief Method BuildTailoringTables addr 0x22a81d0 size 0x750 virtual false final false
static void BuildTailoringTables(System::Globalization::CultureInfo culture, Mono::Globalization::Unicode::TailoringInfo t, ByRef<::ArrayW<Mono::Globalization::Unicode::Contraction>> contractions, ByRef<::ArrayW<Mono::Globalization::Unicode::Level2Map>> diacriticals) ;

/// @brief Method SetCJKReferences addr 0x22a8920 size 0x238 virtual false final false
static void SetCJKReferences(::StringW name, ByRef<Mono::Globalization::Unicode::CodePointIndexer> cjkIndexer, ByRef<void*> catTable, ByRef<void*> lv1Table, ByRef<Mono::Globalization::Unicode::CodePointIndexer> lv2Indexer, ByRef<void*> lv2Table) ;

/// @brief Method Category addr 0x22a8b58 size 0xa4 virtual false final false
static uint8_t Category(int32_t cp) ;

/// @brief Method Level1 addr 0x22a8bfc size 0xa4 virtual false final false
static uint8_t Level1(int32_t cp) ;

/// @brief Method Level2 addr 0x22a8ca0 size 0xa4 virtual false final false
static uint8_t Level2(int32_t cp) ;

/// @brief Method Level3 addr 0x22a8d44 size 0xa4 virtual false final false
static uint8_t Level3(int32_t cp) ;

/// @brief Method IsIgnorable addr 0x22a8de8 size 0x118 virtual false final false
static bool IsIgnorable(int32_t cp, uint8_t flag) ;

/// @brief Method IsIgnorableNonSpacing addr 0x22a8f00 size 0x58 virtual false final false
static bool IsIgnorableNonSpacing(int32_t cp) ;

/// @brief Method ToKanaTypeInsensitive addr 0x22a8f58 size 0x20 virtual false final false
static int32_t ToKanaTypeInsensitive(int32_t i) ;

/// @brief Method ToWidthCompat addr 0x22a8f78 size 0x18c virtual false final false
static int32_t ToWidthCompat(int32_t i) ;

/// @brief Method HasSpecialWeight addr 0x22a9104 size 0x80 virtual false final false
static bool HasSpecialWeight(char16_t c) ;

/// @brief Method IsHalfWidthKana addr 0x22a9184 size 0x14 virtual false final false
static bool IsHalfWidthKana(char16_t c) ;

/// @brief Method IsHiragana addr 0x22a9198 size 0x18 virtual false final false
static bool IsHiragana(char16_t c) ;

/// @brief Method IsJapaneseSmallLetter addr 0x22a91b0 size 0xe8 virtual false final false
static bool IsJapaneseSmallLetter(char16_t c) ;

/// @brief Method get_IsReady addr 0x22a9298 size 0x58 virtual false final false
static bool get_IsReady() ;

/// @brief Method GetResource addr 0x22a92f0 size 0xb8 virtual false final false
static ::cordl_internals::intptr_t GetResource(::StringW name) ;

/// @brief Method UInt32FromBytePtr addr 0x22a93a8 size 0x30 virtual false final false
static uint32_t UInt32FromBytePtr(void* raw, uint32_t idx) ;

/// @brief Method FillCJK addr 0x22a9884 size 0x164 virtual false final false
static void FillCJK(::StringW culture, ByRef<Mono::Globalization::Unicode::CodePointIndexer> cjkIndexer, ByRef<void*> catTable, ByRef<void*> lv1Table, ByRef<Mono::Globalization::Unicode::CodePointIndexer> lv2Indexer, ByRef<void*> lv2Table) ;

/// @brief Method FillCJKCore addr 0x22a99e8 size 0x4c8 virtual false final false
static void FillCJKCore(::StringW culture, ByRef<Mono::Globalization::Unicode::CodePointIndexer> cjkIndexer, ByRef<void*> catTable, ByRef<void*> lv1Table, ByRef<Mono::Globalization::Unicode::CodePointIndexer> cjkLv2Indexer, ByRef<void*> lv2Table) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Globalization::Unicode
NEED_NO_BOX(Mono::Globalization::Unicode::MSCompatUnicodeTable);
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::MSCompatUnicodeTable, "Mono.Globalization.Unicode", "MSCompatUnicodeTable");
NEED_NO_BOX(Mono::Globalization::Unicode::Mono__Globalization__Unicode__MSCompatUnicodeTable____c);
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::Mono__Globalization__Unicode__MSCompatUnicodeTable____c, "Mono.Globalization.Unicode", "MSCompatUnicodeTable/<>c");
