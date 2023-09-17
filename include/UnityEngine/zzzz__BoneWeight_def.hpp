#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine {
struct BoneWeight;
}
// Type: UnityEngine::BoneWeight
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10076))
// CS Name: UnityEngine.BoneWeight
struct CORDL_TYPE BoneWeight : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::BoneWeight>
constexpr operator  ::System::IEquatable_1<::UnityEngine::BoneWeight>() const;

// Ctor Parameters [CppParam { name: "m_Weight0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Weight1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Weight2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Weight3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_BoneIndex0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BoneIndex1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BoneIndex2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BoneIndex3", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BoneWeight(float_t m_Weight0, float_t m_Weight1, float_t m_Weight2, float_t m_Weight3, int32_t m_BoneIndex0, int32_t m_BoneIndex1, int32_t m_BoneIndex2, int32_t m_BoneIndex3) noexcept;


                    constexpr BoneWeight(BoneWeight const&) = default;
                    constexpr BoneWeight(BoneWeight&&) = default;
                    constexpr BoneWeight& operator=(BoneWeight const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BoneWeight& operator=(BoneWeight&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BoneWeight(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m_Weight0, put=__set_m_Weight0))  m_Weight0;

constexpr void __set_m_Weight0(float_t value) ;

constexpr float_t __get_m_Weight0() const;

 float_t __declspec(property(get=__get_m_Weight1, put=__set_m_Weight1))  m_Weight1;

constexpr void __set_m_Weight1(float_t value) ;

constexpr float_t __get_m_Weight1() const;

 float_t __declspec(property(get=__get_m_Weight2, put=__set_m_Weight2))  m_Weight2;

constexpr void __set_m_Weight2(float_t value) ;

constexpr float_t __get_m_Weight2() const;

 float_t __declspec(property(get=__get_m_Weight3, put=__set_m_Weight3))  m_Weight3;

constexpr void __set_m_Weight3(float_t value) ;

constexpr float_t __get_m_Weight3() const;

 int32_t __declspec(property(get=__get_m_BoneIndex0, put=__set_m_BoneIndex0))  m_BoneIndex0;

constexpr void __set_m_BoneIndex0(int32_t value) ;

constexpr int32_t __get_m_BoneIndex0() const;

 int32_t __declspec(property(get=__get_m_BoneIndex1, put=__set_m_BoneIndex1))  m_BoneIndex1;

constexpr void __set_m_BoneIndex1(int32_t value) ;

constexpr int32_t __get_m_BoneIndex1() const;

 int32_t __declspec(property(get=__get_m_BoneIndex2, put=__set_m_BoneIndex2))  m_BoneIndex2;

constexpr void __set_m_BoneIndex2(int32_t value) ;

constexpr int32_t __get_m_BoneIndex2() const;

 int32_t __declspec(property(get=__get_m_BoneIndex3, put=__set_m_BoneIndex3))  m_BoneIndex3;

constexpr void __set_m_BoneIndex3(int32_t value) ;

constexpr int32_t __get_m_BoneIndex3() const;


// Properties

 float_t __declspec(property(get=get_weight0, put=set_weight0))  weight0;

 float_t __declspec(property(get=get_weight1, put=set_weight1))  weight1;

 float_t __declspec(property(get=get_weight2, put=set_weight2))  weight2;

 float_t __declspec(property(get=get_weight3, put=set_weight3))  weight3;

 int32_t __declspec(property(get=get_boneIndex0, put=set_boneIndex0))  boneIndex0;

 int32_t __declspec(property(get=get_boneIndex1, put=set_boneIndex1))  boneIndex1;

 int32_t __declspec(property(get=get_boneIndex2, put=set_boneIndex2))  boneIndex2;

 int32_t __declspec(property(get=get_boneIndex3, put=set_boneIndex3))  boneIndex3;


// Methods

/// @brief Method get_weight0 addr 0x2b4d034 size 0x8 virtual false final false
 float_t get_weight0() ;

/// @brief Method set_weight0 addr 0x2b4d03c size 0x8 virtual false final false
 void set_weight0(float_t value) ;

/// @brief Method get_weight1 addr 0x2b4d044 size 0x8 virtual false final false
 float_t get_weight1() ;

/// @brief Method set_weight1 addr 0x2b4d04c size 0x8 virtual false final false
 void set_weight1(float_t value) ;

/// @brief Method get_weight2 addr 0x2b4d054 size 0x8 virtual false final false
 float_t get_weight2() ;

/// @brief Method set_weight2 addr 0x2b4d05c size 0x8 virtual false final false
 void set_weight2(float_t value) ;

/// @brief Method get_weight3 addr 0x2b4d064 size 0x8 virtual false final false
 float_t get_weight3() ;

/// @brief Method set_weight3 addr 0x2b4d06c size 0x8 virtual false final false
 void set_weight3(float_t value) ;

/// @brief Method get_boneIndex0 addr 0x2b4d074 size 0x8 virtual false final false
 int32_t get_boneIndex0() ;

/// @brief Method set_boneIndex0 addr 0x2b4d07c size 0x8 virtual false final false
 void set_boneIndex0(int32_t value) ;

/// @brief Method get_boneIndex1 addr 0x2b4d084 size 0x8 virtual false final false
 int32_t get_boneIndex1() ;

/// @brief Method set_boneIndex1 addr 0x2b4d08c size 0x8 virtual false final false
 void set_boneIndex1(int32_t value) ;

/// @brief Method get_boneIndex2 addr 0x2b4d094 size 0x8 virtual false final false
 int32_t get_boneIndex2() ;

/// @brief Method set_boneIndex2 addr 0x2b4d09c size 0x8 virtual false final false
 void set_boneIndex2(int32_t value) ;

/// @brief Method get_boneIndex3 addr 0x2b4d0a4 size 0x8 virtual false final false
 int32_t get_boneIndex3() ;

/// @brief Method set_boneIndex3 addr 0x2b4d0ac size 0x8 virtual false final false
 void set_boneIndex3(int32_t value) ;

/// @brief Method GetHashCode addr 0x2b4d0b4 size 0x108 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b4d1bc size 0x88 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b4d244 size 0xd8 virtual true final true
 bool Equals(::UnityEngine::BoneWeight other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoneWeight, "UnityEngine", "BoneWeight");
