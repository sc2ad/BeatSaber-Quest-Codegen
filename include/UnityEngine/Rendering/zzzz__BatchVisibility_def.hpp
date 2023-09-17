#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchVisibility;
}
// Type: UnityEngine.Rendering::BatchVisibility
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10300))
// CS Name: UnityEngine.Rendering.BatchVisibility
struct CORDL_TYPE BatchVisibility : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instancesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BatchVisibility(int32_t offset, int32_t instancesCount, int32_t visibleCount) noexcept;


                    constexpr BatchVisibility(BatchVisibility const&) = default;
                    constexpr BatchVisibility(BatchVisibility&&) = default;
                    constexpr BatchVisibility& operator=(BatchVisibility const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BatchVisibility& operator=(BatchVisibility&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BatchVisibility(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(int32_t value) ;

constexpr int32_t __get_offset() const;

 int32_t __declspec(property(get=__get_instancesCount, put=__set_instancesCount))  instancesCount;

constexpr void __set_instancesCount(int32_t value) ;

constexpr int32_t __get_instancesCount() const;

 int32_t __declspec(property(get=__get_visibleCount, put=__set_visibleCount))  visibleCount;

constexpr void __set_visibleCount(int32_t value) ;

constexpr int32_t __get_visibleCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchVisibility, "UnityEngine.Rendering", "BatchVisibility");
