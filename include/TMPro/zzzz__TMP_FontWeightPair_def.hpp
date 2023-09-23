#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace TMPro {
class TMP_FontAsset;
}
// Forward declare root types
namespace TMPro {
struct TMP_FontWeightPair;
}
// Type: TMPro::TMP_FontWeightPair
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12302))
// CS Name: TMPro.TMP_FontWeightPair
struct CORDL_TYPE TMP_FontWeightPair : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "regularTypeface", ty: "TMPro::TMP_FontAsset", modifiers: "", def_value: None }, CppParam { name: "italicTypeface", ty: "TMPro::TMP_FontAsset", modifiers: "", def_value: None }]
constexpr TMP_FontWeightPair(TMPro::TMP_FontAsset regularTypeface, TMPro::TMP_FontAsset italicTypeface) noexcept;


                    constexpr TMP_FontWeightPair(TMP_FontWeightPair const&) = default;
                    constexpr TMP_FontWeightPair(TMP_FontWeightPair&&) = default;
                    constexpr TMP_FontWeightPair& operator=(TMP_FontWeightPair const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_FontWeightPair& operator=(TMP_FontWeightPair&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_FontWeightPair(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 TMPro::TMP_FontAsset __declspec(property(get=__get_regularTypeface, put=__set_regularTypeface))  regularTypeface;

constexpr void __set_regularTypeface(TMPro::TMP_FontAsset value) ;

constexpr TMPro::TMP_FontAsset __get_regularTypeface() const;

 TMPro::TMP_FontAsset __declspec(property(get=__get_italicTypeface, put=__set_italicTypeface))  italicTypeface;

constexpr void __set_italicTypeface(TMPro::TMP_FontAsset value) ;

constexpr TMPro::TMP_FontAsset __get_italicTypeface() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_FontWeightPair, "TMPro", "TMP_FontWeightPair");
