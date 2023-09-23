#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct FontEngineError;
}
// Type: UnityEngine.TextCore.LowLevel::FontEngineError
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15509))
// CS Name: UnityEngine.TextCore.LowLevel.FontEngineError
struct CORDL_TYPE FontEngineError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FontEngineError(int32_t value__) noexcept;


                    constexpr FontEngineError(FontEngineError const&) = default;
                    constexpr FontEngineError(FontEngineError&&) = default;
                    constexpr FontEngineError& operator=(FontEngineError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FontEngineError& operator=(FontEngineError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FontEngineError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FontEngineError_Unwrapped : int32_t {
__Success = 0,
__Invalid_File_Path = 1,
__Invalid_File_Format = 2,
__Invalid_File_Structure = 3,
__Invalid_File = 4,
__Invalid_Table = 8,
__Invalid_Glyph_Index = 16,
__Invalid_Character_Code = 17,
__Invalid_Pixel_Size = 23,
__Invalid_Library = 33,
__Invalid_Face = 35,
__Invalid_Library_or_Face = 41,
__Atlas_Generation_Cancelled = 100,
__Invalid_SharedTextureData = 101,
__OpenTypeLayoutLookup_Mismatch = 116,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FontEngineError_Unwrapped () const noexcept {
return std::bit_cast<__FontEngineError_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Success offset 0
static UnityEngine::TextCore::LowLevel::FontEngineError const Success;

/// @brief Field Invalid_File_Path offset 0
static UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_File_Path;

/// @brief Field Invalid_File_Format offset 0
static UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_File_Format;

/// @brief Field Invalid_File_Structure offset 0
static UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_File_Structure;

/// @brief Field Invalid_File offset 0
static UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_File;

/// @brief Field Invalid_Table offset 0
static UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_Table;

/// @brief Field Invalid_Glyph_Index offset 0
static UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_Glyph_Index;

/// @brief Field Invalid_Character_Code offset 0
static UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_Character_Code;

/// @brief Field Invalid_Pixel_Size offset 0
static UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_Pixel_Size;

/// @brief Field Invalid_Library offset 0
static UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_Library;

/// @brief Field Invalid_Face offset 0
static UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_Face;

/// @brief Field Invalid_Library_or_Face offset 0
static UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_Library_or_Face;

/// @brief Field Atlas_Generation_Cancelled offset 0
static UnityEngine::TextCore::LowLevel::FontEngineError const Atlas_Generation_Cancelled;

/// @brief Field Invalid_SharedTextureData offset 0
static UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_SharedTextureData;

/// @brief Field OpenTypeLayoutLookup_Mismatch offset 0
static UnityEngine::TextCore::LowLevel::FontEngineError const OpenTypeLayoutLookup_Mismatch;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::LowLevel::FontEngineError, "UnityEngine.TextCore.LowLevel", "FontEngineError");
