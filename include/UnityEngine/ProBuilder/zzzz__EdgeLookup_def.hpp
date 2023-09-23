#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
// Type: ::<>c__DisplayClass16_0
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12060))
// CS Name: UnityEngine.ProBuilder.EdgeLookup::<>c__DisplayClass16_0
class CORDL_TYPE UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0(UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0(UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0& operator=(UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0& operator=(UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<int32_t,int32_t> __declspec(property(get=__get_lookup, put=__set_lookup))  lookup;

constexpr void __set_lookup(System::Collections::Generic::Dictionary_2<int32_t,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,int32_t> __get_lookup() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0() ;

/// @brief Method .ctor addr 0x29ab93c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetEdgeLookup>b__0 addr 0x29abce0 size 0x84 virtual false final false
 UnityEngine::ProBuilder::EdgeLookup _GetEdgeLookup_b__0(UnityEngine::ProBuilder::Edge x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::EdgeLookup
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12061))
// CS Name: UnityEngine.ProBuilder.EdgeLookup
struct CORDL_TYPE EdgeLookup : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using __c__DisplayClass16_0 = UnityEngine::ProBuilder::UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::ProBuilder::EdgeLookup>
constexpr operator  System::IEquatable_1<UnityEngine::ProBuilder::EdgeLookup>() const;

// Ctor Parameters [CppParam { name: "m_Local", ty: "UnityEngine::ProBuilder::Edge", modifiers: "", def_value: None }, CppParam { name: "m_Common", ty: "UnityEngine::ProBuilder::Edge", modifiers: "", def_value: None }]
constexpr EdgeLookup(UnityEngine::ProBuilder::Edge m_Local, UnityEngine::ProBuilder::Edge m_Common) noexcept;


                    constexpr EdgeLookup(EdgeLookup const&) = default;
                    constexpr EdgeLookup(EdgeLookup&&) = default;
                    constexpr EdgeLookup& operator=(EdgeLookup const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EdgeLookup& operator=(EdgeLookup&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EdgeLookup(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::ProBuilder::Edge __declspec(property(get=__get_m_Local, put=__set_m_Local))  m_Local;

constexpr void __set_m_Local(UnityEngine::ProBuilder::Edge value) ;

constexpr UnityEngine::ProBuilder::Edge __get_m_Local() const;

 UnityEngine::ProBuilder::Edge __declspec(property(get=__get_m_Common, put=__set_m_Common))  m_Common;

constexpr void __set_m_Common(UnityEngine::ProBuilder::Edge value) ;

constexpr UnityEngine::ProBuilder::Edge __get_m_Common() const;


// Properties

 UnityEngine::ProBuilder::Edge __declspec(property(get=get_local, put=set_local))  local;

 UnityEngine::ProBuilder::Edge __declspec(property(get=get_common, put=set_common))  common;


// Methods

/// @brief Method get_local addr 0x29ab43c size 0x8 virtual false final false
 UnityEngine::ProBuilder::Edge get_local() ;

/// @brief Method set_local addr 0x29ab444 size 0x8 virtual false final false
 void set_local(UnityEngine::ProBuilder::Edge value) ;

/// @brief Method get_common addr 0x29ab44c size 0x8 virtual false final false
 UnityEngine::ProBuilder::Edge get_common() ;

/// @brief Method set_common addr 0x29ab454 size 0x8 virtual false final false
 void set_common(UnityEngine::ProBuilder::Edge value) ;

/// @brief Method .ctor addr 0x29ab45c size 0x8 virtual false final false
 void _ctor(UnityEngine::ProBuilder::Edge common, UnityEngine::ProBuilder::Edge local) ;

/// @brief Method .ctor addr 0x29ab464 size 0x18 virtual false final false
 void _ctor(int32_t cx, int32_t cy, int32_t x, int32_t y) ;

/// @brief Method Equals addr 0x29ab47c size 0x38 virtual true final true
 bool Equals(UnityEngine::ProBuilder::EdgeLookup other) ;

/// @brief Method Equals addr 0x29ab4b4 size 0xa8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x29ab55c size 0x24 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x29ab580 size 0x9c virtual false final false
static bool op_Equality(UnityEngine::ProBuilder::EdgeLookup a, UnityEngine::ProBuilder::EdgeLookup b) ;

/// @brief Method op_Inequality addr 0x29ab61c size 0xa0 virtual false final false
static bool op_Inequality(UnityEngine::ProBuilder::EdgeLookup a, UnityEngine::ProBuilder::EdgeLookup b) ;

/// @brief Method ToString addr 0x29ab6bc size 0x1ac virtual true final false
 ::StringW ToString() ;

/// @brief Method GetEdgeLookup addr 0x29ab868 size 0xd4 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::EdgeLookup> GetEdgeLookup(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges, System::Collections::Generic::Dictionary_2<int32_t,int32_t> lookup) ;

/// @brief Method GetEdgeLookupHashSet addr 0x29ab944 size 0x39c virtual false final false
static System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::EdgeLookup> GetEdgeLookupHashSet(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges, System::Collections::Generic::Dictionary_2<int32_t,int32_t> lookup) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__EdgeLookup____c__DisplayClass16_0, "UnityEngine.ProBuilder", "EdgeLookup/<>c__DisplayClass16_0");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::EdgeLookup, "UnityEngine.ProBuilder", "EdgeLookup");
