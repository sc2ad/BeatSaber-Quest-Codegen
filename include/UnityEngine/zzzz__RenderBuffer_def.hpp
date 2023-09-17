#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct RenderBuffer;
}
// Type: UnityEngine::RenderBuffer
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10026))
// CS Name: UnityEngine.RenderBuffer
struct CORDL_TYPE RenderBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_RenderTextureInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BufferPtr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr RenderBuffer(int32_t m_RenderTextureInstanceID, ::cordl_internals::intptr_t m_BufferPtr) noexcept;


                    constexpr RenderBuffer(RenderBuffer const&) = default;
                    constexpr RenderBuffer(RenderBuffer&&) = default;
                    constexpr RenderBuffer& operator=(RenderBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderBuffer& operator=(RenderBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_RenderTextureInstanceID, put=__set_m_RenderTextureInstanceID))  m_RenderTextureInstanceID;

constexpr void __set_m_RenderTextureInstanceID(int32_t value) ;

constexpr int32_t __get_m_RenderTextureInstanceID() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_BufferPtr, put=__set_m_BufferPtr))  m_BufferPtr;

constexpr void __set_m_BufferPtr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_BufferPtr() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderBuffer, "UnityEngine", "RenderBuffer");
