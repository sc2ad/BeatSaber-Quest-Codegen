#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace TMPro {
struct TMP_PageInfo;
}
// Type: TMPro::TMP_PageInfo
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12260))
// CS Name: TMPro.TMP_PageInfo
struct CORDL_TYPE TMP_PageInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baseLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value: None }]
constexpr TMP_PageInfo(int32_t firstCharacterIndex, int32_t lastCharacterIndex, float_t ascender, float_t baseLine, float_t descender) noexcept;


                    constexpr TMP_PageInfo(TMP_PageInfo const&) = default;
                    constexpr TMP_PageInfo(TMP_PageInfo&&) = default;
                    constexpr TMP_PageInfo& operator=(TMP_PageInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_PageInfo& operator=(TMP_PageInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_PageInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_firstCharacterIndex, put=__set_firstCharacterIndex))  firstCharacterIndex;

constexpr void __set_firstCharacterIndex(int32_t value) ;

constexpr int32_t __get_firstCharacterIndex() const;

 int32_t __declspec(property(get=__get_lastCharacterIndex, put=__set_lastCharacterIndex))  lastCharacterIndex;

constexpr void __set_lastCharacterIndex(int32_t value) ;

constexpr int32_t __get_lastCharacterIndex() const;

 float_t __declspec(property(get=__get_ascender, put=__set_ascender))  ascender;

constexpr void __set_ascender(float_t value) ;

constexpr float_t __get_ascender() const;

 float_t __declspec(property(get=__get_baseLine, put=__set_baseLine))  baseLine;

constexpr void __set_baseLine(float_t value) ;

constexpr float_t __get_baseLine() const;

 float_t __declspec(property(get=__get_descender, put=__set_descender))  descender;

constexpr void __set_descender(float_t value) ;

constexpr float_t __get_descender() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_PageInfo, "TMPro", "TMP_PageInfo");
