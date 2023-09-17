#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Normals;
}
// Type: UnityEngine.ProBuilder::Normals
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12088))
// CS Name: UnityEngine.ProBuilder.Normals
class CORDL_TYPE Normals : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Normals() = default;

// Ctor Parameters [CppParam { name: "", ty: "Normals", modifiers: " const&", def_value: None }]
constexpr Normals(Normals const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Normals", modifiers: "&&", def_value: None }]
constexpr Normals(Normals&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Normals(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Normals& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Normals& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Normals& operator=(Normals&& o) noexcept = default;
  constexpr Normals& operator=(Normals const& o) noexcept = default;
                


// Fields

static ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get_s_SmoothAvg, put=__set_s_SmoothAvg))  s_SmoothAvg;

static void __set_s_SmoothAvg(::ArrayW<::UnityEngine::Vector3> value) ;

static ::ArrayW<::UnityEngine::Vector3> __get_s_SmoothAvg() ;

static ::ArrayW<float_t> __declspec(property(get=__get_s_SmoothAvgCount, put=__set_s_SmoothAvgCount))  s_SmoothAvgCount;

static void __set_s_SmoothAvgCount(::ArrayW<float_t> value) ;

static ::ArrayW<float_t> __get_s_SmoothAvgCount() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_s_CachedIntArray, put=__set_s_CachedIntArray))  s_CachedIntArray;

static void __set_s_CachedIntArray(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_s_CachedIntArray() ;


// Methods

/// @brief Method ClearIntArray addr 0x29c036c size 0xfc virtual false final false
static void ClearIntArray(int32_t count) ;

/// @brief Method CalculateTangents addr 0x29c0468 size 0x4fc virtual false final false
static void CalculateTangents(::UnityEngine::ProBuilder::ProBuilderMesh mesh) ;

/// @brief Method CalculateHardNormals addr 0x29c0964 size 0x4c8 virtual false final false
static void CalculateHardNormals(::UnityEngine::ProBuilder::ProBuilderMesh mesh) ;

/// @brief Method CalculateNormals addr 0x29c0e2c size 0x5a8 virtual false final false
static void CalculateNormals(::UnityEngine::ProBuilder::ProBuilderMesh mesh) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::Normals);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Normals, "UnityEngine.ProBuilder", "Normals");
