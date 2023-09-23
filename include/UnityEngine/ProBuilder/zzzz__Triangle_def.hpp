#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Triangle;
}
// Type: UnityEngine.ProBuilder::Triangle
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12151))
// CS Name: UnityEngine.ProBuilder.Triangle
struct CORDL_TYPE Triangle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::ProBuilder::Triangle>
constexpr operator  System::IEquatable_1<UnityEngine::ProBuilder::Triangle>() const;

// Ctor Parameters [CppParam { name: "m_A", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_B", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_C", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Triangle(int32_t m_A, int32_t m_B, int32_t m_C) noexcept;


                    constexpr Triangle(Triangle const&) = default;
                    constexpr Triangle(Triangle&&) = default;
                    constexpr Triangle& operator=(Triangle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Triangle& operator=(Triangle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Triangle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_A, put=__set_m_A))  m_A;

constexpr void __set_m_A(int32_t value) ;

constexpr int32_t __get_m_A() const;

 int32_t __declspec(property(get=__get_m_B, put=__set_m_B))  m_B;

constexpr void __set_m_B(int32_t value) ;

constexpr int32_t __get_m_B() const;

 int32_t __declspec(property(get=__get_m_C, put=__set_m_C))  m_C;

constexpr void __set_m_C(int32_t value) ;

constexpr int32_t __get_m_C() const;


// Properties

 int32_t __declspec(property(get=get_a))  a;

 int32_t __declspec(property(get=get_b))  b;

 int32_t __declspec(property(get=get_c))  c;

 System::Collections::Generic::IEnumerable_1<int32_t> __declspec(property(get=get_indices))  indices;


// Methods

/// @brief Method get_a addr 0x29e802c size 0x8 virtual false final false
 int32_t get_a() ;

/// @brief Method get_b addr 0x29e8034 size 0x8 virtual false final false
 int32_t get_b() ;

/// @brief Method get_c addr 0x29e803c size 0x8 virtual false final false
 int32_t get_c() ;

/// @brief Method get_indices addr 0x29e8044 size 0x88 virtual false final false
 System::Collections::Generic::IEnumerable_1<int32_t> get_indices() ;

/// @brief Method .ctor addr 0x29e80cc size 0xc virtual false final false
 void _ctor(int32_t a, int32_t b, int32_t c) ;

/// @brief Method Equals addr 0x29e80d8 size 0x34 virtual true final true
 bool Equals(UnityEngine::ProBuilder::Triangle other) ;

/// @brief Method Equals addr 0x29e810c size 0x98 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x29e81a4 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method IsAdjacent addr 0x29e81c4 size 0x94 virtual false final false
 bool IsAdjacent(UnityEngine::ProBuilder::Triangle other) ;

/// @brief Method ContainsEdge addr 0x29e8258 size 0x100 virtual false final false
 bool ContainsEdge(UnityEngine::ProBuilder::Edge edge) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Triangle, "UnityEngine.ProBuilder", "Triangle");
