#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct LayerMask;
}
// Type: UnityEngine::LayerMask
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10146))
// CS Name: UnityEngine.LayerMask
struct CORDL_TYPE LayerMask : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Mask", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LayerMask(int32_t m_Mask) noexcept;


                    constexpr LayerMask(LayerMask const&) = default;
                    constexpr LayerMask(LayerMask&&) = default;
                    constexpr LayerMask& operator=(LayerMask const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LayerMask& operator=(LayerMask&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LayerMask(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Mask, put=__set_m_Mask))  m_Mask;

constexpr void __set_m_Mask(int32_t value) ;

constexpr int32_t __get_m_Mask() const;


// Properties

 int32_t __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method op_Implicit addr 0x2b599a4 size 0x4 virtual false final false
static int32_t op_Implicit_int32_t(UnityEngine::LayerMask mask) ;

/// @brief Method op_Implicit addr 0x2b599a8 size 0x8 virtual false final false
static UnityEngine::LayerMask op_Implicit_UnityEngine__LayerMask(int32_t intVal) ;

/// @brief Method get_value addr 0x2b599b0 size 0x8 virtual false final false
 int32_t get_value() ;

/// @brief Method set_value addr 0x2b599b8 size 0x8 virtual false final false
 void set_value(int32_t value) ;

/// @brief Method LayerToName addr 0x2b599c0 size 0x3c virtual false final false
static ::StringW LayerToName(int32_t layer) ;

/// @brief Method NameToLayer addr 0x2b599fc size 0x3c virtual false final false
static int32_t NameToLayer(::StringW layerName) ;

/// @brief Method GetMask addr 0x2b59a38 size 0x108 virtual false final false
static int32_t GetMask(::ArrayW<::StringW> layerNames) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LayerMask, "UnityEngine", "LayerMask");
