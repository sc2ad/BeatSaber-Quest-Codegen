#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Globalization {
class CodePageDataItem;
}
namespace System::Globalization {
struct InternalCodePageDataItem;
}
namespace System::Globalization {
struct InternalEncodingDataItem;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace System::Globalization {
class EncodingTable;
}
// Type: System.Globalization::EncodingTable
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3700))
// CS Name: System.Globalization.EncodingTable
class CORDL_TYPE EncodingTable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EncodingTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncodingTable", modifiers: " const&", def_value: None }]
constexpr EncodingTable(EncodingTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncodingTable", modifiers: "&&", def_value: None }]
constexpr EncodingTable(EncodingTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncodingTable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EncodingTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncodingTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncodingTable& operator=(EncodingTable&& o) noexcept = default;
  constexpr EncodingTable& operator=(EncodingTable const& o) noexcept = default;
                


// Fields

static ::ArrayW<::System::Globalization::InternalEncodingDataItem> __declspec(property(get=__get_encodingDataPtr, put=__set_encodingDataPtr))  encodingDataPtr;

static void __set_encodingDataPtr(::ArrayW<::System::Globalization::InternalEncodingDataItem> value) ;

static ::ArrayW<::System::Globalization::InternalEncodingDataItem> __get_encodingDataPtr() ;

static ::ArrayW<::System::Globalization::InternalCodePageDataItem> __declspec(property(get=__get_codePageDataPtr, put=__set_codePageDataPtr))  codePageDataPtr;

static void __set_codePageDataPtr(::ArrayW<::System::Globalization::InternalCodePageDataItem> value) ;

static ::ArrayW<::System::Globalization::InternalCodePageDataItem> __get_codePageDataPtr() ;

static int32_t __declspec(property(get=__get_lastEncodingItem, put=__set_lastEncodingItem))  lastEncodingItem;

static void __set_lastEncodingItem(int32_t value) ;

static int32_t __get_lastEncodingItem() ;

static ::System::Collections::Generic::Dictionary_2<::StringW,int32_t> __declspec(property(get=__get_hashByName, put=__set_hashByName))  hashByName;

static void __set_hashByName(::System::Collections::Generic::Dictionary_2<::StringW,int32_t> value) ;

static ::System::Collections::Generic::Dictionary_2<::StringW,int32_t> __get_hashByName() ;

static ::System::Collections::Generic::Dictionary_2<int32_t,::System::Globalization::CodePageDataItem> __declspec(property(get=__get_hashByCodePage, put=__set_hashByCodePage))  hashByCodePage;

static void __set_hashByCodePage(::System::Collections::Generic::Dictionary_2<int32_t,::System::Globalization::CodePageDataItem> value) ;

static ::System::Collections::Generic::Dictionary_2<int32_t,::System::Globalization::CodePageDataItem> __get_hashByCodePage() ;


// Methods

/// @brief Method GetNumEncodingItems addr 0x23fe064 size 0x64 virtual false final false
static int32_t GetNumEncodingItems() ;

/// @brief Method ENC addr 0x23fe0c8 size 0x8 virtual false final false
static ::System::Globalization::InternalEncodingDataItem ENC(::StringW name, uint16_t cp) ;

/// @brief Method MapCodePageDataItem addr 0x23fe0d0 size 0x14 virtual false final false
static ::System::Globalization::InternalCodePageDataItem MapCodePageDataItem(uint16_t cp, uint16_t fcp, ::StringW names, uint32_t flags) ;

/// @brief Method internalGetCodePageFromName addr 0x240359c size 0x254 virtual false final false
static int32_t internalGetCodePageFromName(::StringW name) ;

/// @brief Method GetCodePageFromName addr 0x24037f0 size 0x284 virtual false final false
static int32_t GetCodePageFromName(::StringW name) ;

/// @brief Method GetCodePageDataItem addr 0x2403a74 size 0x2e8 virtual false final false
static ::System::Globalization::CodePageDataItem GetCodePageDataItem(int32_t codepage) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
} // end anonymous namespace
NEED_NO_BOX(::System::Globalization::EncodingTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::EncodingTable, "System.Globalization", "EncodingTable");
