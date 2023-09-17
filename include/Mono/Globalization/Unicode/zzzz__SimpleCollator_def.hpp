#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Globalization {
class SortKey;
}
namespace Mono::Globalization::Unicode {
class CodePointIndexer;
}
namespace Mono::Globalization::Unicode {
class Contraction;
}
namespace System::Globalization {
struct CompareOptions;
}
namespace System::Globalization {
class TextInfo;
}
namespace System::Globalization {
class CultureInfo;
}
namespace Mono::Globalization::Unicode {
class SortKeyBuffer;
}
namespace Mono::Globalization::Unicode {
class Level2Map;
}
namespace System::Globalization {
class ISimpleCollator;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
struct ____Mono__Globalization__Unicode__SimpleCollator__ExtenderType;
}
namespace Mono::Globalization::Unicode {
class SimpleCollator;
}
namespace Mono::Globalization::Unicode {
struct ____Mono__Globalization__Unicode__SimpleCollator__Context;
}
namespace Mono::Globalization::Unicode {
struct ____Mono__Globalization__Unicode__SimpleCollator__Escape;
}
namespace Mono::Globalization::Unicode {
struct ____Mono__Globalization__Unicode__SimpleCollator__PreviousInfo;
}
// Type: ::Context
namespace Mono::Globalization::Unicode {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2267))
// CS Name: Mono.Globalization.Unicode.SimpleCollator::Context
struct CORDL_TYPE ____Mono__Globalization__Unicode__SimpleCollator__Context : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Option", ty: "::System::Globalization::CompareOptions", modifiers: "", def_value: None }, CppParam { name: "NeverMatchFlags", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "AlwaysMatchFlags", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "Buffer1", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "Buffer2", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "PrevCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PrevSortKey", ty: "void*", modifiers: "", def_value: None }]
constexpr ____Mono__Globalization__Unicode__SimpleCollator__Context(::System::Globalization::CompareOptions Option, void* NeverMatchFlags, void* AlwaysMatchFlags, void* Buffer1, void* Buffer2, int32_t PrevCode, void* PrevSortKey) noexcept;


                    constexpr ____Mono__Globalization__Unicode__SimpleCollator__Context(____Mono__Globalization__Unicode__SimpleCollator__Context const&) = default;
                    constexpr ____Mono__Globalization__Unicode__SimpleCollator__Context(____Mono__Globalization__Unicode__SimpleCollator__Context&&) = default;
                    constexpr ____Mono__Globalization__Unicode__SimpleCollator__Context& operator=(____Mono__Globalization__Unicode__SimpleCollator__Context const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Mono__Globalization__Unicode__SimpleCollator__Context& operator=(____Mono__Globalization__Unicode__SimpleCollator__Context&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Mono__Globalization__Unicode__SimpleCollator__Context(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Globalization::CompareOptions __declspec(property(get=__get_Option, put=__set_Option))  Option;

constexpr void __set_Option(::System::Globalization::CompareOptions value) ;

constexpr ::System::Globalization::CompareOptions __get_Option() const;

 void* __declspec(property(get=__get_NeverMatchFlags, put=__set_NeverMatchFlags))  NeverMatchFlags;

constexpr void __set_NeverMatchFlags(void* value) ;

constexpr void* __get_NeverMatchFlags() const;

 void* __declspec(property(get=__get_AlwaysMatchFlags, put=__set_AlwaysMatchFlags))  AlwaysMatchFlags;

constexpr void __set_AlwaysMatchFlags(void* value) ;

constexpr void* __get_AlwaysMatchFlags() const;

 void* __declspec(property(get=__get_Buffer1, put=__set_Buffer1))  Buffer1;

constexpr void __set_Buffer1(void* value) ;

constexpr void* __get_Buffer1() const;

 void* __declspec(property(get=__get_Buffer2, put=__set_Buffer2))  Buffer2;

constexpr void __set_Buffer2(void* value) ;

constexpr void* __get_Buffer2() const;

 int32_t __declspec(property(get=__get_PrevCode, put=__set_PrevCode))  PrevCode;

constexpr void __set_PrevCode(int32_t value) ;

constexpr int32_t __get_PrevCode() const;

 void* __declspec(property(get=__get_PrevSortKey, put=__set_PrevSortKey))  PrevSortKey;

constexpr void __set_PrevSortKey(void* value) ;

constexpr void* __get_PrevSortKey() const;


// Methods

/// @brief Method .ctor addr 0x22abec4 size 0x1c virtual false final false
 void _ctor(::System::Globalization::CompareOptions opt, void* alwaysMatchFlags, void* neverMatchFlags, void* buffer1, void* buffer2, void* prev1) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Globalization::Unicode
// Type: ::PreviousInfo
namespace Mono::Globalization::Unicode {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2268))
// CS Name: Mono.Globalization.Unicode.SimpleCollator::PreviousInfo
struct CORDL_TYPE ____Mono__Globalization__Unicode__SimpleCollator__PreviousInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Code", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SortKey", ty: "void*", modifiers: "", def_value: None }]
constexpr ____Mono__Globalization__Unicode__SimpleCollator__PreviousInfo(int32_t Code, void* SortKey) noexcept;


                    constexpr ____Mono__Globalization__Unicode__SimpleCollator__PreviousInfo(____Mono__Globalization__Unicode__SimpleCollator__PreviousInfo const&) = default;
                    constexpr ____Mono__Globalization__Unicode__SimpleCollator__PreviousInfo(____Mono__Globalization__Unicode__SimpleCollator__PreviousInfo&&) = default;
                    constexpr ____Mono__Globalization__Unicode__SimpleCollator__PreviousInfo& operator=(____Mono__Globalization__Unicode__SimpleCollator__PreviousInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Mono__Globalization__Unicode__SimpleCollator__PreviousInfo& operator=(____Mono__Globalization__Unicode__SimpleCollator__PreviousInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Mono__Globalization__Unicode__SimpleCollator__PreviousInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_Code, put=__set_Code))  Code;

