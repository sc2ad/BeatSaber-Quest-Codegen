#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshImportSettings;
}
// Type: UnityEngine.ProBuilder.MeshOperations::MeshImportSettings
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12212))
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshImportSettings
class CORDL_TYPE MeshImportSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MeshImportSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshImportSettings", modifiers: " const&", def_value: None }]
constexpr MeshImportSettings(MeshImportSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshImportSettings", modifiers: "&&", def_value: None }]
constexpr MeshImportSettings(MeshImportSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeshImportSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MeshImportSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeshImportSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeshImportSettings& operator=(MeshImportSettings&& o) noexcept = default;
  constexpr MeshImportSettings& operator=(MeshImportSettings const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_Quads, put=__set_m_Quads))  m_Quads;

constexpr void __set_m_Quads(bool value) ;

constexpr bool __get_m_Quads() const;

 bool __declspec(property(get=__get_m_Smoothing, put=__set_m_Smoothing))  m_Smoothing;

constexpr void __set_m_Smoothing(bool value) ;

constexpr bool __get_m_Smoothing() const;

 float_t __declspec(property(get=__get_m_SmoothingThreshold, put=__set_m_SmoothingThreshold))  m_SmoothingThreshold;

constexpr void __set_m_SmoothingThreshold(float_t value) ;

constexpr float_t __get_m_SmoothingThreshold() const;


// Properties

 bool __declspec(property(get=get_quads, put=set_quads))  quads;

 bool __declspec(property(get=get_smoothing, put=set_smoothing))  smoothing;

 float_t __declspec(property(get=get_smoothingAngle, put=set_smoothingAngle))  smoothingAngle;


// Methods

/// @brief Method get_quads addr 0x2a231bc size 0x8 virtual false final false
 bool get_quads() ;

/// @brief Method set_quads addr 0x2a231c4 size 0xc virtual false final false
 void set_quads(bool value) ;

/// @brief Method get_smoothing addr 0x2a231d0 size 0x8 virtual false final false
 bool get_smoothing() ;

/// @brief Method set_smoothing addr 0x2a231d8 size 0xc virtual false final false
 void set_smoothing(bool value) ;

/// @brief Method get_smoothingAngle addr 0x2a231e4 size 0x8 virtual false final false
 float_t get_smoothingAngle() ;

/// @brief Method set_smoothingAngle addr 0x2a231ec size 0x8 virtual false final false
 void set_smoothingAngle(float_t value) ;

/// @brief Method ToString addr 0x2a231f4 size 0xd8 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit MeshImportSettings() ;

/// @brief Method .ctor addr 0x2a232cc size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings, "UnityEngine.ProBuilder.MeshOperations", "MeshImportSettings");
