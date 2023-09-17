#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace TMPro {
struct TMP_SpriteInfo;
}
// Type: TMPro::TMP_SpriteInfo
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12263))
// CS Name: TMPro.TMP_SpriteInfo
struct CORDL_TYPE TMP_SpriteInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "spriteIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "characterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_SpriteInfo(int32_t spriteIndex, int32_t characterIndex, int32_t vertexIndex) noexcept;


                    constexpr TMP_SpriteInfo(TMP_SpriteInfo const&) = default;
                    constexpr TMP_SpriteInfo(TMP_SpriteInfo&&) = default;
                    constexpr TMP_SpriteInfo& operator=(TMP_SpriteInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_SpriteInfo& operator=(TMP_SpriteInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_SpriteInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_spriteIndex, put=__set_spriteIndex))  spriteIndex;

constexpr void __set_spriteIndex(int32_t value) ;

constexpr int32_t __get_spriteIndex() const;

 int32_t __declspec(property(get=__get_characterIndex, put=__set_characterIndex))  characterIndex;

constexpr void __set_characterIndex(int32_t value) ;

constexpr int32_t __get_characterIndex() const;

 int32_t __declspec(property(get=__get_vertexIndex, put=__set_vertexIndex))  vertexIndex;

constexpr void __set_vertexIndex(int32_t value) ;

constexpr int32_t __get_vertexIndex() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SpriteInfo, "TMPro", "TMP_SpriteInfo");
