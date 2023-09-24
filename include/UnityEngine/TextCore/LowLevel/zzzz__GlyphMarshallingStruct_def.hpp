#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::TextCore {
struct GlyphMetrics;
}
namespace UnityEngine::TextCore {
struct GlyphRect;
}
namespace UnityEngine::TextCore {
struct GlyphClassDefinitionType;
}
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphMarshallingStruct;
}
// Type: UnityEngine.TextCore.LowLevel::GlyphMarshallingStruct
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15507))
// CS Name: UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct
struct CORDL_TYPE GlyphMarshallingStruct : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "index", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "metrics", ty: "UnityEngine::TextCore::GlyphMetrics", modifiers: "", def_value: None }, CppParam { name: "glyphRect", ty: "UnityEngine::TextCore::GlyphRect", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "atlasIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "classDefinitionType", ty: "UnityEngine::TextCore::GlyphClassDefinitionType", modifiers: "", def_value: None }]
constexpr GlyphMarshallingStruct(uint32_t index, UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex, UnityEngine::TextCore::GlyphClassDefinitionType classDefinitionType) noexcept;


                    constexpr GlyphMarshallingStruct(GlyphMarshallingStruct const&) = default;
                    constexpr GlyphMarshallingStruct(GlyphMarshallingStruct&&) = default;
                    constexpr GlyphMarshallingStruct& operator=(GlyphMarshallingStruct const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlyphMarshallingStruct& operator=(GlyphMarshallingStruct&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x34};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlyphMarshallingStruct(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(uint32_t value) ;

constexpr uint32_t __get_index() const;

 UnityEngine::TextCore::GlyphMetrics __declspec(property(get=__get_metrics, put=__set_metrics))  metrics;

constexpr void __set_metrics(UnityEngine::TextCore::GlyphMetrics value) ;

constexpr UnityEngine::TextCore::GlyphMetrics __get_metrics() const;

 UnityEngine::TextCore::GlyphRect __declspec(property(get=__get_glyphRect, put=__set_glyphRect))  glyphRect;

constexpr void __set_glyphRect(UnityEngine::TextCore::GlyphRect value) ;

constexpr UnityEngine::TextCore::GlyphRect __get_glyphRect() const;

 float_t __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(float_t value) ;

constexpr float_t __get_scale() const;

 int32_t __declspec(property(get=__get_atlasIndex, put=__set_atlasIndex))  atlasIndex;

constexpr void __set_atlasIndex(int32_t value) ;

constexpr int32_t __get_atlasIndex() const;

 UnityEngine::TextCore::GlyphClassDefinitionType __declspec(property(get=__get_classDefinitionType, put=__set_classDefinitionType))  classDefinitionType;

constexpr void __set_classDefinitionType(UnityEngine::TextCore::GlyphClassDefinitionType value) ;

constexpr UnityEngine::TextCore::GlyphClassDefinitionType __get_classDefinitionType() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, "UnityEngine.TextCore.LowLevel", "GlyphMarshallingStruct");
