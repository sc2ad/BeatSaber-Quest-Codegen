#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Globalization {
struct CompareOptions;
}
// Forward declare root types
namespace System::Globalization {
class SortKey;
}
// Type: System.Globalization::SortKey
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3695))
// CS Name: System.Globalization.SortKey
class CORDL_TYPE SortKey : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SortKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "SortKey", modifiers: " const&", def_value: None }]
constexpr SortKey(SortKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SortKey", modifiers: "&&", def_value: None }]
constexpr SortKey(SortKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SortKey(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SortKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SortKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SortKey& operator=(SortKey&& o) noexcept = default;
  constexpr SortKey& operator=(SortKey const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::StringW value) ;

constexpr ::StringW __get_source() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_key() const;

 System::Globalization::CompareOptions __declspec(property(get=__get_options, put=__set_options))  options;

constexpr void __set_options(System::Globalization::CompareOptions value) ;

constexpr System::Globalization::CompareOptions __get_options() const;

 int32_t __declspec(property(get=__get_lcid, put=__set_lcid))  lcid;

constexpr void __set_lcid(int32_t value) ;

constexpr int32_t __get_lcid() const;


// Properties

 ::StringW __declspec(property(get=get_OriginalString))  OriginalString;

 ::ArrayW<uint8_t> __declspec(property(get=get_KeyData))  KeyData;


// Methods

/// @brief Method Compare addr 0x23fc9e0 size 0x174 virtual false final false
static int32_t Compare(System::Globalization::SortKey sortkey1, System::Globalization::SortKey sortkey2) ;

// Ctor Parameters [CppParam { name: "lcid", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "source", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "opt", ty: "System::Globalization::CompareOptions", modifiers: "", def_value: None }]
explicit SortKey(int32_t lcid, ::StringW source, System::Globalization::CompareOptions opt) ;

/// @brief Method .ctor addr 0x23fcb54 size 0xd4 virtual false final false
 void _ctor(int32_t lcid, ::StringW source, System::Globalization::CompareOptions opt) ;

// Ctor Parameters [CppParam { name: "lcid", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "source", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "opt", ty: "System::Globalization::CompareOptions", modifiers: "", def_value: None }, CppParam { name: "lv1Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lv2Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lv3Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "kanaSmallLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "markTypeLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "katakanaLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "kanaWidthLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "identLength", ty: "int32_t", modifiers: "", def_value: None }]
explicit SortKey(int32_t lcid, ::StringW source, ::ArrayW<uint8_t> buffer, System::Globalization::CompareOptions opt, int32_t lv1Length, int32_t lv2Length, int32_t lv3Length, int32_t kanaSmallLength, int32_t markTypeLength, int32_t katakanaLength, int32_t kanaWidthLength, int32_t identLength) ;

/// @brief Method .ctor addr 0x23fcc28 size 0x40 virtual false final false
 void _ctor(int32_t lcid, ::StringW source, ::ArrayW<uint8_t> buffer, System::Globalization::CompareOptions opt, int32_t lv1Length, int32_t lv2Length, int32_t lv3Length, int32_t kanaSmallLength, int32_t markTypeLength, int32_t katakanaLength, int32_t kanaWidthLength, int32_t identLength) ;

// Ctor Parameters [CppParam { name: "localeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "options", ty: "System::Globalization::CompareOptions", modifiers: "", def_value: None }, CppParam { name: "keyData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit SortKey(::StringW localeName, ::StringW str, System::Globalization::CompareOptions options, ::ArrayW<uint8_t> keyData) ;

/// @brief Method .ctor addr 0x23fcc68 size 0x48 virtual false final false
 void _ctor(::StringW localeName, ::StringW str, System::Globalization::CompareOptions options, ::ArrayW<uint8_t> keyData) ;

/// @brief Method get_OriginalString addr 0x23fccb0 size 0x8 virtual true final false
 ::StringW get_OriginalString() ;

/// @brief Method get_KeyData addr 0x23fccb8 size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_KeyData() ;

/// @brief Method Equals addr 0x23fccc0 size 0xb0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x23fcd70 size 0x68 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x23fcdd8 size 0x1f0 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit SortKey() ;

/// @brief Method .ctor addr 0x23fcfc8 size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::SortKey);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::SortKey, "System.Globalization", "SortKey");
