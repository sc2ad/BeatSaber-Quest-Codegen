#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct SortingLayer;
}
// Type: UnityEngine::SortingLayer
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10207))
// CS Name: UnityEngine.SortingLayer
struct CORDL_TYPE SortingLayer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SortingLayer(int32_t m_Id) noexcept;


                    constexpr SortingLayer(SortingLayer const&) = default;
                    constexpr SortingLayer(SortingLayer&&) = default;
                    constexpr SortingLayer& operator=(SortingLayer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SortingLayer& operator=(SortingLayer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SortingLayer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Id, put=__set_m_Id))  m_Id;

constexpr void __set_m_Id(int32_t value) ;

constexpr int32_t __get_m_Id() const;


// Methods

/// @brief Method GetLayerValueFromID addr 0x2b681cc size 0x3c virtual false final false
static int32_t GetLayerValueFromID(int32_t id) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SortingLayer, "UnityEngine", "SortingLayer");
