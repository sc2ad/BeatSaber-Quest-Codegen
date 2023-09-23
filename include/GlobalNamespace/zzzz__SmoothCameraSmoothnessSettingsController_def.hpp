#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class FloatSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SmoothCameraSmoothnessSettingsController;
}
// Type: ::SmoothCameraSmoothnessSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5701))
// CS Name: SmoothCameraSmoothnessSettingsController
class CORDL_TYPE SmoothCameraSmoothnessSettingsController : public GlobalNamespace::ListSettingsController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SmoothCameraSmoothnessSettingsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SmoothCameraSmoothnessSettingsController", modifiers: " const&", def_value: None }]
constexpr SmoothCameraSmoothnessSettingsController(SmoothCameraSmoothnessSettingsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SmoothCameraSmoothnessSettingsController", modifiers: "&&", def_value: None }]
constexpr SmoothCameraSmoothnessSettingsController(SmoothCameraSmoothnessSettingsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SmoothCameraSmoothnessSettingsController(void* ptr) noexcept : GlobalNamespace::ListSettingsController(ptr) {
}


  constexpr SmoothCameraSmoothnessSettingsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SmoothCameraSmoothnessSettingsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SmoothCameraSmoothnessSettingsController& operator=(SmoothCameraSmoothnessSettingsController&& o) noexcept = default;
  constexpr SmoothCameraSmoothnessSettingsController& operator=(SmoothCameraSmoothnessSettingsController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::FloatSO __declspec(property(get=__get__smoothCameraPositionSmooth, put=__set__smoothCameraPositionSmooth))  _smoothCameraPositionSmooth;

constexpr void __set__smoothCameraPositionSmooth(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get__smoothCameraPositionSmooth() const;

 GlobalNamespace::FloatSO __declspec(property(get=__get__smoothCameraRotationSmooth, put=__set__smoothCameraRotationSmooth))  _smoothCameraRotationSmooth;

constexpr void __set__smoothCameraRotationSmooth(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get__smoothCameraRotationSmooth() const;

 ::ArrayW<float_t> __declspec(property(get=__get__smoothnesses, put=__set__smoothnesses))  _smoothnesses;

constexpr void __set__smoothnesses(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__smoothnesses() const;


// Methods

/// @brief Method GetInitValues addr 0x21548e0 size 0x114 virtual true final false
 bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements) ;

/// @brief Method ApplyValue addr 0x21549f4 size 0xac virtual true final false
 void ApplyValue(int32_t idx) ;

/// @brief Method TextForValue addr 0x2154aa0 size 0xcc virtual true final false
 ::StringW TextForValue(int32_t idx) ;

// Ctor Parameters []
explicit SmoothCameraSmoothnessSettingsController() ;

/// @brief Method .ctor addr 0x2154b6c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SmoothCameraSmoothnessSettingsController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SmoothCameraSmoothnessSettingsController, "", "SmoothCameraSmoothnessSettingsController");
