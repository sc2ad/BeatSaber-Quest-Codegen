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
struct UnicodeCategory;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexCharClass;
}
namespace System::Text::RegularExpressions {
class ____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer;
}
namespace System::Text::RegularExpressions {
struct ____System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping;
}
namespace System::Text::RegularExpressions {
struct ____System__Text__RegularExpressions__RegexCharClass__SingleRange;
}
// Type: ::LowerCaseMapping
namespace System::Text::RegularExpressions {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7766))
// CS Name: System.Text.RegularExpressions.RegexCharClass::LowerCaseMapping
struct CORDL_TYPE ____System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "ChMin", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "ChMax", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "LcOp", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Data", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping(char16_t ChMin, char16_t ChMax, int32_t LcOp, int32_t Data) noexcept;


                    constexpr ____System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping(____System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping const&) = default;
                    constexpr ____System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping(____System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping&&) = default;
                    constexpr ____System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping& operator=(____System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping& operator=(____System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 char16_t __declspec(property(get=__get_ChMin, put=__set_ChMin))  ChMin;

constexpr void __set_ChMin(char16_t value) ;

constexpr char16_t __get_ChMin() const;

 char16_t __declspec(property(get=__get_ChMax, put=__set_ChMax))  ChMax;

constexpr void __set_ChMax(char16_t value) ;

constexpr char16_t __get_ChMax() const;

 int32_t __declspec(property(get=__get_LcOp, put=__set_LcOp))  LcOp;

constexpr void __set_LcOp(int32_t value) ;

constexpr int32_t __get_LcOp() const;

 int32_t __declspec(property(get=__get_Data, put=__set_Data))  Data;

constexpr void __set_Data(int32_t value) ;

constexpr int32_t __get_Data() const;


// Methods

/// @brief Method .ctor addr 0x27cb97c size 0x10 virtual false final false
 void _ctor(char16_t chMin, char16_t chMax, int32_t lcOp, int32_t data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
// Type: ::SingleRangeComparer
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7767))
// CS Name: System.Text.RegularExpressions.RegexCharClass::SingleRangeComparer
class CORDL_TYPE ____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRange>
constexpr operator  ::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRange>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer", modifiers: " const&", def_value: None }]
constexpr ____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer(____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer", modifiers: "&&", def_value: None }]
constexpr ____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer(____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer& operator=(____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer&& o) noexcept = default;
  constexpr ____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer& operator=(____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer const& o) noexcept = default;
                


// Fields

static ::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer value) ;

static ::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer __get_Instance() ;


// Methods

// Ctor Parameters []
explicit ____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer() ;

/// @brief Method .ctor addr 0x27cb98c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Compare addr 0x27cb994 size 0x20 virtual true final true
 int32_t Compare(::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRange x, ::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRange y) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
// Type: ::SingleRange
namespace System::Text::RegularExpressions {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7768))
// CS Name: System.Text.RegularExpressions.RegexCharClass::SingleRange
struct CORDL_TYPE ____System__Text__RegularExpressions__RegexCharClass__SingleRange : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "First", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "Last", ty: "char16_t", modifiers: "", def_value: None }]
constexpr ____System__Text__RegularExpressions__RegexCharClass__SingleRange(char16_t First, char16_t Last) noexcept;


                    constexpr ____System__Text__RegularExpressions__RegexCharClass__SingleRange(____System__Text__RegularExpressions__RegexCharClass__SingleRange const&) = default;
                    constexpr ____System__Text__RegularExpressions__RegexCharClass__SingleRange(____System__Text__RegularExpressions__RegexCharClass__SingleRange&&) = default;
                    constexpr ____System__Text__RegularExpressions__RegexCharClass__SingleRange& operator=(____System__Text__RegularExpressions__RegexCharClass__SingleRange const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Text__RegularExpressions__RegexCharClass__SingleRange& operator=(____System__Text__RegularExpressions__RegexCharClass__SingleRange&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Text__RegularExpressions__RegexCharClass__SingleRange(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 char16_t __declspec(property(get=__get_First, put=__set_First))  First;

constexpr void __set_First(char16_t value) ;

constexpr char16_t __get_First() const;

 char16_t __declspec(property(get=__get_Last, put=__set_Last))  Last;

constexpr void __set_Last(char16_t value) ;

constexpr char16_t __get_Last() const;


// Methods

/// @brief Method .ctor addr 0x27cba18 size 0xc virtual false final false
 void _ctor(char16_t first, char16_t last) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
// Type: System.Text.RegularExpressions::RegexCharClass
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7769))
// CS Name: System.Text.RegularExpressions.RegexCharClass
class CORDL_TYPE RegexCharClass : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SingleRange = ::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRange;

using SingleRangeComparer = ::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer;

using LowerCaseMapping = ::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RegexCharClass() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexCharClass", modifiers: " const&", def_value: None }]
constexpr RegexCharClass(RegexCharClass const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexCharClass", modifiers: "&&", def_value: None }]
constexpr RegexCharClass(RegexCharClass&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegexCharClass(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RegexCharClass& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegexCharClass& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegexCharClass& operator=(RegexCharClass&& o) noexcept = default;
  constexpr RegexCharClass& operator=(RegexCharClass const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_s_internalRegexIgnoreCase, put=__set_s_internalRegexIgnoreCase))  s_internalRegexIgnoreCase;

static void __set_s_internalRegexIgnoreCase(::StringW value) ;

static ::StringW __get_s_internalRegexIgnoreCase() ;

static ::StringW __declspec(property(get=__get_s_space, put=__set_s_space))  s_space;

static void __set_s_space(::StringW value) ;

static ::StringW __get_s_space() ;

static ::StringW __declspec(property(get=__get_s_notSpace, put=__set_s_notSpace))  s_notSpace;

static void __set_s_notSpace(::StringW value) ;

static ::StringW __get_s_notSpace() ;

static ::StringW __declspec(property(get=__get_s_word, put=__set_s_word))  s_word;

static void __set_s_word(::StringW value) ;

static ::StringW __get_s_word() ;

static ::StringW __declspec(property(get=__get_s_notWord, put=__set_s_notWord))  s_notWord;

static void __set_s_notWord(::StringW value) ;

static ::StringW __get_s_notWord() ;

static ::StringW __declspec(property(get=__get_SpaceClass, put=__set_SpaceClass))  SpaceClass;

static void __set_SpaceClass(::StringW value) ;

static ::StringW __get_SpaceClass() ;

static ::StringW __declspec(property(get=__get_NotSpaceClass, put=__set_NotSpaceClass))  NotSpaceClass;

static void __set_NotSpaceClass(::StringW value) ;

static ::StringW __get_NotSpaceClass() ;

static ::StringW __declspec(property(get=__get_WordClass, put=__set_WordClass))  WordClass;

static void __set_WordClass(::StringW value) ;

static ::StringW __get_WordClass() ;

static ::StringW __declspec(property(get=__get_NotWordClass, put=__set_NotWordClass))  NotWordClass;

static void __set_NotWordClass(::StringW value) ;

static ::StringW __get_NotWordClass() ;

static ::StringW __declspec(property(get=__get_DigitClass, put=__set_DigitClass))  DigitClass;

static void __set_DigitClass(::StringW value) ;

static ::StringW __get_DigitClass() ;

static ::StringW __declspec(property(get=__get_NotDigitClass, put=__set_NotDigitClass))  NotDigitClass;

static void __set_NotDigitClass(::StringW value) ;

static ::StringW __get_NotDigitClass() ;

static ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get_s_definedCategories, put=__set_s_definedCategories))  s_definedCategories;

static void __set_s_definedCategories(::System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

static ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get_s_definedCategories() ;

static ::ArrayW<::ArrayW<::StringW>> __declspec(property(get=__get_s_propTable, put=__set_s_propTable))  s_propTable;

static void __set_s_propTable(::ArrayW<::ArrayW<::StringW>> value) ;

static ::ArrayW<::ArrayW<::StringW>> __get_s_propTable() ;

static ::ArrayW<::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping> __declspec(property(get=__get_s_lcTable, put=__set_s_lcTable))  s_lcTable;

static void __set_s_lcTable(::ArrayW<::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping> value) ;

static ::ArrayW<::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping> __get_s_lcTable() ;

 ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRange> __declspec(property(get=__get__rangelist, put=__set__rangelist))  _rangelist;

constexpr void __set__rangelist(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRange> value) ;

constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRange> __get__rangelist() const;

 ::System::Text::StringBuilder __declspec(property(get=__get__categories, put=__set__categories))  _categories;

constexpr void __set__categories(::System::Text::StringBuilder value) ;

constexpr ::System::Text::StringBuilder __get__categories() const;

 bool __declspec(property(get=__get__canonical, put=__set__canonical))  _canonical;

constexpr void __set__canonical(bool value) ;

constexpr bool __get__canonical() const;

 bool __declspec(property(get=__get__negate, put=__set__negate))  _negate;

constexpr void __set__negate(bool value) ;

constexpr bool __get__negate() const;

 ::System::Text::RegularExpressions::RegexCharClass __declspec(property(get=__get__subtractor, put=__set__subtractor))  _subtractor;

constexpr void __set__subtractor(::System::Text::RegularExpressions::RegexCharClass value) ;

constexpr ::System::Text::RegularExpressions::RegexCharClass __get__subtractor() const;


// Properties

 bool __declspec(property(get=get_CanMerge))  CanMerge;

 bool __declspec(property(put=set_Negate))  Negate;


// Methods

// Ctor Parameters []
explicit RegexCharClass() ;

/// @brief Method .ctor addr 0x27c24d0 size 0xbc virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "negate", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ranges", ty: "::System::Collections::Generic::List_1<::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRange>", modifiers: "", def_value: None }, CppParam { name: "categories", ty: "::System::Text::StringBuilder", modifiers: "", def_value: None }, CppParam { name: "subtraction", ty: "::System::Text::RegularExpressions::RegexCharClass", modifiers: "", def_value: None }]
explicit RegexCharClass(bool negate, ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRange> ranges, ::System::Text::StringBuilder categories, ::System::Text::RegularExpressions::RegexCharClass subtraction) ;

/// @brief Method .ctor addr 0x27c258c size 0x4c virtual false final false
 void _ctor(bool negate, ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRange> ranges, ::System::Text::StringBuilder categories, ::System::Text::RegularExpressions::RegexCharClass subtraction) ;

/// @brief Method get_CanMerge addr 0x27c25d8 size 0x20 virtual false final false
 bool get_CanMerge() ;

/// @brief Method set_Negate addr 0x27c25f8 size 0xc virtual false final false
 void set_Negate(bool value) ;

/// @brief Method AddChar addr 0x27c2604 size 0x8 virtual false final false
 void AddChar(char16_t c) ;

/// @brief Method AddCharClass addr 0x27c272c size 0x174 virtual false final false
 void AddCharClass(::System::Text::RegularExpressions::RegexCharClass cc) ;

/// @brief Method AddSet addr 0x27c2948 size 0x22c virtual false final false
 void AddSet(::StringW set) ;

/// @brief Method AddSubtraction addr 0x27c2b74 size 0x8 virtual false final false
 void AddSubtraction(::System::Text::RegularExpressions::RegexCharClass sub) ;

/// @brief Method AddRange addr 0x27c260c size 0x120 virtual false final false
 void AddRange(char16_t first, char16_t last) ;

/// @brief Method AddCategoryFromName addr 0x27c2b7c size 0x210 virtual false final false
 void AddCategoryFromName(::StringW categoryName, bool invert, bool caseInsensitive, ::StringW pattern) ;

/// @brief Method AddCategory addr 0x27c3078 size 0x1c virtual false final false
 void AddCategory(::StringW category) ;

/// @brief Method AddLowercase addr 0x27c3094 size 0x13c virtual false final false
 void AddLowercase(::System::Globalization::CultureInfo culture) ;

/// @brief Method AddLowercaseRange addr 0x27c31d0 size 0x230 virtual false final false
 void AddLowercaseRange(char16_t chMin, char16_t chMax, ::System::Globalization::CultureInfo culture) ;

/// @brief Method AddWord addr 0x27c3400 size 0xf4 virtual false final false
 void AddWord(bool ecma, bool negate) ;

/// @brief Method AddSpace addr 0x27c34f4 size 0xf4 virtual false final false
 void AddSpace(bool ecma, bool negate) ;

/// @brief Method AddDigit addr 0x27c35e8 size 0xb4 virtual false final false
 void AddDigit(bool ecma, bool negate, ::StringW pattern) ;

/// @brief Method SingletonChar addr 0x27c369c size 0x18 virtual false final false
static char16_t SingletonChar(::StringW set) ;

/// @brief Method IsMergeable addr 0x27c36b4 size 0x9c virtual false final false
static bool IsMergeable(::StringW charClass) ;

/// @brief Method IsEmpty addr 0x27c37d0 size 0xc0 virtual false final false
static bool IsEmpty(::StringW charClass) ;

/// @brief Method IsSingleton addr 0x27c3890 size 0x10c virtual false final false
static bool IsSingleton(::StringW set) ;

/// @brief Method IsSingletonInverse addr 0x27c399c size 0x110 virtual false final false
static bool IsSingletonInverse(::StringW set) ;

/// @brief Method IsSubtraction addr 0x27c3778 size 0x58 virtual false final false
static bool IsSubtraction(::StringW charClass) ;

/// @brief Method IsNegated addr 0x27c3750 size 0x28 virtual false final false
static bool IsNegated(::StringW set) ;

/// @brief Method IsECMAWordChar addr 0x27c3aac size 0x6c virtual false final false
static bool IsECMAWordChar(char16_t ch) ;

/// @brief Method IsWordChar addr 0x27c3b80 size 0x80 virtual false final false
static bool IsWordChar(char16_t ch) ;

/// @brief Method CharInClass addr 0x27c3b18 size 0x68 virtual false final false
static bool CharInClass(char16_t ch, ::StringW set) ;

/// @brief Method CharInClassRecursive addr 0x27c3c00 size 0x128 virtual false final false
static bool CharInClassRecursive(char16_t ch, ::StringW set, int32_t start) ;

/// @brief Method CharInClassInternal addr 0x27c3d28 size 0x110 virtual false final false
static bool CharInClassInternal(char16_t ch, ::StringW set, int32_t start, int32_t mySetLength, int32_t myCategoryLength) ;

/// @brief Method CharInCategory addr 0x27c3e38 size 0x188 virtual false final false
static bool CharInCategory(char16_t ch, ::StringW set, int32_t start, int32_t mySetLength, int32_t myCategoryLength) ;

/// @brief Method CharInCategoryGroup addr 0x27c3fc0 size 0xd0 virtual false final false
static bool CharInCategoryGroup(char16_t ch, ::System::Globalization::UnicodeCategory chcategory, ::StringW category, ByRef<int32_t> i) ;

/// @brief Method NegateCategory addr 0x27c2d8c size 0x88 virtual false final false
static ::StringW NegateCategory(::StringW category) ;

/// @brief Method Parse addr 0x27c4090 size 0x58 virtual false final false
static ::System::Text::RegularExpressions::RegexCharClass Parse(::StringW charClass) ;

/// @brief Method ParseRecursive addr 0x27c40e8 size 0x288 virtual false final false
static ::System::Text::RegularExpressions::RegexCharClass ParseRecursive(::StringW charClass, int32_t start) ;

/// @brief Method RangeCount addr 0x27c28a0 size 0x48 virtual false final false
 int32_t RangeCount() ;

/// @brief Method ToStringClass addr 0x27c4370 size 0x19c virtual false final false
 ::StringW ToStringClass() ;

/// @brief Method GetRangeAt addr 0x27c28e8 size 0x60 virtual false final false
 ::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRange GetRangeAt(int32_t i) ;

/// @brief Method Canonicalize addr 0x27c450c size 0x23c virtual false final false
 void Canonicalize() ;

/// @brief Method SetFromProperty addr 0x27c2e14 size 0x264 virtual false final false
static ::StringW SetFromProperty(::StringW capname, bool invert, ::StringW pattern) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
} // end anonymous namespace
NEED_NO_BOX(::System::Text::RegularExpressions::RegexCharClass);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexCharClass, "System.Text.RegularExpressions", "RegexCharClass");
NEED_NO_BOX(::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer, "System.Text.RegularExpressions", "RegexCharClass/SingleRangeComparer");
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping, "System.Text.RegularExpressions", "RegexCharClass/LowerCaseMapping");
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::____System__Text__RegularExpressions__RegexCharClass__SingleRange, "System.Text.RegularExpressions", "RegexCharClass/SingleRange");
