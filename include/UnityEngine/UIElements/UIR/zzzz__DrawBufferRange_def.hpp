#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct DrawBufferRange;
}
// Type: UnityEngine.UIElements.UIR::DrawBufferRange
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15402))
// CS Name: UnityEngine.UIElements.UIR.DrawBufferRange
struct CORDL_TYPE DrawBufferRange : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "firstIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minIndexVal", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertsReferenced", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DrawBufferRange(int32_t firstIndex, int32_t indexCount, int32_t minIndexVal, int32_t vertsReferenced) noexcept;


                    constexpr DrawBufferRange(DrawBufferRange const&) = default;
                    constexpr DrawBufferRange(DrawBufferRange&&) = default;
                    constexpr DrawBufferRange& operator=(DrawBufferRange const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DrawBufferRange& operator=(DrawBufferRange&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DrawBufferRange(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_firstIndex, put=__set_firstIndex))  firstIndex;

constexpr void __set_firstIndex(int32_t value) ;

constexpr int32_t __get_firstIndex() const;

 int32_t __declspec(property(get=__get_indexCount, put=__set_indexCount))  indexCount;

constexpr void __set_indexCount(int32_t value) ;

constexpr int32_t __get_indexCount() const;

 int32_t __declspec(property(get=__get_minIndexVal, put=__set_minIndexVal))  minIndexVal;

constexpr void __set_minIndexVal(int32_t value) ;

constexpr int32_t __get_minIndexVal() const;

 int32_t __declspec(property(get=__get_vertsReferenced, put=__set_vertsReferenced))  vertsReferenced;

constexpr void __set_vertsReferenced(int32_t value) ;

constexpr int32_t __get_vertsReferenced() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::DrawBufferRange, "UnityEngine.UIElements.UIR", "DrawBufferRange");
