#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Globalization {
class CodePageDataItem;
}
// Type: System.Globalization::CodePageDataItem
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3699))
// CS Name: System.Globalization.CodePageDataItem
class CORDL_TYPE CodePageDataItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CodePageDataItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "CodePageDataItem", modifiers: " const&", def_value: None }]
constexpr CodePageDataItem(CodePageDataItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CodePageDataItem", modifiers: "&&", def_value: None }]
constexpr CodePageDataItem(CodePageDataItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CodePageDataItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CodePageDataItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CodePageDataItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CodePageDataItem& operator=(CodePageDataItem&& o) noexcept = default;
  constexpr CodePageDataItem& operator=(CodePageDataItem const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_dataIndex, put=__set_m_dataIndex))  m_dataIndex;

constexpr void __set_m_dataIndex(int32_t value) ;

constexpr int32_t __get_m_dataIndex() const;

 int32_t __declspec(property(get=__get_m_uiFamilyCodePage, put=__set_m_uiFamilyCodePage))  m_uiFamilyCodePage;

constexpr void __set_m_uiFamilyCodePage(int32_t value) ;

constexpr int32_t __get_m_uiFamilyCodePage() const;

 ::StringW __declspec(property(get=__get_m_webName, put=__set_m_webName))  m_webName;

constexpr void __set_m_webName(::StringW value) ;

constexpr ::StringW __get_m_webName() const;

 uint32_t __declspec(property(get=__get_m_flags, put=__set_m_flags))  m_flags;

constexpr void __set_m_flags(uint32_t value) ;

constexpr uint32_t __get_m_flags() const;

static ::ArrayW<char16_t> __declspec(property(get=__get_sep, put=__set_sep))  sep;

static void __set_sep(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_sep() ;


// Properties

 ::StringW __declspec(property(get=get_WebName))  WebName;


// Methods

// Ctor Parameters [CppParam { name: "dataIndex", ty: "int32_t", modifiers: "", def_value: None }]
explicit CodePageDataItem(int32_t dataIndex) ;

/// @brief Method .ctor addr 0x23fddcc size 0xa4 virtual false final false
 void _ctor(int32_t dataIndex) ;

/// @brief Method CreateString addr 0x23fde70 size 0xb4 virtual false final false
static ::StringW CreateString(::StringW pStrings, uint32_t index) ;

/// @brief Method get_WebName addr 0x23fdf24 size 0xbc virtual false final false
 ::StringW get_WebName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::CodePageDataItem);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CodePageDataItem, "System.Globalization", "CodePageDataItem");