constexpr void __set_Code(int32_t value) ;

constexpr int32_t __get_Code() const;

 void* __declspec(property(get=__get_SortKey, put=__set_SortKey))  SortKey;

constexpr void __set_SortKey(void* value) ;

constexpr void* __get_SortKey() const;


// Methods

/// @brief Method .ctor addr 0x22ada3c size 0x10 virtual false final false
 void _ctor(bool dummy) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Globalization::Unicode
// Type: ::Escape
namespace Mono::Globalization::Unicode {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2269))
// CS Name: Mono.Globalization.Unicode.SimpleCollator::Escape
struct CORDL_TYPE ____Mono__Globalization__Unicode__SimpleCollator__Escape : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Source", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "End", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Optional", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Mono__Globalization__Unicode__SimpleCollator__Escape(::StringW Source, int32_t Index, int32_t Start, int32_t End, int32_t Optional) noexcept;


                    constexpr ____Mono__Globalization__Unicode__SimpleCollator__Escape(____Mono__Globalization__Unicode__SimpleCollator__Escape const&) = default;
                    constexpr ____Mono__Globalization__Unicode__SimpleCollator__Escape(____Mono__Globalization__Unicode__SimpleCollator__Escape&&) = default;
                    constexpr ____Mono__Globalization__Unicode__SimpleCollator__Escape& operator=(____Mono__Globalization__Unicode__SimpleCollator__Escape const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Mono__Globalization__Unicode__SimpleCollator__Escape& operator=(____Mono__Globalization__Unicode__SimpleCollator__Escape&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Mono__Globalization__Unicode__SimpleCollator__Escape(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_Source, put=__set_Source))  Source;

constexpr void __set_Source(::StringW value) ;

constexpr ::StringW __get_Source() const;

 int32_t __declspec(property(get=__get_Index, put=__set_Index))  Index;

constexpr void __set_Index(int32_t value) ;

constexpr int32_t __get_Index() const;

 int32_t __declspec(property(get=__get_Start, put=__set_Start))  Start;

constexpr void __set_Start(int32_t value) ;

constexpr int32_t __get_Start() const;

 int32_t __declspec(property(get=__get_End, put=__set_End))  End;

constexpr void __set_End(int32_t value) ;

constexpr int32_t __get_End() const;

 int32_t __declspec(property(get=__get_Optional, put=__set_Optional))  Optional;

constexpr void __set_Optional(int32_t value) ;

constexpr int32_t __get_Optional() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Globalization::Unicode
// Type: ::ExtenderType
namespace Mono::Globalization::Unicode {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2270))
// CS Name: Mono.Globalization.Unicode.SimpleCollator::ExtenderType
struct CORDL_TYPE ____Mono__Globalization__Unicode__SimpleCollator__ExtenderType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Mono__Globalization__Unicode__SimpleCollator__ExtenderType(int32_t value__) noexcept;


                    constexpr ____Mono__Globalization__Unicode__SimpleCollator__ExtenderType(____Mono__Globalization__Unicode__SimpleCollator__ExtenderType const&) = default;
                    constexpr ____Mono__Globalization__Unicode__SimpleCollator__ExtenderType(____Mono__Globalization__Unicode__SimpleCollator__ExtenderType&&) = default;
                    constexpr ____Mono__Globalization__Unicode__SimpleCollator__ExtenderType& operator=(____Mono__Globalization__Unicode__SimpleCollator__ExtenderType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Mono__Globalization__Unicode__SimpleCollator__ExtenderType& operator=(____Mono__Globalization__Unicode__SimpleCollator__ExtenderType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Mono__Globalization__Unicode__SimpleCollator__ExtenderType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Mono__Globalization__Unicode__SimpleCollator__ExtenderType_Unwrapped : int32_t {
__None = 0,
__Simple = 1,
__Voiced = 2,
__Conditional = 3,
__Buggy = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Mono__Globalization__Unicode__SimpleCollator__ExtenderType_Unwrapped () const noexcept {
return std::bit_cast<______Mono__Globalization__Unicode__SimpleCollator__ExtenderType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__ExtenderType const None;

/// @brief Field Simple offset 0
static ::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__ExtenderType const Simple;

/// @brief Field Voiced offset 0
static ::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__ExtenderType const Voiced;

/// @brief Field Conditional offset 0
static ::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__ExtenderType const Conditional;

/// @brief Field Buggy offset 0
static ::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__ExtenderType const Buggy;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Globalization::Unicode
// Type: Mono.Globalization.Unicode::SimpleCollator
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2271))
// CS Name: Mono.Globalization.Unicode.SimpleCollator
class CORDL_TYPE SimpleCollator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ExtenderType = ::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__ExtenderType;

using Escape = ::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__Escape;

using PreviousInfo = ::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__PreviousInfo;

using Context = ::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__Context;

/// @brief Convert operator to ::System::Globalization::ISimpleCollator
constexpr operator  ::System::Globalization::ISimpleCollator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~SimpleCollator() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleCollator", modifiers: " const&", def_value: None }]
constexpr SimpleCollator(SimpleCollator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleCollator", modifiers: "&&", def_value: None }]
constexpr SimpleCollator(SimpleCollator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleCollator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SimpleCollator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleCollator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleCollator& operator=(SimpleCollator&& o) noexcept = default;
  constexpr SimpleCollator& operator=(SimpleCollator const& o) noexcept = default;
                


// Fields

static ::Mono::Globalization::Unicode::SimpleCollator __declspec(property(get=__get_invariant, put=__set_invariant))  invariant;

static void __set_invariant(::Mono::Globalization::Unicode::SimpleCollator value) ;

static ::Mono::Globalization::Unicode::SimpleCollator __get_invariant() ;

 ::System::Globalization::TextInfo __declspec(property(get=__get_textInfo, put=__set_textInfo))  textInfo;

constexpr void __set_textInfo(::System::Globalization::TextInfo value) ;

constexpr ::System::Globalization::TextInfo __get_textInfo() const;

 ::Mono::Globalization::Unicode::CodePointIndexer __declspec(property(get=__get_cjkIndexer, put=__set_cjkIndexer))  cjkIndexer;

constexpr void __set_cjkIndexer(::Mono::Globalization::Unicode::CodePointIndexer value) ;

constexpr ::Mono::Globalization::Unicode::CodePointIndexer __get_cjkIndexer() const;

 ::ArrayW<::Mono::Globalization::Unicode::Contraction> __declspec(property(get=__get_contractions, put=__set_contractions))  contractions;

constexpr void __set_contractions(::ArrayW<::Mono::Globalization::Unicode::Contraction> value) ;

constexpr ::ArrayW<::Mono::Globalization::Unicode::Contraction> __get_contractions() const;

 ::ArrayW<::Mono::Globalization::Unicode::Level2Map> __declspec(property(get=__get_level2Maps, put=__set_level2Maps))  level2Maps;

constexpr void __set_level2Maps(::ArrayW<::Mono::Globalization::Unicode::Level2Map> value) ;

constexpr ::ArrayW<::Mono::Globalization::Unicode::Level2Map> __get_level2Maps() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_unsafeFlags, put=__set_unsafeFlags))  unsafeFlags;

constexpr void __set_unsafeFlags(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_unsafeFlags() const;

 void* __declspec(property(get=__get_cjkCatTable, put=__set_cjkCatTable))  cjkCatTable;

constexpr void __set_cjkCatTable(void* value) ;

constexpr void* __get_cjkCatTable() const;

 void* __declspec(property(get=__get_cjkLv1Table, put=__set_cjkLv1Table))  cjkLv1Table;

constexpr void __set_cjkLv1Table(void* value) ;

constexpr void* __get_cjkLv1Table() const;

 void* __declspec(property(get=__get_cjkLv2Table, put=__set_cjkLv2Table))  cjkLv2Table;

constexpr void __set_cjkLv2Table(void* value) ;

constexpr void* __get_cjkLv2Table() const;

 ::Mono::Globalization::Unicode::CodePointIndexer __declspec(property(get=__get_cjkLv2Indexer, put=__set_cjkLv2Indexer))  cjkLv2Indexer;

constexpr void __set_cjkLv2Indexer(::Mono::Globalization::Unicode::CodePointIndexer value) ;

constexpr ::Mono::Globalization::Unicode::CodePointIndexer __get_cjkLv2Indexer() const;

 int32_t __declspec(property(get=__get_lcid, put=__set_lcid))  lcid;

constexpr void __set_lcid(int32_t value) ;

constexpr int32_t __get_lcid() const;

 bool __declspec(property(get=__get_frenchSort, put=__set_frenchSort))  frenchSort;

constexpr void __set_frenchSort(bool value) ;

constexpr bool __get_frenchSort() const;


// Methods

// Ctor Parameters [CppParam { name: "culture", ty: "::System::Globalization::CultureInfo", modifiers: "", def_value: None }]
explicit SimpleCollator(::System::Globalization::CultureInfo culture) ;

/// @brief Method .ctor addr 0x22aa7c4 size 0x32c virtual false final false
 void _ctor(::System::Globalization::CultureInfo culture) ;

/// @brief Method SetCJKTable addr 0x22aaaf0 size 0xdc virtual false final false
 void SetCJKTable(::System::Globalization::CultureInfo culture, ByRef<::Mono::Globalization::Unicode::CodePointIndexer> cjkIndexer, ByRef<void*> catTable, ByRef<void*> lv1Table, ByRef<::Mono::Globalization::Unicode::CodePointIndexer> lv2Indexer, ByRef<void*> lv2Table) ;

/// @brief Method GetNeutralCulture addr 0x22aabcc size 0x70 virtual false final false
static ::System::Globalization::CultureInfo GetNeutralCulture(::System::Globalization::CultureInfo info) ;

/// @brief Method Category addr 0x22aac3c size 0x94 virtual false final false
 uint8_t Category(int32_t cp) ;

/// @brief Method Level1 addr 0x22aacd0 size 0x94 virtual false final false
 uint8_t Level1(int32_t cp) ;

/// @brief Method Level2 addr 0x22aad64 size 0x12c virtual false final false
 uint8_t Level2(int32_t cp, ::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__ExtenderType ext) ;

/// @brief Method IsHalfKana addr 0x22aae90 size 0x74 virtual false final false
static bool IsHalfKana(int32_t cp, ::System::Globalization::CompareOptions opt) ;

/// @brief Method GetContraction addr 0x22aaf04 size 0xc0 virtual false final false
 ::Mono::Globalization::Unicode::Contraction GetContraction(::StringW s, int32_t start, int32_t end) ;

/// @brief Method GetContraction addr 0x22aafc4 size 0x124 virtual false final false
 ::Mono::Globalization::Unicode::Contraction GetContraction(::StringW s, int32_t start, int32_t end, ::ArrayW<::Mono::Globalization::Unicode::Contraction> clist) ;

/// @brief Method GetTailContraction addr 0x22ab0e8 size 0xc0 virtual false final false
 ::Mono::Globalization::Unicode::Contraction GetTailContraction(::StringW s, int32_t start, int32_t end) ;

/// @brief Method GetTailContraction addr 0x22ab1a8 size 0x1f0 virtual false final false
 ::Mono::Globalization::Unicode::Contraction GetTailContraction(::StringW s, int32_t start, int32_t end, ::ArrayW<::Mono::Globalization::Unicode::Contraction> clist) ;

/// @brief Method FilterOptions addr 0x22ab398 size 0xec virtual false final false
 int32_t FilterOptions(int32_t i, ::System::Globalization::CompareOptions opt) ;

/// @brief Method GetExtenderType addr 0x22ab484 size 0x104 virtual false final false
 ::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__ExtenderType GetExtenderType(int32_t i) ;

/// @brief Method ToDashTypeValue addr 0x22ab588 size 0x20 virtual false final false
static uint8_t ToDashTypeValue(::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__ExtenderType ext, ::System::Globalization::CompareOptions opt) ;

/// @brief Method FilterExtender addr 0x22ab5a8 size 0x214 virtual false final false
 int32_t FilterExtender(int32_t i, ::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__ExtenderType ext, ::System::Globalization::CompareOptions opt) ;

/// @brief Method IsIgnorable addr 0x22ab7bc size 0x84 virtual false final false
static bool IsIgnorable(int32_t i, ::System::Globalization::CompareOptions opt) ;

/// @brief Method IsSafe addr 0x22ab840 size 0x60 virtual false final false
 bool IsSafe(int32_t i) ;

/// @brief Method GetSortKey addr 0x22ab8a0 size 0x20 virtual true final true
 ::System::Globalization::SortKey GetSortKey(::StringW s, ::System::Globalization::CompareOptions options) ;

/// @brief Method GetSortKey addr 0x22ab8c0 size 0xc8 virtual false final false
 ::System::Globalization::SortKey GetSortKey(::StringW s, int32_t start, int32_t length, ::System::Globalization::CompareOptions options) ;

/// @brief Method GetSortKey addr 0x22abb08 size 0x37c virtual false final false
 void GetSortKey(::StringW s, int32_t start, int32_t end, ::Mono::Globalization::Unicode::SortKeyBuffer buf, ::System::Globalization::CompareOptions opt) ;

/// @brief Method FillSortKeyRaw addr 0x22abee0 size 0x3a0 virtual false final false
 void FillSortKeyRaw(int32_t i, ::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__ExtenderType ext, ::Mono::Globalization::Unicode::SortKeyBuffer buf, ::System::Globalization::CompareOptions opt) ;

/// @brief Method FillSurrogateSortKeyRaw addr 0x22ac458 size 0xb4 virtual false final false
 void FillSurrogateSortKeyRaw(int32_t i, ::Mono::Globalization::Unicode::SortKeyBuffer buf) ;

/// @brief Method System.Globalization.ISimpleCollator.Compare addr 0x22ac5a0 size 0x4 virtual true final true
 int32_t System_Globalization_ISimpleCollator_Compare(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2, ::System::Globalization::CompareOptions options) ;

/// @brief Method Compare addr 0x22ac5a4 size 0xb4 virtual false final false
 int32_t Compare(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2, ::System::Globalization::CompareOptions options) ;

/// @brief Method ClearBuffer addr 0x22abea8 size 0x1c virtual false final false
 void ClearBuffer(void* buffer, int32_t size) ;

/// @brief Method CompareInternal addr 0x22ac658 size 0x13e4 virtual false final false
 int32_t CompareInternal(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2, ByRef<bool> targetConsumed, ByRef<bool> sourceConsumed, bool skipHeadingExtenders, bool immediateBreakup, ByRef<::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__Context> ctx) ;

/// @brief Method CompareFlagPair addr 0x22ada4c size 0x20 virtual false final false
 int32_t CompareFlagPair(bool b1, bool b2) ;

/// @brief Method IsPrefix addr 0x22ada6c size 0x20 virtual true final true
 bool IsPrefix(::StringW src, ::StringW target, ::System::Globalization::CompareOptions opt) ;

/// @brief Method IsPrefix addr 0x22ada8c size 0xb0 virtual false final false
 bool IsPrefix(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt) ;

/// @brief Method IsPrefix addr 0x22adb3c size 0x68 virtual false final false
 bool IsPrefix(::StringW s, ::StringW target, int32_t start, int32_t length, bool skipHeadingExtenders, ByRef<::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__Context> ctx) ;

/// @brief Method IsSuffix addr 0x22adba4 size 0x20 virtual true final true
 bool IsSuffix(::StringW src, ::StringW target, ::System::Globalization::CompareOptions opt) ;

/// @brief Method IsSuffix addr 0x22adbc4 size 0x94 virtual false final false
 bool IsSuffix(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt) ;

/// @brief Method QuickIndexOf addr 0x22adde4 size 0x168 virtual false final false
 int32_t QuickIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ByRef<bool> testWasUnable) ;

/// @brief Method IndexOf addr 0x22adf4c size 0x1f4 virtual true final true
 int32_t IndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt) ;

/// @brief Method IndexOfOrdinal addr 0x22ae5dc size 0xd8 virtual false final false
 int32_t IndexOfOrdinal(::StringW s, ::StringW target, int32_t start, int32_t length) ;

/// @brief Method IndexOfOrdinal addr 0x22ae6b4 size 0x70 virtual false final false
 int32_t IndexOfOrdinal(::StringW s, char16_t target, int32_t start, int32_t length) ;

/// @brief Method IndexOfSortKey addr 0x22ae724 size 0x9c virtual false final false
 int32_t IndexOfSortKey(::StringW s, int32_t start, int32_t length, void* sortkey, char16_t target, int32_t ti, bool noLv4, ByRef<::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__Context> ctx) ;

/// @brief Method IndexOf addr 0x22ae140 size 0x49c virtual false final false
 int32_t IndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, void* targetSortKey, ByRef<::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__Context> ctx) ;

