#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class LineLightManager;
}
// Type: ::LineLightManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14722))
// CS Name: LineLightManager
class CORDL_TYPE LineLightManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LineLightManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "LineLightManager", modifiers: " const&", def_value: None }]
constexpr LineLightManager(LineLightManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LineLightManager", modifiers: "&&", def_value: None }]
constexpr LineLightManager(LineLightManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LineLightManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LineLightManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LineLightManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LineLightManager& operator=(LineLightManager&& o) noexcept = default;
  constexpr LineLightManager& operator=(LineLightManager const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxNumberOfLights offset 0
static constexpr int32_t  kMaxNumberOfLights{4};

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__points, put=__set__points))  _points;

constexpr void __set__points(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__points() const;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__dirs, put=__set__dirs))  _dirs;

constexpr void __set__dirs(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__dirs() const;

 ::ArrayW<float_t> __declspec(property(get=__get__dirLengths, put=__set__dirLengths))  _dirLengths;

constexpr void __set__dirLengths(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__dirLengths() const;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__colors, put=__set__colors))  _colors;

constexpr void __set__colors(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__colors() const;

static int32_t __declspec(property(get=__get__activeLineLightsCountID, put=__set__activeLineLightsCountID))  _activeLineLightsCountID;

static void __set__activeLineLightsCountID(int32_t value) ;

static int32_t __get__activeLineLightsCountID() ;

static int32_t __declspec(property(get=__get__lineLightPointsID, put=__set__lineLightPointsID))  _lineLightPointsID;

static void __set__lineLightPointsID(int32_t value) ;

static int32_t __get__lineLightPointsID() ;

static int32_t __declspec(property(get=__get__lineLightDirsID, put=__set__lineLightDirsID))  _lineLightDirsID;

static void __set__lineLightDirsID(int32_t value) ;

static int32_t __get__lineLightDirsID() ;

static int32_t __declspec(property(get=__get__lineLightDirLengthsID, put=__set__lineLightDirLengthsID))  _lineLightDirLengthsID;

static void __set__lineLightDirLengthsID(int32_t value) ;

static int32_t __get__lineLightDirLengthsID() ;

static int32_t __declspec(property(get=__get__lineLightColorsID, put=__set__lineLightColorsID))  _lineLightColorsID;

static void __set__lineLightColorsID(int32_t value) ;

static int32_t __get__lineLightColorsID() ;


// Methods

/// @brief Method Update addr 0x1fa1ac8 size 0x370 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit LineLightManager() ;

/// @brief Method .ctor addr 0x1fa1e38 size 0xa4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LineLightManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LineLightManager, "", "LineLightManager");
