#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightGroupSubsystem_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TX,typename TY,typename TZ>
class LightTransformGroup_3;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TX,::cordl_internals::il2cpp_reference_type TY,::cordl_internals::il2cpp_reference_type TZ>
class LightTransformGroup_3<TX,TY,TZ>;
}
// Type: ::LightTransformGroup`3
// Type: ::LightTransformGroup`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TX,::cordl_internals::il2cpp_reference_type TY,::cordl_internals::il2cpp_reference_type TZ>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5043)), TypeDefinitionIndex(TypeDefinitionIndex(5035))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5043), inst: 5155 })
// CS Name: LightTransformGroup`3
class CORDL_TYPE LightTransformGroup_3<TX,TY,TZ> : public ::GlobalNamespace::LightGroupSubsystem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~LightTransformGroup_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightTransformGroup_3", modifiers: " const&", def_value: None }]
constexpr LightTransformGroup_3(LightTransformGroup_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightTransformGroup_3", modifiers: "&&", def_value: None }]
constexpr LightTransformGroup_3(LightTransformGroup_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightTransformGroup_3(void* ptr) noexcept : ::GlobalNamespace::LightGroupSubsystem(ptr) {
}


  constexpr LightTransformGroup_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightTransformGroup_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightTransformGroup_3& operator=(LightTransformGroup_3&& o) noexcept = default;
  constexpr LightTransformGroup_3& operator=(LightTransformGroup_3 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__mirrorX, put=__set__mirrorX))  _mirrorX;

constexpr void __set__mirrorX(bool value) ;

constexpr bool __get__mirrorX() const;

 bool __declspec(property(get=__get__mirrorY, put=__set__mirrorY))  _mirrorY;

constexpr void __set__mirrorY(bool value) ;

constexpr bool __get__mirrorY() const;

 bool __declspec(property(get=__get__mirrorZ, put=__set__mirrorZ))  _mirrorZ;

constexpr void __set__mirrorZ(bool value) ;

constexpr bool __get__mirrorZ() const;

 bool __declspec(property(get=__get__disableAutomaticTransformGathering, put=__set__disableAutomaticTransformGathering))  _disableAutomaticTransformGathering;

constexpr void __set__disableAutomaticTransformGathering(bool value) ;

constexpr bool __get__disableAutomaticTransformGathering() const;

 ::System::Collections::Generic::List_1<::UnityEngine::Transform> __declspec(property(get=__get__xTransforms, put=__set__xTransforms))  _xTransforms;

constexpr void __set__xTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform> __get__xTransforms() const;

 ::System::Collections::Generic::List_1<::UnityEngine::Transform> __declspec(property(get=__get__yTransforms, put=__set__yTransforms))  _yTransforms;

constexpr void __set__yTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform> __get__yTransforms() const;

 ::System::Collections::Generic::List_1<::UnityEngine::Transform> __declspec(property(get=__get__zTransforms, put=__set__zTransforms))  _zTransforms;

constexpr void __set__zTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform> __get__zTransforms() const;


// Properties

 bool __declspec(property(get=get_mirrorX))  mirrorX;

 bool __declspec(property(get=get_mirrorY))  mirrorY;

 bool __declspec(property(get=get_mirrorZ))  mirrorZ;

 ::System::Collections::Generic::List_1<::UnityEngine::Transform> __declspec(property(get=get_xTransforms))  xTransforms;

 ::System::Collections::Generic::List_1<::UnityEngine::Transform> __declspec(property(get=get_yTransforms))  yTransforms;

 ::System::Collections::Generic::List_1<::UnityEngine::Transform> __declspec(property(get=get_zTransforms))  zTransforms;

 int32_t __declspec(property(get=get_count))  count;


// Methods

/// @brief Method get_mirrorX addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_mirrorX() ;

/// @brief Method get_mirrorY addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_mirrorY() ;

/// @brief Method get_mirrorZ addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_mirrorZ() ;

/// @brief Method get_xTransforms addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::Transform> get_xTransforms() ;

/// @brief Method get_yTransforms addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::Transform> get_yTransforms() ;

/// @brief Method get_zTransforms addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::Transform> get_zTransforms() ;

/// @brief Method get_count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_count() ;

// Ctor Parameters []
explicit LightTransformGroup_3() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::LightTransformGroup_3, "", "LightTransformGroup`3");
