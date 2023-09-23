#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
class SortKey;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Globalization {
class ISimpleCollator;
}
namespace System::Globalization {
struct CompareOptions;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Globalization {
class SortVersion;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Globalization {
class CompareInfo;
}
// Type: System.Globalization::CompareInfo
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3643))
// CS Name: System.Globalization.CompareInfo
class CORDL_TYPE CompareInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~CompareInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "CompareInfo", modifiers: " const&", def_value: None }]
constexpr CompareInfo(CompareInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CompareInfo", modifiers: "&&", def_value: None }]
constexpr CompareInfo(CompareInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CompareInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CompareInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CompareInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CompareInfo& operator=(CompareInfo&& o) noexcept = default;
  constexpr CompareInfo& operator=(CompareInfo const& o) noexcept = default;
                


// Fields

/// @brief Field ValidIndexMaskOffFlags offset 0
static System::Globalization::CompareOptions const ValidIndexMaskOffFlags;

/// @brief Field ValidCompareMaskOffFlags offset 0
static System::Globalization::CompareOptions const ValidCompareMaskOffFlags;

/// @brief Field ValidHashCodeOfStringMaskOffFlags offset 0
static System::Globalization::CompareOptions const ValidHashCodeOfStringMaskOffFlags;

/// @brief Field ValidSortkeyCtorMaskOffFlags offset 0
static System::Globalization::CompareOptions const ValidSortkeyCtorMaskOffFlags;

static System::Globalization::CompareInfo __declspec(property(get=__get_Invariant, put=__set_Invariant))  Invariant;

static void __set_Invariant(System::Globalization::CompareInfo value) ;

static System::Globalization::CompareInfo __get_Invariant() ;

 ::StringW __declspec(property(get=__get_m_name, put=__set_m_name))  m_name;

constexpr void __set_m_name(::StringW value) ;

constexpr ::StringW __get_m_name() const;

 ::StringW __declspec(property(get=__get__sortName, put=__set__sortName))  _sortName;

constexpr void __set__sortName(::StringW value) ;

constexpr ::StringW __get__sortName() const;

 System::Globalization::SortVersion __declspec(property(get=__get_m_SortVersion, put=__set_m_SortVersion))  m_SortVersion;

constexpr void __set_m_SortVersion(System::Globalization::SortVersion value) ;

constexpr System::Globalization::SortVersion __get_m_SortVersion() const;

 int32_t __declspec(property(get=__get_culture, put=__set_culture))  culture;

constexpr void __set_culture(int32_t value) ;

constexpr int32_t __get_culture() const;

 System::Globalization::ISimpleCollator __declspec(property(get=__get_collator, put=__set_collator))  collator;

constexpr void __set_collator(System::Globalization::ISimpleCollator value) ;

constexpr System::Globalization::ISimpleCollator __get_collator() const;

static System::Collections::Generic::Dictionary_2<::StringW,System::Globalization::ISimpleCollator> __declspec(property(get=__get_collators, put=__set_collators))  collators;

static void __set_collators(System::Collections::Generic::Dictionary_2<::StringW,System::Globalization::ISimpleCollator> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,System::Globalization::ISimpleCollator> __get_collators() ;

static bool __declspec(property(get=__get_managedCollation, put=__set_managedCollation))  managedCollation;

static void __set_managedCollation(bool value) ;

static bool __get_managedCollation() ;

static bool __declspec(property(get=__get_managedCollationChecked, put=__set_managedCollationChecked))  managedCollationChecked;

static void __set_managedCollationChecked(bool value) ;

static bool __get_managedCollationChecked() ;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

static bool __declspec(property(get=get_UseManagedCollation))  UseManagedCollation;


// Methods

/// @brief Method InvariantIndexOf addr 0x23d88e8 size 0xc4 virtual false final false
static int32_t InvariantIndexOf(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase) ;

/// @brief Method InvariantLastIndexOf addr 0x23d8cd8 size 0xcc virtual false final false
static int32_t InvariantLastIndexOf(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase) ;

/// @brief Method InvariantFindString addr 0x23d89ac size 0x32c virtual false final false
static int32_t InvariantFindString(void* source, int32_t sourceCount, void* value, int32_t valueCount, bool ignoreCase, bool start) ;

/// @brief Method InvariantToUpper addr 0x23d8da4 size 0x18 virtual false final false
static char16_t InvariantToUpper(char16_t c) ;

/// @brief Method InvariantCreateSortKey addr 0x23d8dbc size 0x29c virtual false final false
 System::Globalization::SortKey InvariantCreateSortKey(::StringW source, System::Globalization::CompareOptions options) ;

// Ctor Parameters [CppParam { name: "culture", ty: "System::Globalization::CultureInfo", modifiers: "", def_value: None }]
explicit CompareInfo(System::Globalization::CultureInfo culture) ;

/// @brief Method .ctor addr 0x23d9058 size 0x34 virtual false final false
 void _ctor(System::Globalization::CultureInfo culture) ;

/// @brief Method GetCompareInfo addr 0x23d90a8 size 0xbc virtual false final false
static System::Globalization::CompareInfo GetCompareInfo(::StringW name) ;

/// @brief Method OnDeserializing addr 0x23d9164 size 0x8 virtual false final false
 void OnDeserializing(System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x23d916c size 0x4 virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method OnDeserialized addr 0x23d9214 size 0x4 virtual false final false
 void OnDeserialized(System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method OnDeserialized addr 0x23d9170 size 0xa4 virtual false final false
 void OnDeserialized() ;

/// @brief Method OnSerializing addr 0x23d9218 size 0x8c virtual false final false
 void OnSerializing(System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method get_Name addr 0x23d92a4 size 0x8c virtual true final false
 ::StringW get_Name() ;

/// @brief Method Compare addr 0x23d9330 size 0x10 virtual true final false
 int32_t Compare(::StringW string1, ::StringW string2) ;

/// @brief Method Compare addr 0x23d9340 size 0x2a8 virtual true final false
 int32_t Compare(::StringW string1, ::StringW string2, System::Globalization::CompareOptions options) ;

/// @brief Method Compare addr 0x23d98d8 size 0x3a0 virtual false final false
 int32_t Compare(System::ReadOnlySpan_1<char16_t> string1, ::StringW string2, System::Globalization::CompareOptions options) ;

/// @brief Method CompareOptionIgnoreCase addr 0x23d9cdc size 0x13c virtual false final false
 int32_t CompareOptionIgnoreCase(System::ReadOnlySpan_1<char16_t> string1, System::ReadOnlySpan_1<char16_t> string2) ;

/// @brief Method Compare addr 0x23d9f08 size 0x560 virtual true final false
 int32_t Compare(::StringW string1, int32_t offset1, int32_t length1, ::StringW string2, int32_t offset2, int32_t length2, System::Globalization::CompareOptions options) ;

/// @brief Method CompareOrdinalIgnoreCase addr 0x23da468 size 0x174 virtual false final false
static int32_t CompareOrdinalIgnoreCase(::StringW strA, int32_t indexA, int32_t lengthA, ::StringW strB, int32_t indexB, int32_t lengthB) ;

/// @brief Method CompareOrdinalIgnoreCase addr 0x23d95e8 size 0x1f4 virtual false final false
static int32_t CompareOrdinalIgnoreCase(System::ReadOnlySpan_1<char16_t> strA, System::ReadOnlySpan_1<char16_t> strB) ;

/// @brief Method IsPrefix addr 0x23da73c size 0x224 virtual true final false
 bool IsPrefix(::StringW source, ::StringW prefix, System::Globalization::CompareOptions options) ;

/// @brief Method IsSuffix addr 0x23daad4 size 0x224 virtual true final false
 bool IsSuffix(::StringW source, ::StringW suffix, System::Globalization::CompareOptions options) ;

/// @brief Method IsSuffix addr 0x23dae68 size 0x4 virtual false final false
 bool IsSuffix(System::ReadOnlySpan_1<char16_t> source, System::ReadOnlySpan_1<char16_t> suffix, System::Globalization::CompareOptions options) ;

/// @brief Method IndexOf addr 0x23daecc size 0x70 virtual true final false
 int32_t IndexOf(::StringW source, ::StringW value, System::Globalization::CompareOptions options) ;

/// @brief Method IndexOf addr 0x23daf3c size 0x2c4 virtual true final false
 int32_t IndexOf(::StringW source, ::StringW value, int32_t startIndex, int32_t count, System::Globalization::CompareOptions options) ;

/// @brief Method IndexOfOrdinal addr 0x23db200 size 0x100 virtual false final false
 int32_t IndexOfOrdinal(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase) ;

/// @brief Method LastIndexOf addr 0x23db37c size 0x74 virtual true final false
 int32_t LastIndexOf(::StringW source, ::StringW value, System::Globalization::CompareOptions options) ;

/// @brief Method LastIndexOf addr 0x23db3f0 size 0x35c virtual true final false
 int32_t LastIndexOf(::StringW source, ::StringW value, int32_t startIndex, int32_t count, System::Globalization::CompareOptions options) ;

/// @brief Method LastIndexOfOrdinal addr 0x23db74c size 0x100 virtual false final false
 int32_t LastIndexOfOrdinal(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase) ;

/// @brief Method GetSortKey addr 0x23db884 size 0xc8 virtual true final false
 System::Globalization::SortKey GetSortKey(::StringW source, System::Globalization::CompareOptions options) ;

/// @brief Method Equals addr 0x23dba0c size 0xc0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x23dbacc size 0x28 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method GetIgnoreCaseHash addr 0x23dbaf4 size 0x47c virtual false final false
static int32_t GetIgnoreCaseHash(::StringW source) ;

/// @brief Method GetHashCodeOfString addr 0x23dbf70 size 0x1a8 virtual false final false
 int32_t GetHashCodeOfString(::StringW source, System::Globalization::CompareOptions options) ;

/// @brief Method GetHashCode addr 0x23dc144 size 0x104 virtual true final false
 int32_t GetHashCode(::StringW source, System::Globalization::CompareOptions options) ;

/// @brief Method ToString addr 0x23dc248 size 0x60 virtual true final false
 ::StringW ToString() ;

/// @brief Method get_UseManagedCollation addr 0x23dc2a8 size 0x144 virtual false final false
static bool get_UseManagedCollation() ;

/// @brief Method GetCollator addr 0x23dc3ec size 0x334 virtual false final false
 System::Globalization::ISimpleCollator GetCollator() ;

/// @brief Method CreateSortKeyCore addr 0x23dc720 size 0x13c virtual false final false
 System::Globalization::SortKey CreateSortKeyCore(::StringW source, System::Globalization::CompareOptions options) ;

/// @brief Method internal_index_switch addr 0x23dc85c size 0x13c virtual false final false
 int32_t internal_index_switch(::StringW s1, int32_t sindex, int32_t count, ::StringW s2, System::Globalization::CompareOptions opt, bool first) ;

/// @brief Method internal_compare_switch addr 0x23d97dc size 0xfc virtual false final false
 int32_t internal_compare_switch(::StringW str1, int32_t offset1, int32_t length1, ::StringW str2, int32_t offset2, int32_t length2, System::Globalization::CompareOptions options) ;

/// @brief Method internal_compare_managed addr 0x23dcc2c size 0x100 virtual false final false
 int32_t internal_compare_managed(::StringW str1, int32_t offset1, int32_t length1, ::StringW str2, int32_t offset2, int32_t length2, System::Globalization::CompareOptions options) ;

/// @brief Method internal_index_managed addr 0x23dca4c size 0x12c virtual false final false
 int32_t internal_index_managed(::StringW s1, int32_t sindex, int32_t count, ::StringW s2, System::Globalization::CompareOptions opt, bool first) ;

/// @brief Method internal_compare_icall addr 0x23dcd2c size 0x4 virtual false final false
static int32_t internal_compare_icall(void* str1, int32_t length1, void* str2, int32_t length2, System::Globalization::CompareOptions options) ;

/// @brief Method internal_compare addr 0x23dcb78 size 0xb4 virtual false final false
static int32_t internal_compare(::StringW str1, int32_t offset1, int32_t length1, ::StringW str2, int32_t offset2, int32_t length2, System::Globalization::CompareOptions options) ;

/// @brief Method internal_index_icall addr 0x23dcd30 size 0x8 virtual false final false
static int32_t internal_index_icall(void* source, int32_t sindex, int32_t count, void* value, int32_t value_length, bool first) ;

/// @brief Method internal_index addr 0x23dc998 size 0xb4 virtual false final false
static int32_t internal_index(::StringW source, int32_t sindex, int32_t count, ::StringW value, bool first) ;

/// @brief Method InitSort addr 0x23d908c size 0x1c virtual false final false
 void InitSort(System::Globalization::CultureInfo culture) ;

/// @brief Method CompareStringOrdinalIgnoreCase addr 0x23da5dc size 0x160 virtual false final false
static int32_t CompareStringOrdinalIgnoreCase(void* pString1, int32_t length1, void* pString2, int32_t length2) ;

/// @brief Method IndexOfOrdinalCore addr 0x23db35c size 0x20 virtual false final false
static int32_t IndexOfOrdinalCore(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase) ;

/// @brief Method LastIndexOfOrdinalCore addr 0x23db864 size 0x20 virtual false final false
static int32_t LastIndexOfOrdinalCore(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase) ;

/// @brief Method LastIndexOfCore addr 0x23db84c size 0x18 virtual false final false
 int32_t LastIndexOfCore(::StringW source, ::StringW target, int32_t startIndex, int32_t count, System::Globalization::CompareOptions options) ;

/// @brief Method IndexOfCore addr 0x23db300 size 0x5c virtual false final false
 int32_t IndexOfCore(::StringW source, ::StringW target, int32_t startIndex, int32_t count, System::Globalization::CompareOptions options, void* matchLengthPtr) ;

/// @brief Method CompareString addr 0x23d9c78 size 0x64 virtual false final false
 int32_t CompareString(System::ReadOnlySpan_1<char16_t> string1, ::StringW string2, System::Globalization::CompareOptions options) ;

/// @brief Method CompareString addr 0x23d9e18 size 0xf0 virtual false final false
 int32_t CompareString(System::ReadOnlySpan_1<char16_t> string1, System::ReadOnlySpan_1<char16_t> string2, System::Globalization::CompareOptions options) ;

/// @brief Method CreateSortKey addr 0x23db94c size 0xc0 virtual false final false
 System::Globalization::SortKey CreateSortKey(::StringW source, System::Globalization::CompareOptions options) ;

/// @brief Method StartsWith addr 0x23da960 size 0x174 virtual false final false
 bool StartsWith(::StringW source, ::StringW prefix, System::Globalization::CompareOptions options) ;

/// @brief Method EndsWith addr 0x23dacf8 size 0x170 virtual false final false
 bool EndsWith(::StringW source, ::StringW suffix, System::Globalization::CompareOptions options) ;

/// @brief Method EndsWith addr 0x23dae6c size 0x60 virtual false final false
 bool EndsWith(System::ReadOnlySpan_1<char16_t> source, System::ReadOnlySpan_1<char16_t> suffix, System::Globalization::CompareOptions options) ;

/// @brief Method GetHashCodeOfStringCore addr 0x23dc118 size 0x2c virtual false final false
 int32_t GetHashCodeOfStringCore(::StringW source, System::Globalization::CompareOptions options) ;

// Ctor Parameters []
explicit CompareInfo() ;

/// @brief Method .ctor addr 0x23dcdc0 size 0x1038 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::CompareInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CompareInfo, "System.Globalization", "CompareInfo");
