#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
struct SaberType;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteBasicCutInfoHelper;
}
// Type: ::NoteBasicCutInfoHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15112))
// CS Name: NoteBasicCutInfoHelper
class CORDL_TYPE NoteBasicCutInfoHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NoteBasicCutInfoHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteBasicCutInfoHelper", modifiers: " const&", def_value: None }]
constexpr NoteBasicCutInfoHelper(NoteBasicCutInfoHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteBasicCutInfoHelper", modifiers: "&&", def_value: None }]
constexpr NoteBasicCutInfoHelper(NoteBasicCutInfoHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteBasicCutInfoHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NoteBasicCutInfoHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteBasicCutInfoHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteBasicCutInfoHelper& operator=(NoteBasicCutInfoHelper&& o) noexcept = default;
  constexpr NoteBasicCutInfoHelper& operator=(NoteBasicCutInfoHelper const& o) noexcept = default;
                


// Fields

/// @brief Field kMinBladeSpeedForCut offset 0
static constexpr float_t  kMinBladeSpeedForCut{2};


// Methods

/// @brief Method GetBasicCutInfo addr 0x1216d98 size 0x198 virtual false final false
static void GetBasicCutInfo(UnityEngine::Transform noteTransform, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteCutDirection cutDirection, GlobalNamespace::SaberType saberType, float_t saberBladeSpeed, UnityEngine::Vector3 cutDirVec, float_t cutAngleTolerance, ByRef<bool> directionOK, ByRef<bool> speedOK, ByRef<bool> saberTypeOK, ByRef<float_t> cutDirDeviation, ByRef<float_t> cutDirAngle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoteBasicCutInfoHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteBasicCutInfoHelper, "", "NoteBasicCutInfoHelper");
