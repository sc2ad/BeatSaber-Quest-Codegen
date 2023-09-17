#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace TMPro {
struct TMP_LinkInfo;
}
// Type: TMPro::TMP_LinkInfo
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12261))
// CS Name: TMPro.TMP_LinkInfo
struct CORDL_TYPE TMP_LinkInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "textComponent", ty: "::TMPro::TMP_Text", modifiers: "", def_value: None }, CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkIdFirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkIdLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkTextfirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkTextLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkID", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }]
constexpr TMP_LinkInfo(::TMPro::TMP_Text textComponent, int32_t hashCode, int32_t linkIdFirstCharacterIndex, int32_t linkIdLength, int32_t linkTextfirstCharacterIndex, int32_t linkTextLength, ::ArrayW<char16_t> linkID) noexcept;


                    constexpr TMP_LinkInfo(TMP_LinkInfo const&) = default;
                    constexpr TMP_LinkInfo(TMP_LinkInfo&&) = default;
                    constexpr TMP_LinkInfo& operator=(TMP_LinkInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_LinkInfo& operator=(TMP_LinkInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_LinkInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::TMPro::TMP_Text __declspec(property(get=__get_textComponent, put=__set_textComponent))  textComponent;

constexpr void __set_textComponent(::TMPro::TMP_Text value) ;

constexpr ::TMPro::TMP_Text __get_textComponent() const;

 int32_t __declspec(property(get=__get_hashCode, put=__set_hashCode))  hashCode;

constexpr void __set_hashCode(int32_t value) ;

constexpr int32_t __get_hashCode() const;

 int32_t __declspec(property(get=__get_linkIdFirstCharacterIndex, put=__set_linkIdFirstCharacterIndex))  linkIdFirstCharacterIndex;

constexpr void __set_linkIdFirstCharacterIndex(int32_t value) ;

constexpr int32_t __get_linkIdFirstCharacterIndex() const;

 int32_t __declspec(property(get=__get_linkIdLength, put=__set_linkIdLength))  linkIdLength;

constexpr void __set_linkIdLength(int32_t value) ;

constexpr int32_t __get_linkIdLength() const;

 int32_t __declspec(property(get=__get_linkTextfirstCharacterIndex, put=__set_linkTextfirstCharacterIndex))  linkTextfirstCharacterIndex;

constexpr void __set_linkTextfirstCharacterIndex(int32_t value) ;

constexpr int32_t __get_linkTextfirstCharacterIndex() const;

 int32_t __declspec(property(get=__get_linkTextLength, put=__set_linkTextLength))  linkTextLength;

constexpr void __set_linkTextLength(int32_t value) ;

constexpr int32_t __get_linkTextLength() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_linkID, put=__set_linkID))  linkID;

constexpr void __set_linkID(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_linkID() const;


// Methods

/// @brief Method SetLinkID addr 0x2a69400 size 0xd4 virtual false final false
 void SetLinkID(::ArrayW<char16_t> text, int32_t startIndex, int32_t length) ;

/// @brief Method GetLinkText addr 0x2a694d4 size 0xdc virtual false final false
 ::StringW GetLinkText() ;

/// @brief Method GetLinkID addr 0x2a695b0 size 0xa8 virtual false final false
 ::StringW GetLinkID() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_LinkInfo, "TMPro", "TMP_LinkInfo");
