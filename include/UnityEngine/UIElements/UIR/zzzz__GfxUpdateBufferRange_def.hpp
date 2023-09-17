#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct GfxUpdateBufferRange;
}
// Type: UnityEngine.UIElements.UIR::GfxUpdateBufferRange
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15401))
// CS Name: UnityEngine.UIElements.UIR.GfxUpdateBufferRange
struct CORDL_TYPE GfxUpdateBufferRange : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "offsetFromWriteStart", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "source", ty: "::cordl_internals::uintptr_t", modifiers: "", def_value: None }]
constexpr GfxUpdateBufferRange(uint32_t offsetFromWriteStart, uint32_t size, ::cordl_internals::uintptr_t source) noexcept;


                    constexpr GfxUpdateBufferRange(GfxUpdateBufferRange const&) = default;
                    constexpr GfxUpdateBufferRange(GfxUpdateBufferRange&&) = default;
                    constexpr GfxUpdateBufferRange& operator=(GfxUpdateBufferRange const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GfxUpdateBufferRange& operator=(GfxUpdateBufferRange&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GfxUpdateBufferRange(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_offsetFromWriteStart, put=__set_offsetFromWriteStart))  offsetFromWriteStart;

constexpr void __set_offsetFromWriteStart(uint32_t value) ;

constexpr uint32_t __get_offsetFromWriteStart() const;

 uint32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(uint32_t value) ;

constexpr uint32_t __get_size() const;

 ::cordl_internals::uintptr_t __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::cordl_internals::uintptr_t value) ;

constexpr ::cordl_internals::uintptr_t __get_source() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::GfxUpdateBufferRange, "UnityEngine.UIElements.UIR", "GfxUpdateBufferRange");