/// @brief Method LastIndexOf addr 0x22adc58 size 0x18c virtual true final true
 int32_t LastIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt) ;

/// @brief Method LastIndexOfOrdinal addr 0x22aee98 size 0x134 virtual false final false
 int32_t LastIndexOfOrdinal(::StringW s, ::StringW target, int32_t start, int32_t length) ;

/// @brief Method LastIndexOfSortKey addr 0x22aefcc size 0xa4 virtual false final false
 int32_t LastIndexOfSortKey(::StringW s, int32_t start, int32_t orgStart, int32_t length, void* sortkey, int32_t ti, bool noLv4, ByRef<::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__Context> ctx) ;

/// @brief Method LastIndexOf addr 0x22ae978 size 0x520 virtual false final false
 int32_t LastIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, void* targetSortKey, ByRef<::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__Context> ctx) ;

/// @brief Method MatchesForward addr 0x22ae7c0 size 0x1b8 virtual false final false
 bool MatchesForward(::StringW s, ByRef<int32_t> idx, int32_t end, int32_t ti, void* sortkey, bool noLv4, ByRef<::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__Context> ctx) ;

/// @brief Method MatchesForwardCore addr 0x22af234 size 0x354 virtual false final false
 bool MatchesForwardCore(::StringW s, ByRef<int32_t> idx, int32_t end, int32_t ti, void* sortkey, bool noLv4, ::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__ExtenderType ext, ByRef<::Mono::Globalization::Unicode::Contraction> ct, ByRef<::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__Context> ctx) ;

