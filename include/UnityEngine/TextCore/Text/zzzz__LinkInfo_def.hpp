#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct LinkInfo;
}
// Type: UnityEngine.TextCore.Text::LinkInfo
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13499))
// CS Name: UnityEngine.TextCore.Text.LinkInfo
struct CORDL_TYPE LinkInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkIdFirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkIdLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkTextfirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkTextLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkId", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }]
constexpr LinkInfo(int32_t hashCode, int32_t linkIdFirstCharacterIndex, int32_t linkIdLength, int32_t linkTextfirstCharacterIndex, int32_t linkTextLength, ::ArrayW<char16_t> linkId) noexcept;


                    constexpr LinkInfo(LinkInfo const&) = default;
                    constexpr LinkInfo(LinkInfo&&) = default;
                    constexpr LinkInfo& operator=(LinkInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LinkInfo& operator=(LinkInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LinkInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

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

 ::ArrayW<char16_t> __declspec(property(get=__get_linkId, put=__set_linkId))  linkId;

constexpr void __set_linkId(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_linkId() const;


// Methods

/// @brief Method SetLinkId addr 0x2bc95e0 size 0xd4 virtual false final false
 void SetLinkId(::ArrayW<char16_t> text, int32_t startIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::LinkInfo, "UnityEngine.TextCore.Text", "LinkInfo");
