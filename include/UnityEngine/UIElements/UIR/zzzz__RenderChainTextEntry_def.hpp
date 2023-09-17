#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct RenderChainTextEntry;
}
// Type: UnityEngine.UIElements.UIR::RenderChainTextEntry
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7497))
// CS Name: UnityEngine.UIElements.UIR.RenderChainTextEntry
struct CORDL_TYPE RenderChainTextEntry : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "command", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand", modifiers: "", def_value: None }, CppParam { name: "firstVertex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderChainTextEntry(::UnityEngine::UIElements::UIR::RenderChainCommand command, int32_t firstVertex, int32_t vertexCount) noexcept;


                    constexpr RenderChainTextEntry(RenderChainTextEntry const&) = default;
                    constexpr RenderChainTextEntry(RenderChainTextEntry&&) = default;
                    constexpr RenderChainTextEntry& operator=(RenderChainTextEntry const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderChainTextEntry& operator=(RenderChainTextEntry&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderChainTextEntry(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::UIR::RenderChainCommand __declspec(property(get=__get_command, put=__set_command))  command;

constexpr void __set_command(::UnityEngine::UIElements::UIR::RenderChainCommand value) ;

constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand __get_command() const;

 int32_t __declspec(property(get=__get_firstVertex, put=__set_firstVertex))  firstVertex;

constexpr void __set_firstVertex(int32_t value) ;

constexpr int32_t __get_firstVertex() const;

 int32_t __declspec(property(get=__get_vertexCount, put=__set_vertexCount))  vertexCount;

constexpr void __set_vertexCount(int32_t value) ;

constexpr int32_t __get_vertexCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChainTextEntry, "UnityEngine.UIElements.UIR", "RenderChainTextEntry");
