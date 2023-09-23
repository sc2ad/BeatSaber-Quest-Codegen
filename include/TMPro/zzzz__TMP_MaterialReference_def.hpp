#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace TMPro {
struct TMP_MaterialReference;
}
// Type: TMPro::TMP_MaterialReference
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12245))
// CS Name: TMPro.TMP_MaterialReference
struct CORDL_TYPE TMP_MaterialReference : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "material", ty: "UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "referenceCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_MaterialReference(UnityEngine::Material material, int32_t referenceCount) noexcept;


                    constexpr TMP_MaterialReference(TMP_MaterialReference const&) = default;
                    constexpr TMP_MaterialReference(TMP_MaterialReference&&) = default;
                    constexpr TMP_MaterialReference& operator=(TMP_MaterialReference const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_MaterialReference& operator=(TMP_MaterialReference&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_MaterialReference(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Material __declspec(property(get=__get_material, put=__set_material))  material;

constexpr void __set_material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_material() const;

 int32_t __declspec(property(get=__get_referenceCount, put=__set_referenceCount))  referenceCount;

constexpr void __set_referenceCount(int32_t value) ;

constexpr int32_t __get_referenceCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_MaterialReference, "TMPro", "TMP_MaterialReference");
