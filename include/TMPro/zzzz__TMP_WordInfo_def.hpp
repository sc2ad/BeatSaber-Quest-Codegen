#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace TMPro {
struct TMP_WordInfo;
}
// Type: TMPro::TMP_WordInfo
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12262))
// CS Name: TMPro.TMP_WordInfo
struct CORDL_TYPE TMP_WordInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "textComponent", ty: "::TMPro::TMP_Text", modifiers: "", def_value: None }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "characterCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_WordInfo(::TMPro::TMP_Text textComponent, int32_t firstCharacterIndex, int32_t lastCharacterIndex, int32_t characterCount) noexcept;


                    constexpr TMP_WordInfo(TMP_WordInfo const&) = default;
                    constexpr TMP_WordInfo(TMP_WordInfo&&) = default;
                    constexpr TMP_WordInfo& operator=(TMP_WordInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_WordInfo& operator=(TMP_WordInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_WordInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::TMPro::TMP_Text __declspec(property(get=__get_textComponent, put=__set_textComponent))  textComponent;

constexpr void __set_textComponent(::TMPro::TMP_Text value) ;

constexpr ::TMPro::TMP_Text __get_textComponent() const;

 int32_t __declspec(property(get=__get_firstCharacterIndex, put=__set_firstCharacterIndex))  firstCharacterIndex;

constexpr void __set_firstCharacterIndex(int32_t value) ;

constexpr int32_t __get_firstCharacterIndex() const;

 int32_t __declspec(property(get=__get_lastCharacterIndex, put=__set_lastCharacterIndex))  lastCharacterIndex;

constexpr void __set_lastCharacterIndex(int32_t value) ;

constexpr int32_t __get_lastCharacterIndex() const;

 int32_t __declspec(property(get=__get_characterCount, put=__set_characterCount))  characterCount;

constexpr void __set_characterCount(int32_t value) ;

constexpr int32_t __get_characterCount() const;


// Methods

/// @brief Method GetWord addr 0x2a69658 size 0xdc virtual false final false
 ::StringW GetWord() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_WordInfo, "TMPro", "TMP_WordInfo");