/// @brief Method MatchesPrimitive addr 0x22af588 size 0x22c virtual false final false
 bool MatchesPrimitive(::System::Globalization::CompareOptions opt, void* source, int32_t si, ::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__ExtenderType ext, void* target, int32_t ti, bool noLv4) ;

/// @brief Method MatchesBackward addr 0x22af070 size 0x1c4 virtual false final false
 bool MatchesBackward(::StringW s, ByRef<int32_t> idx, int32_t end, int32_t orgStart, int32_t ti, void* sortkey, bool noLv4, ByRef<::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__Context> ctx) ;

/// @brief Method MatchesBackwardCore addr 0x22af7b4 size 0x498 virtual false final false
 bool MatchesBackwardCore(::StringW s, ByRef<int32_t> idx, int32_t end, int32_t orgStart, int32_t ti, void* sortkey, bool noLv4, ::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__ExtenderType ext, ByRef<::Mono::Globalization::Unicode::Contraction> ct, ByRef<::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__Context> ctx) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Globalization::Unicode
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__ExtenderType, "Mono.Globalization.Unicode", "SimpleCollator/ExtenderType");
NEED_NO_BOX(::Mono::Globalization::Unicode::SimpleCollator);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::SimpleCollator, "Mono.Globalization.Unicode", "SimpleCollator");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__Context, "Mono.Globalization.Unicode", "SimpleCollator/Context");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__Escape, "Mono.Globalization.Unicode", "SimpleCollator/Escape");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::____Mono__Globalization__Unicode__SimpleCollator__PreviousInfo, "Mono.Globalization.Unicode", "SimpleCollator/PreviousInfo");
