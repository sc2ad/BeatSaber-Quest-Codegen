#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "Zenject/zzzz__Installer_2_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class InjectTypeInfo;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace Zenject {
class AnimatorInstaller;
}
// Type: Zenject::AnimatorInstaller
namespace Zenject {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11074), inst: 3770 }), TypeDefinitionIndex(TypeDefinitionIndex(15053)), TypeDefinitionIndex(TypeDefinitionIndex(11074))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11243))
// CS Name: Zenject.AnimatorInstaller
class CORDL_TYPE AnimatorInstaller : public ::Zenject::Installer_2<::UnityEngine::Animator,::Zenject::AnimatorInstaller> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AnimatorInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorInstaller", modifiers: " const&", def_value: None }]
constexpr AnimatorInstaller(AnimatorInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorInstaller", modifiers: "&&", def_value: None }]
constexpr AnimatorInstaller(AnimatorInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimatorInstaller(void* ptr) noexcept : ::Zenject::Installer_2<::UnityEngine::Animator,::Zenject::AnimatorInstaller>(ptr) {
}


  constexpr AnimatorInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimatorInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimatorInstaller& operator=(AnimatorInstaller&& o) noexcept = default;
  constexpr AnimatorInstaller& operator=(AnimatorInstaller const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Animator __declspec(property(get=__get__animator, put=__set__animator))  _animator;

constexpr void __set__animator(::UnityEngine::Animator value) ;

constexpr ::UnityEngine::Animator __get__animator() const;


// Methods

// Ctor Parameters [CppParam { name: "animator", ty: "::UnityEngine::Animator", modifiers: "", def_value: None }]
explicit AnimatorInstaller(::UnityEngine::Animator animator) ;

/// @brief Method .ctor addr 0x2d9510c size 0x5c virtual false final false
 void _ctor(::UnityEngine::Animator animator) ;

/// @brief Method InstallBindings addr 0x2d95168 size 0xb8 virtual true final false
 void InstallBindings() ;

/// @brief Method __zenCreate addr 0x2d95220 size 0xc4 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d952e4 size 0x274 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::AnimatorInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AnimatorInstaller, "Zenject", "AnimatorInstaller");
