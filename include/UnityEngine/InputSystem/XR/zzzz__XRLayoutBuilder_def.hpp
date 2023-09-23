#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::XR {
class XRDeviceDescriptor;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::XR {
struct XRFeatureDescriptor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
namespace UnityEngine::InputSystem::XR {
struct FeatureType;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0;
}
namespace UnityEngine::InputSystem::XR {
class XRLayoutBuilder;
}
// Type: ::<>c__DisplayClass5_0
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6413))
// CS Name: UnityEngine.InputSystem.XR.XRLayoutBuilder::<>c__DisplayClass5_0
class CORDL_TYPE UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0(UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0(UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0& operator=(UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0& operator=(UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::XR::XRLayoutBuilder __declspec(property(get=__get_layout, put=__set_layout))  layout;

constexpr void __set_layout(UnityEngine::InputSystem::XR::XRLayoutBuilder value) ;

constexpr UnityEngine::InputSystem::XR::XRLayoutBuilder __get_layout() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0() ;

/// @brief Method .ctor addr 0x2934918 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <OnFindLayoutForDevice>b__0 addr 0x29359a0 size 0x18 virtual false final false
 UnityEngine::InputSystem::Layouts::InputControlLayout _OnFindLayoutForDevice_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
// Type: UnityEngine.InputSystem.XR::XRLayoutBuilder
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6414))
// CS Name: UnityEngine.InputSystem.XR.XRLayoutBuilder
class CORDL_TYPE XRLayoutBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass5_0 = UnityEngine::InputSystem::XR::UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XRLayoutBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRLayoutBuilder", modifiers: " const&", def_value: None }]
constexpr XRLayoutBuilder(XRLayoutBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRLayoutBuilder", modifiers: "&&", def_value: None }]
constexpr XRLayoutBuilder(XRLayoutBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRLayoutBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XRLayoutBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRLayoutBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRLayoutBuilder& operator=(XRLayoutBuilder&& o) noexcept = default;
  constexpr XRLayoutBuilder& operator=(XRLayoutBuilder const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_parentLayout, put=__set_parentLayout))  parentLayout;

constexpr void __set_parentLayout(::StringW value) ;

constexpr ::StringW __get_parentLayout() const;

 ::StringW __declspec(property(get=__get_interfaceName, put=__set_interfaceName))  interfaceName;

constexpr void __set_interfaceName(::StringW value) ;

constexpr ::StringW __get_interfaceName() const;

 UnityEngine::InputSystem::XR::XRDeviceDescriptor __declspec(property(get=__get_descriptor, put=__set_descriptor))  descriptor;

constexpr void __set_descriptor(UnityEngine::InputSystem::XR::XRDeviceDescriptor value) ;

constexpr UnityEngine::InputSystem::XR::XRDeviceDescriptor __get_descriptor() const;

static ::ArrayW<::StringW> __declspec(property(get=__get_poseSubControlNames, put=__set_poseSubControlNames))  poseSubControlNames;

static void __set_poseSubControlNames(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_poseSubControlNames() ;

static ::ArrayW<UnityEngine::InputSystem::XR::FeatureType> __declspec(property(get=__get_poseSubControlTypes, put=__set_poseSubControlTypes))  poseSubControlTypes;

static void __set_poseSubControlTypes(::ArrayW<UnityEngine::InputSystem::XR::FeatureType> value) ;

static ::ArrayW<UnityEngine::InputSystem::XR::FeatureType> __get_poseSubControlTypes() ;


// Methods

/// @brief Method GetSizeOfFeature addr 0x29342ec size 0x78 virtual false final false
static uint32_t GetSizeOfFeature(UnityEngine::InputSystem::XR::XRFeatureDescriptor featureDescriptor) ;

/// @brief Method SanitizeString addr 0x2934364 size 0x160 virtual false final false
static ::StringW SanitizeString(::StringW original, bool allowPaths) ;

/// @brief Method OnFindLayoutForDevice addr 0x29344c4 size 0x454 virtual false final false
static ::StringW OnFindLayoutForDevice(ByRef<UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout, UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate executeCommandDelegate) ;

/// @brief Method ConvertPotentialAliasToName addr 0x2934928 size 0x17c virtual false final false
static ::StringW ConvertPotentialAliasToName(UnityEngine::InputSystem::Layouts::InputControlLayout layout, ::StringW nameOrAlias) ;

/// @brief Method IsSubControl addr 0x2934aa4 size 0x1c virtual false final false
 bool IsSubControl(::StringW name) ;

/// @brief Method GetParentControlName addr 0x2934ac0 size 0x38 virtual false final false
 ::StringW GetParentControlName(::StringW name) ;

/// @brief Method IsPoseControl addr 0x2934af8 size 0x154 virtual false final false
 bool IsPoseControl(System::Collections::Generic::List_1<UnityEngine::InputSystem::XR::XRFeatureDescriptor> features, int32_t startIndex) ;

/// @brief Method Build addr 0x2934c4c size 0xb04 virtual false final false
 UnityEngine::InputSystem::Layouts::InputControlLayout Build() ;

// Ctor Parameters []
explicit XRLayoutBuilder() ;

/// @brief Method .ctor addr 0x2934920 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
NEED_NO_BOX(UnityEngine::InputSystem::XR::UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::UnityEngine__InputSystem__XR__XRLayoutBuilder____c__DisplayClass5_0, "UnityEngine.InputSystem.XR", "XRLayoutBuilder/<>c__DisplayClass5_0");
NEED_NO_BOX(UnityEngine::InputSystem::XR::XRLayoutBuilder);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::XRLayoutBuilder, "UnityEngine.InputSystem.XR", "XRLayoutBuilder");
