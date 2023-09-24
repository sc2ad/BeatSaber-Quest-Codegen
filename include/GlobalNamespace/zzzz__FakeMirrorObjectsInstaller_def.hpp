#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class MirroredBombNoteController;
}
namespace GlobalNamespace {
class MirroredGameNoteController;
}
namespace GlobalNamespace {
class MirroredObstacleController;
}
namespace GlobalNamespace {
class IntSO;
}
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets;
}
namespace GlobalNamespace {
class MirroredSliderController;
}
namespace GlobalNamespace {
class GlobalNamespace__FakeMirrorObjectsInstaller____c;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
struct BindingId;
}
// Forward declare root types
namespace GlobalNamespace {
class FakeMirrorObjectsInstaller;
}
namespace GlobalNamespace {
class GlobalNamespace__FakeMirrorObjectsInstaller____c;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5478))
// CS Name: FakeMirrorObjectsInstaller::<>c
class CORDL_TYPE GlobalNamespace__FakeMirrorObjectsInstaller____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__FakeMirrorObjectsInstaller____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FakeMirrorObjectsInstaller____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__FakeMirrorObjectsInstaller____c(GlobalNamespace__FakeMirrorObjectsInstaller____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FakeMirrorObjectsInstaller____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__FakeMirrorObjectsInstaller____c(GlobalNamespace__FakeMirrorObjectsInstaller____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__FakeMirrorObjectsInstaller____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__FakeMirrorObjectsInstaller____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__FakeMirrorObjectsInstaller____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__FakeMirrorObjectsInstaller____c& operator=(GlobalNamespace__FakeMirrorObjectsInstaller____c&& o) noexcept = default;
  constexpr GlobalNamespace__FakeMirrorObjectsInstaller____c& operator=(GlobalNamespace__FakeMirrorObjectsInstaller____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__FakeMirrorObjectsInstaller____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__FakeMirrorObjectsInstaller____c value) ;

static GlobalNamespace::GlobalNamespace__FakeMirrorObjectsInstaller____c __get___9() ;

static System::Func_2<Zenject::BindingId,bool> __declspec(property(get=__get___9__11_0, put=__set___9__11_0))  __9__11_0;

static void __set___9__11_0(System::Func_2<Zenject::BindingId,bool> value) ;

static System::Func_2<Zenject::BindingId,bool> __get___9__11_0() ;


// Methods

static GlobalNamespace::GlobalNamespace__FakeMirrorObjectsInstaller____c New_ctor() ;

/// @brief Method .ctor addr 0x2118024 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <InstallBindings>b__11_0 addr 0x211802c size 0x94 virtual false final false
 bool _InstallBindings_b__11_0(Zenject::BindingId t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FakeMirrorObjectsInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5479))
// CS Name: FakeMirrorObjectsInstaller
class CORDL_TYPE FakeMirrorObjectsInstaller : public Zenject::MonoInstaller {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__FakeMirrorObjectsInstaller____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~FakeMirrorObjectsInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "FakeMirrorObjectsInstaller", modifiers: " const&", def_value: None }]
constexpr FakeMirrorObjectsInstaller(FakeMirrorObjectsInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FakeMirrorObjectsInstaller", modifiers: "&&", def_value: None }]
constexpr FakeMirrorObjectsInstaller(FakeMirrorObjectsInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FakeMirrorObjectsInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr FakeMirrorObjectsInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FakeMirrorObjectsInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FakeMirrorObjectsInstaller& operator=(FakeMirrorObjectsInstaller&& o) noexcept = default;
  constexpr FakeMirrorObjectsInstaller& operator=(FakeMirrorObjectsInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MirroredGameNoteController __declspec(property(get=__get__mirroredGameNoteControllerPrefab, put=__set__mirroredGameNoteControllerPrefab))  _mirroredGameNoteControllerPrefab;

constexpr void __set__mirroredGameNoteControllerPrefab(GlobalNamespace::MirroredGameNoteController value) ;

constexpr GlobalNamespace::MirroredGameNoteController __get__mirroredGameNoteControllerPrefab() const;

 GlobalNamespace::MirroredGameNoteController __declspec(property(get=__get__mirroredBurstSliderHeadGameNoteControllerPrefab, put=__set__mirroredBurstSliderHeadGameNoteControllerPrefab))  _mirroredBurstSliderHeadGameNoteControllerPrefab;

constexpr void __set__mirroredBurstSliderHeadGameNoteControllerPrefab(GlobalNamespace::MirroredGameNoteController value) ;

constexpr GlobalNamespace::MirroredGameNoteController __get__mirroredBurstSliderHeadGameNoteControllerPrefab() const;

 GlobalNamespace::MirroredGameNoteController __declspec(property(get=__get__mirroredBurstSliderGameNoteControllerPrefab, put=__set__mirroredBurstSliderGameNoteControllerPrefab))  _mirroredBurstSliderGameNoteControllerPrefab;

constexpr void __set__mirroredBurstSliderGameNoteControllerPrefab(GlobalNamespace::MirroredGameNoteController value) ;

constexpr GlobalNamespace::MirroredGameNoteController __get__mirroredBurstSliderGameNoteControllerPrefab() const;

 GlobalNamespace::MirroredGameNoteController __declspec(property(get=__get__mirroredBurstSliderFillControllerPrefab, put=__set__mirroredBurstSliderFillControllerPrefab))  _mirroredBurstSliderFillControllerPrefab;

constexpr void __set__mirroredBurstSliderFillControllerPrefab(GlobalNamespace::MirroredGameNoteController value) ;

constexpr GlobalNamespace::MirroredGameNoteController __get__mirroredBurstSliderFillControllerPrefab() const;

 GlobalNamespace::MirroredBombNoteController __declspec(property(get=__get__mirroredBombNoteControllerPrefab, put=__set__mirroredBombNoteControllerPrefab))  _mirroredBombNoteControllerPrefab;

constexpr void __set__mirroredBombNoteControllerPrefab(GlobalNamespace::MirroredBombNoteController value) ;

constexpr GlobalNamespace::MirroredBombNoteController __get__mirroredBombNoteControllerPrefab() const;

 GlobalNamespace::MirroredObstacleController __declspec(property(get=__get__mirroredObstacleControllerPrefab, put=__set__mirroredObstacleControllerPrefab))  _mirroredObstacleControllerPrefab;

constexpr void __set__mirroredObstacleControllerPrefab(GlobalNamespace::MirroredObstacleController value) ;

constexpr GlobalNamespace::MirroredObstacleController __get__mirroredObstacleControllerPrefab() const;

 GlobalNamespace::MirroredSliderController __declspec(property(get=__get__mirroredSliderControllerPrefab, put=__set__mirroredSliderControllerPrefab))  _mirroredSliderControllerPrefab;

constexpr void __set__mirroredSliderControllerPrefab(GlobalNamespace::MirroredSliderController value) ;

constexpr GlobalNamespace::MirroredSliderController __get__mirroredSliderControllerPrefab() const;

 GlobalNamespace::IntSO __declspec(property(get=__get__mirrorGraphicsSettings, put=__set__mirrorGraphicsSettings))  _mirrorGraphicsSettings;

constexpr void __set__mirrorGraphicsSettings(GlobalNamespace::IntSO value) ;

constexpr GlobalNamespace::IntSO __get__mirrorGraphicsSettings() const;

 GlobalNamespace::MirrorRendererGraphicsSettingsPresets __declspec(property(get=__get__mirrorRendererGraphicsSettingsPresets, put=__set__mirrorRendererGraphicsSettingsPresets))  _mirrorRendererGraphicsSettingsPresets;

constexpr void __set__mirrorRendererGraphicsSettingsPresets(GlobalNamespace::MirrorRendererGraphicsSettingsPresets value) ;

constexpr GlobalNamespace::MirrorRendererGraphicsSettingsPresets __get__mirrorRendererGraphicsSettingsPresets() const;


// Properties

 GlobalNamespace::MirroredGameNoteController __declspec(property(get=get_mirroredGameNoteControllerPrefab))  mirroredGameNoteControllerPrefab;


// Methods

/// @brief Method get_mirroredGameNoteControllerPrefab addr 0x2117a30 size 0x8 virtual false final false
 GlobalNamespace::MirroredGameNoteController get_mirroredGameNoteControllerPrefab() ;

/// @brief Method InstallBindings addr 0x2117a38 size 0x580 virtual true final false
 void InstallBindings() ;

static GlobalNamespace::FakeMirrorObjectsInstaller New_ctor() ;

/// @brief Method .ctor addr 0x2117fb8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FakeMirrorObjectsInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FakeMirrorObjectsInstaller, "", "FakeMirrorObjectsInstaller");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__FakeMirrorObjectsInstaller____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__FakeMirrorObjectsInstaller____c, "", "FakeMirrorObjectsInstaller/<>c");
