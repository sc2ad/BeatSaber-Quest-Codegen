#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::TerrainUtils {
class TerrainMap;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace UnityEngine::TerrainUtils {
class TerrainUtility;
}
namespace UnityEngine::TerrainUtils {
class UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0;
}
namespace UnityEngine::TerrainUtils {
class UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1;
}
// Type: ::<>c__DisplayClass2_0
namespace UnityEngine::TerrainUtils {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15456))
// CS Name: UnityEngine.TerrainUtils.TerrainUtility::<>c__DisplayClass2_0
class CORDL_TYPE UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0(UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0(UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0& operator=(UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0&& o) noexcept = default;
  constexpr UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0& operator=(UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_onlyAutoConnectedTerrains, put=__set_onlyAutoConnectedTerrains))  onlyAutoConnectedTerrains;

constexpr void __set_onlyAutoConnectedTerrains(bool value) ;

constexpr bool __get_onlyAutoConnectedTerrains() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0() ;

/// @brief Method .ctor addr 0x2ba8e10 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TerrainUtils
// Type: ::<>c__DisplayClass2_1
namespace UnityEngine::TerrainUtils {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15457))
// CS Name: UnityEngine.TerrainUtils.TerrainUtility::<>c__DisplayClass2_1
class CORDL_TYPE UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1(UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1(UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1& operator=(UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1&& o) noexcept = default;
  constexpr UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1& operator=(UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::Terrain __declspec(property(get=__get_t, put=__set_t))  t;

constexpr void __set_t(UnityEngine::Terrain value) ;

constexpr UnityEngine::Terrain __get_t() const;

 UnityEngine::TerrainUtils::UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0 __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1))  CS$__8__locals1;

constexpr void __set_CS$__8__locals1(UnityEngine::TerrainUtils::UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0 value) ;

constexpr UnityEngine::TerrainUtils::UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0 __get_CS$__8__locals1() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1() ;

/// @brief Method .ctor addr 0x2ba8e18 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CollectTerrains>b__0 addr 0x2ba91a8 size 0x10dc virtual false final false
 bool _CollectTerrains_b__0(UnityEngine::Terrain x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TerrainUtils
// Type: UnityEngine.TerrainUtils::TerrainUtility
namespace UnityEngine::TerrainUtils {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15458))
// CS Name: UnityEngine.TerrainUtils.TerrainUtility
class CORDL_TYPE TerrainUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass2_1 = UnityEngine::TerrainUtils::UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1;

using __c__DisplayClass2_0 = UnityEngine::TerrainUtils::UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TerrainUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "TerrainUtility", modifiers: " const&", def_value: None }]
constexpr TerrainUtility(TerrainUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TerrainUtility", modifiers: "&&", def_value: None }]
constexpr TerrainUtility(TerrainUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TerrainUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TerrainUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TerrainUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TerrainUtility& operator=(TerrainUtility&& o) noexcept = default;
  constexpr TerrainUtility& operator=(TerrainUtility const& o) noexcept = default;
                


// Methods

/// @brief Method ValidTerrainsExist addr 0x2ba898c size 0x68 virtual false final false
static bool ValidTerrainsExist() ;

/// @brief Method ClearConnectivity addr 0x2ba89f4 size 0xf8 virtual false final false
static void ClearConnectivity() ;

/// @brief Method CollectTerrains addr 0x2ba8aec size 0x324 virtual false final false
static System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TerrainUtils::TerrainMap> CollectTerrains(bool onlyAutoConnectedTerrains) ;

/// @brief Method AutoConnect addr 0x2ba8e20 size 0x388 virtual false final false
static void AutoConnect() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TerrainUtils
NEED_NO_BOX(UnityEngine::TerrainUtils::TerrainUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TerrainUtils::TerrainUtility, "UnityEngine.TerrainUtils", "TerrainUtility");
NEED_NO_BOX(UnityEngine::TerrainUtils::UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TerrainUtils::UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_0, "UnityEngine.TerrainUtils", "TerrainUtility/<>c__DisplayClass2_0");
NEED_NO_BOX(UnityEngine::TerrainUtils::UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TerrainUtils::UnityEngine__TerrainUtils__TerrainUtility____c__DisplayClass2_1, "UnityEngine.TerrainUtils", "TerrainUtility/<>c__DisplayClass2_1");
