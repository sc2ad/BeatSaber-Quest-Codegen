#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
namespace {
namespace GlobalNamespace {
class NoteDebris;
}
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteDebrisPoolInstaller;
}
// Type: ::NoteDebrisPoolInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11089))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5488))
// CS Name: NoteDebrisPoolInstaller
class CORDL_TYPE NoteDebrisPoolInstaller : public ::Zenject::ScriptableObjectInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~NoteDebrisPoolInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteDebrisPoolInstaller", modifiers: " const&", def_value: None }]
constexpr NoteDebrisPoolInstaller(NoteDebrisPoolInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteDebrisPoolInstaller", modifiers: "&&", def_value: None }]
constexpr NoteDebrisPoolInstaller(NoteDebrisPoolInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteDebrisPoolInstaller(void* ptr) noexcept : ::Zenject::ScriptableObjectInstaller(ptr) {
}


  constexpr NoteDebrisPoolInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteDebrisPoolInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteDebrisPoolInstaller& operator=(NoteDebrisPoolInstaller&& o) noexcept = default;
  constexpr NoteDebrisPoolInstaller& operator=(NoteDebrisPoolInstaller const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::NoteDebris __declspec(property(get=__get__normalNoteDebrisHDPrefab, put=__set__normalNoteDebrisHDPrefab))  _normalNoteDebrisHDPrefab;

constexpr void __set__normalNoteDebrisHDPrefab(::GlobalNamespace::NoteDebris value) ;

constexpr ::GlobalNamespace::NoteDebris __get__normalNoteDebrisHDPrefab() const;

 ::GlobalNamespace::NoteDebris __declspec(property(get=__get__normalNoteDebrisLWPrefab, put=__set__normalNoteDebrisLWPrefab))  _normalNoteDebrisLWPrefab;

constexpr void __set__normalNoteDebrisLWPrefab(::GlobalNamespace::NoteDebris value) ;

constexpr ::GlobalNamespace::NoteDebris __get__normalNoteDebrisLWPrefab() const;

 ::GlobalNamespace::NoteDebris __declspec(property(get=__get__burstSliderHeadNoteDebrisHDPrefab, put=__set__burstSliderHeadNoteDebrisHDPrefab))  _burstSliderHeadNoteDebrisHDPrefab;

constexpr void __set__burstSliderHeadNoteDebrisHDPrefab(::GlobalNamespace::NoteDebris value) ;

constexpr ::GlobalNamespace::NoteDebris __get__burstSliderHeadNoteDebrisHDPrefab() const;

 ::GlobalNamespace::NoteDebris __declspec(property(get=__get__burstSliderHeadNoteDebrisLWPrefab, put=__set__burstSliderHeadNoteDebrisLWPrefab))  _burstSliderHeadNoteDebrisLWPrefab;

constexpr void __set__burstSliderHeadNoteDebrisLWPrefab(::GlobalNamespace::NoteDebris value) ;

constexpr ::GlobalNamespace::NoteDebris __get__burstSliderHeadNoteDebrisLWPrefab() const;

 ::GlobalNamespace::NoteDebris __declspec(property(get=__get__burstSliderElementNoteHDPrefab, put=__set__burstSliderElementNoteHDPrefab))  _burstSliderElementNoteHDPrefab;

constexpr void __set__burstSliderElementNoteHDPrefab(::GlobalNamespace::NoteDebris value) ;

constexpr ::GlobalNamespace::NoteDebris __get__burstSliderElementNoteHDPrefab() const;

 ::GlobalNamespace::NoteDebris __declspec(property(get=__get__burstSliderElementNoteLWPrefab, put=__set__burstSliderElementNoteLWPrefab))  _burstSliderElementNoteLWPrefab;

constexpr void __set__burstSliderElementNoteLWPrefab(::GlobalNamespace::NoteDebris value) ;

constexpr ::GlobalNamespace::NoteDebris __get__burstSliderElementNoteLWPrefab() const;

 ::GlobalNamespace::BoolSO __declspec(property(get=__get__noteDebrisHDConditionVariable, put=__set__noteDebrisHDConditionVariable))  _noteDebrisHDConditionVariable;

constexpr void __set__noteDebrisHDConditionVariable(::GlobalNamespace::BoolSO value) ;

constexpr ::GlobalNamespace::BoolSO __get__noteDebrisHDConditionVariable() const;


// Methods

/// @brief Method InstallBindings addr 0x211afac size 0x234 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit NoteDebrisPoolInstaller() ;

/// @brief Method .ctor addr 0x211b1e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::NoteDebrisPoolInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDebrisPoolInstaller, "", "NoteDebrisPoolInstaller");
