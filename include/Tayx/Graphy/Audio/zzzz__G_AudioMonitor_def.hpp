#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class AudioListener;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace UnityEngine {
struct FFTWindow;
}
namespace Tayx::Graphy {
struct Tayx__Graphy__GraphyManager__LookForAudioListener;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
// Forward declare root types
namespace Tayx::Graphy::Audio {
class G_AudioMonitor;
}
// Type: Tayx.Graphy.Audio::G_AudioMonitor
namespace Tayx::Graphy::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15210))
// CS Name: Tayx.Graphy.Audio.G_AudioMonitor
class CORDL_TYPE G_AudioMonitor : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~G_AudioMonitor() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_AudioMonitor", modifiers: " const&", def_value: None }]
constexpr G_AudioMonitor(G_AudioMonitor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_AudioMonitor", modifiers: "&&", def_value: None }]
constexpr G_AudioMonitor(G_AudioMonitor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_AudioMonitor(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr G_AudioMonitor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_AudioMonitor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_AudioMonitor& operator=(G_AudioMonitor&& o) noexcept = default;
  constexpr G_AudioMonitor& operator=(G_AudioMonitor const& o) noexcept = default;
                


// Fields

/// @brief Field m_refValue offset 0
static constexpr float_t  m_refValue{1};

 Tayx::Graphy::GraphyManager __declspec(property(get=__get_m_graphyManager, put=__set_m_graphyManager))  m_graphyManager;

constexpr void __set_m_graphyManager(Tayx::Graphy::GraphyManager value) ;

constexpr Tayx::Graphy::GraphyManager __get_m_graphyManager() const;

 UnityEngine::AudioListener __declspec(property(get=__get_m_audioListener, put=__set_m_audioListener))  m_audioListener;

constexpr void __set_m_audioListener(UnityEngine::AudioListener value) ;

constexpr UnityEngine::AudioListener __get_m_audioListener() const;

 Tayx::Graphy::Tayx__Graphy__GraphyManager__LookForAudioListener __declspec(property(get=__get_m_findAudioListenerInCameraIfNull, put=__set_m_findAudioListenerInCameraIfNull))  m_findAudioListenerInCameraIfNull;

constexpr void __set_m_findAudioListenerInCameraIfNull(Tayx::Graphy::Tayx__Graphy__GraphyManager__LookForAudioListener value) ;

constexpr Tayx::Graphy::Tayx__Graphy__GraphyManager__LookForAudioListener __get_m_findAudioListenerInCameraIfNull() const;

 UnityEngine::FFTWindow __declspec(property(get=__get_m_FFTWindow, put=__set_m_FFTWindow))  m_FFTWindow;

constexpr void __set_m_FFTWindow(UnityEngine::FFTWindow value) ;

constexpr UnityEngine::FFTWindow __get_m_FFTWindow() const;

 int32_t __declspec(property(get=__get_m_spectrumSize, put=__set_m_spectrumSize))  m_spectrumSize;

constexpr void __set_m_spectrumSize(int32_t value) ;

constexpr int32_t __get_m_spectrumSize() const;

 ::ArrayW<float_t> __declspec(property(get=__get__Spectrum_k__BackingField, put=__set__Spectrum_k__BackingField))  _Spectrum_k__BackingField;

constexpr void __set__Spectrum_k__BackingField(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__Spectrum_k__BackingField() const;

 ::ArrayW<float_t> __declspec(property(get=__get__SpectrumHighestValues_k__BackingField, put=__set__SpectrumHighestValues_k__BackingField))  _SpectrumHighestValues_k__BackingField;

constexpr void __set__SpectrumHighestValues_k__BackingField(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__SpectrumHighestValues_k__BackingField() const;

 float_t __declspec(property(get=__get__MaxDB_k__BackingField, put=__set__MaxDB_k__BackingField))  _MaxDB_k__BackingField;

constexpr void __set__MaxDB_k__BackingField(float_t value) ;

constexpr float_t __get__MaxDB_k__BackingField() const;


// Properties

 ::ArrayW<float_t> __declspec(property(get=get_Spectrum, put=set_Spectrum))  Spectrum;

 ::ArrayW<float_t> __declspec(property(get=get_SpectrumHighestValues, put=set_SpectrumHighestValues))  SpectrumHighestValues;

 float_t __declspec(property(get=get_MaxDB, put=set_MaxDB))  MaxDB;

 bool __declspec(property(get=get_SpectrumDataAvailable))  SpectrumDataAvailable;


// Methods

/// @brief Method get_Spectrum addr 0x28778d4 size 0x8 virtual false final false
 ::ArrayW<float_t> get_Spectrum() ;

/// @brief Method set_Spectrum addr 0x28778dc size 0x8 virtual false final false
 void set_Spectrum(::ArrayW<float_t> value) ;

/// @brief Method get_SpectrumHighestValues addr 0x28778e4 size 0x8 virtual false final false
 ::ArrayW<float_t> get_SpectrumHighestValues() ;

/// @brief Method set_SpectrumHighestValues addr 0x28778ec size 0x8 virtual false final false
 void set_SpectrumHighestValues(::ArrayW<float_t> value) ;

/// @brief Method get_MaxDB addr 0x28778f4 size 0x8 virtual false final false
 float_t get_MaxDB() ;

/// @brief Method set_MaxDB addr 0x28778fc size 0x8 virtual false final false
 void set_MaxDB(float_t value) ;

/// @brief Method get_SpectrumDataAvailable addr 0x28767f4 size 0x60 virtual false final false
 bool get_SpectrumDataAvailable() ;

/// @brief Method Awake addr 0x2877904 size 0x4 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x28779f0 size 0x1ec virtual false final false
 void Update() ;

/// @brief Method OnDestroy addr 0x2877c90 size 0xa4 virtual false final false
 void OnDestroy() ;

/// @brief Method UpdateParameters addr 0x2877724 size 0xd0 virtual false final false
 void UpdateParameters() ;

/// @brief Method lin2dB addr 0x2876fcc size 0x30 virtual false final false
 float_t lin2dB(float_t linear) ;

/// @brief Method dBNormalized addr 0x2876ffc size 0x14 virtual false final false
 float_t dBNormalized(float_t db) ;

/// @brief Method FindAudioListener addr 0x2877bdc size 0xb4 virtual false final false
 UnityEngine::AudioListener FindAudioListener() ;

/// @brief Method OnSceneLoaded addr 0x2877d34 size 0x24 virtual false final false
 void OnSceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode loadSceneMode) ;

/// @brief Method Init addr 0x2877908 size 0xe8 virtual false final false
 void Init() ;

// Ctor Parameters []
explicit G_AudioMonitor() ;

/// @brief Method .ctor addr 0x2877d58 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Audio
NEED_NO_BOX(Tayx::Graphy::Audio::G_AudioMonitor);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Audio::G_AudioMonitor, "Tayx.Graphy.Audio", "G_AudioMonitor");
