#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Edge;
}
// Type: UnityEngine.ProBuilder::Edge
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12059))
// CS Name: UnityEngine.ProBuilder.Edge
struct CORDL_TYPE Edge : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::ProBuilder::Edge>
constexpr operator  System::IEquatable_1<UnityEngine::ProBuilder::Edge>() const;

// Ctor Parameters [CppParam { name: "a", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "b", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Edge(int32_t a, int32_t b) noexcept;


                    constexpr Edge(Edge const&) = default;
                    constexpr Edge(Edge&&) = default;
                    constexpr Edge& operator=(Edge const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Edge& operator=(Edge&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Edge(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(int32_t value) ;

constexpr int32_t __get_a() const;

 int32_t __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(int32_t value) ;

constexpr int32_t __get_b() const;

static UnityEngine::ProBuilder::Edge __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(UnityEngine::ProBuilder::Edge value) ;

static UnityEngine::ProBuilder::Edge __get_Empty() ;


// Methods

/// @brief Method .ctor addr 0x29aa934 size 0x8 virtual false final false
 void _ctor(int32_t a, int32_t b) ;

/// @brief Method IsValid addr 0x29aa93c size 0x2c virtual false final false
 bool IsValid() ;

/// @brief Method ToString addr 0x29aa968 size 0x1a4 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x29aab0c size 0x44 virtual true final true
 bool Equals(UnityEngine::ProBuilder::Edge other) ;

/// @brief Method Equals addr 0x29aab50 size 0xa0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x29aabf0 size 0x24 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Addition addr 0x29aac14 size 0x18 virtual false final false
static UnityEngine::ProBuilder::Edge op_Addition(UnityEngine::ProBuilder::Edge a, UnityEngine::ProBuilder::Edge b) ;

/// @brief Method op_Subtraction addr 0x29aac2c size 0x18 virtual false final false
static UnityEngine::ProBuilder::Edge op_Subtraction(UnityEngine::ProBuilder::Edge a, UnityEngine::ProBuilder::Edge b) ;

/// @brief Method op_Addition addr 0x29aac44 size 0x14 virtual false final false
static UnityEngine::ProBuilder::Edge op_Addition(UnityEngine::ProBuilder::Edge a, int32_t b) ;

/// @brief Method op_Subtraction addr 0x29aac58 size 0x14 virtual false final false
static UnityEngine::ProBuilder::Edge op_Subtraction(UnityEngine::ProBuilder::Edge a, int32_t b) ;

/// @brief Method op_Equality addr 0x29aac6c size 0x38 virtual false final false
static bool op_Equality(UnityEngine::ProBuilder::Edge a, UnityEngine::ProBuilder::Edge b) ;

/// @brief Method op_Inequality addr 0x29aaca4 size 0x90 virtual false final false
static bool op_Inequality(UnityEngine::ProBuilder::Edge a, UnityEngine::ProBuilder::Edge b) ;

/// @brief Method Add addr 0x29aad34 size 0x70 virtual false final false
static UnityEngine::ProBuilder::Edge Add(UnityEngine::ProBuilder::Edge a, UnityEngine::ProBuilder::Edge b) ;

/// @brief Method Subtract addr 0x29aada4 size 0x70 virtual false final false
static UnityEngine::ProBuilder::Edge Subtract(UnityEngine::ProBuilder::Edge a, UnityEngine::ProBuilder::Edge b) ;

/// @brief Method Equals addr 0x29aae14 size 0x10c virtual false final false
 bool Equals(UnityEngine::ProBuilder::Edge other, System::Collections::Generic::Dictionary_2<int32_t,int32_t> lookup) ;

/// @brief Method Contains addr 0x29aaf20 size 0x24 virtual false final false
 bool Contains(int32_t index) ;

/// @brief Method Contains addr 0x29aaf44 size 0x30 virtual false final false
 bool Contains(UnityEngine::ProBuilder::Edge other) ;

/// @brief Method Contains addr 0x29aaf74 size 0xa4 virtual false final false
 bool Contains(int32_t index, System::Collections::Generic::Dictionary_2<int32_t,int32_t> lookup) ;

/// @brief Method GetIndices addr 0x29ab018 size 0x3d8 virtual false final false
static void GetIndices(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges, System::Collections::Generic::List_1<int32_t> indices) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Edge, "UnityEngine.ProBuilder", "Edge");
