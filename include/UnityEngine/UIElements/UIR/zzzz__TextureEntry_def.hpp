#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct TextureEntry;
}
// Type: UnityEngine.UIElements.UIR::TextureEntry
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7498))
// CS Name: UnityEngine.UIElements.UIR.TextureEntry
struct CORDL_TYPE TextureEntry : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "source", ty: "::UnityEngine::Texture", modifiers: "", def_value: None }, CppParam { name: "actual", ty: "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: None }, CppParam { name: "replaced", ty: "bool", modifiers: "", def_value: None }]
constexpr TextureEntry(::UnityEngine::Texture source, ::UnityEngine::UIElements::TextureId actual, bool replaced) noexcept;


                    constexpr TextureEntry(TextureEntry const&) = default;
                    constexpr TextureEntry(TextureEntry&&) = default;
                    constexpr TextureEntry& operator=(TextureEntry const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextureEntry& operator=(TextureEntry&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextureEntry(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Texture __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::UnityEngine::Texture value) ;

constexpr ::UnityEngine::Texture __get_source() const;

 ::UnityEngine::UIElements::TextureId __declspec(property(get=__get_actual, put=__set_actual))  actual;

constexpr void __set_actual(::UnityEngine::UIElements::TextureId value) ;

constexpr ::UnityEngine::UIElements::TextureId __get_actual() const;

 bool __declspec(property(get=__get_replaced, put=__set_replaced))  replaced;

constexpr void __set_replaced(bool value) ;

constexpr bool __get_replaced() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::TextureEntry, "UnityEngine.UIElements.UIR", "TextureEntry");
