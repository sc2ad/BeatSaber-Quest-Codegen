#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine {
struct BoneWeight1;
}
// Type: UnityEngine::BoneWeight1
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10077))
// CS Name: UnityEngine.BoneWeight1
struct CORDL_TYPE BoneWeight1 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::BoneWeight1>
constexpr operator  System::IEquatable_1<UnityEngine::BoneWeight1>() const;

// Ctor Parameters [CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_BoneIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BoneWeight1(float_t m_Weight, int32_t m_BoneIndex) noexcept;


                    constexpr BoneWeight1(BoneWeight1 const&) = default;
                    constexpr BoneWeight1(BoneWeight1&&) = default;
                    constexpr BoneWeight1& operator=(BoneWeight1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BoneWeight1& operator=(BoneWeight1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BoneWeight1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m_Weight, put=__set_m_Weight))  m_Weight;

constexpr void __set_m_Weight(float_t value) ;

constexpr float_t __get_m_Weight() const;

 int32_t __declspec(property(get=__get_m_BoneIndex, put=__set_m_BoneIndex))  m_BoneIndex;

constexpr void __set_m_BoneIndex(int32_t value) ;

constexpr int32_t __get_m_BoneIndex() const;


// Properties

 float_t __declspec(property(get=get_weight))  weight;

 int32_t __declspec(property(get=get_boneIndex))  boneIndex;


// Methods

/// @brief Method get_weight addr 0x2b4d31c size 0x8 virtual false final false
 float_t get_weight() ;

/// @brief Method get_boneIndex addr 0x2b4d324 size 0x8 virtual false final false
 int32_t get_boneIndex() ;

/// @brief Method Equals addr 0x2b4d32c size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b4d3a4 size 0x5c virtual true final true
 bool Equals(UnityEngine::BoneWeight1 other) ;

/// @brief Method GetHashCode addr 0x2b4d400 size 0x48 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::BoneWeight1, "UnityEngine", "BoneWeight1");
