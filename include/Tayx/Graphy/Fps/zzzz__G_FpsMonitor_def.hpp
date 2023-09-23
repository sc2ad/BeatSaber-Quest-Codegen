#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace Tayx::Graphy::Fps {
class G_FpsMonitor;
}
namespace Tayx::Graphy::Fps {
class Tayx__Graphy__Fps__G_FpsMonitor____c;
}
// Type: ::<>c
namespace Tayx::Graphy::Fps {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15205))
// CS Name: Tayx.Graphy.Fps.G_FpsMonitor::<>c
class CORDL_TYPE Tayx__Graphy__Fps__G_FpsMonitor____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Tayx__Graphy__Fps__G_FpsMonitor____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tayx__Graphy__Fps__G_FpsMonitor____c", modifiers: " const&", def_value: None }]
constexpr Tayx__Graphy__Fps__G_FpsMonitor____c(Tayx__Graphy__Fps__G_FpsMonitor____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tayx__Graphy__Fps__G_FpsMonitor____c", modifiers: "&&", def_value: None }]
constexpr Tayx__Graphy__Fps__G_FpsMonitor____c(Tayx__Graphy__Fps__G_FpsMonitor____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tayx__Graphy__Fps__G_FpsMonitor____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tayx__Graphy__Fps__G_FpsMonitor____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tayx__Graphy__Fps__G_FpsMonitor____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tayx__Graphy__Fps__G_FpsMonitor____c& operator=(Tayx__Graphy__Fps__G_FpsMonitor____c&& o) noexcept = default;
  constexpr Tayx__Graphy__Fps__G_FpsMonitor____c& operator=(Tayx__Graphy__Fps__G_FpsMonitor____c const& o) noexcept = default;
                


// Fields

static Tayx::Graphy::Fps::Tayx__Graphy__Fps__G_FpsMonitor____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Tayx::Graphy::Fps::Tayx__Graphy__Fps__G_FpsMonitor____c value) ;

static Tayx::Graphy::Fps::Tayx__Graphy__Fps__G_FpsMonitor____c __get___9() ;

static System::Comparison_1<int16_t> __declspec(property(get=__get___9__25_0, put=__set___9__25_0))  __9__25_0;

static void __set___9__25_0(System::Comparison_1<int16_t> value) ;

static System::Comparison_1<int16_t> __get___9__25_0() ;


// Methods

// Ctor Parameters []
explicit Tayx__Graphy__Fps__G_FpsMonitor____c() ;

/// @brief Method .ctor addr 0x28762a4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Update>b__25_0 addr 0x28762ac size 0x20 virtual false final false
 int32_t _Update_b__25_0(int16_t x, int16_t y) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Fps
// Type: Tayx.Graphy.Fps::G_FpsMonitor
namespace Tayx::Graphy::Fps {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15206))
// CS Name: Tayx.Graphy.Fps.G_FpsMonitor
class CORDL_TYPE G_FpsMonitor : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = Tayx::Graphy::Fps::Tayx__Graphy__Fps__G_FpsMonitor____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~G_FpsMonitor() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_FpsMonitor", modifiers: " const&", def_value: None }]
constexpr G_FpsMonitor(G_FpsMonitor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_FpsMonitor", modifiers: "&&", def_value: None }]
constexpr G_FpsMonitor(G_FpsMonitor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_FpsMonitor(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr G_FpsMonitor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_FpsMonitor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_FpsMonitor& operator=(G_FpsMonitor&& o) noexcept = default;
  constexpr G_FpsMonitor& operator=(G_FpsMonitor const& o) noexcept = default;
                


// Fields

 ::ArrayW<int16_t> __declspec(property(get=__get_m_fpsSamples, put=__set_m_fpsSamples))  m_fpsSamples;

constexpr void __set_m_fpsSamples(::ArrayW<int16_t> value) ;

constexpr ::ArrayW<int16_t> __get_m_fpsSamples() const;

 ::ArrayW<int16_t> __declspec(property(get=__get_m_fpsSamplesSorted, put=__set_m_fpsSamplesSorted))  m_fpsSamplesSorted;

constexpr void __set_m_fpsSamplesSorted(::ArrayW<int16_t> value) ;

constexpr ::ArrayW<int16_t> __get_m_fpsSamplesSorted() const;

 int16_t __declspec(property(get=__get_m_fpsSamplesCapacity, put=__set_m_fpsSamplesCapacity))  m_fpsSamplesCapacity;

constexpr void __set_m_fpsSamplesCapacity(int16_t value) ;

constexpr int16_t __get_m_fpsSamplesCapacity() const;

 int16_t __declspec(property(get=__get_m_onePercentSamples, put=__set_m_onePercentSamples))  m_onePercentSamples;

constexpr void __set_m_onePercentSamples(int16_t value) ;

constexpr int16_t __get_m_onePercentSamples() const;

 int16_t __declspec(property(get=__get_m_zero1PercentSamples, put=__set_m_zero1PercentSamples))  m_zero1PercentSamples;

constexpr void __set_m_zero1PercentSamples(int16_t value) ;

constexpr int16_t __get_m_zero1PercentSamples() const;

 int16_t __declspec(property(get=__get_m_fpsSamplesCount, put=__set_m_fpsSamplesCount))  m_fpsSamplesCount;

constexpr void __set_m_fpsSamplesCount(int16_t value) ;

constexpr int16_t __get_m_fpsSamplesCount() const;

 int16_t __declspec(property(get=__get_m_indexSample, put=__set_m_indexSample))  m_indexSample;

constexpr void __set_m_indexSample(int16_t value) ;

constexpr int16_t __get_m_indexSample() const;

 float_t __declspec(property(get=__get_m_unscaledDeltaTime, put=__set_m_unscaledDeltaTime))  m_unscaledDeltaTime;

constexpr void __set_m_unscaledDeltaTime(float_t value) ;

constexpr float_t __get_m_unscaledDeltaTime() const;

 int16_t __declspec(property(get=__get__CurrentFPS_k__BackingField, put=__set__CurrentFPS_k__BackingField))  _CurrentFPS_k__BackingField;

constexpr void __set__CurrentFPS_k__BackingField(int16_t value) ;

constexpr int16_t __get__CurrentFPS_k__BackingField() const;

 int16_t __declspec(property(get=__get__AverageFPS_k__BackingField, put=__set__AverageFPS_k__BackingField))  _AverageFPS_k__BackingField;

constexpr void __set__AverageFPS_k__BackingField(int16_t value) ;

constexpr int16_t __get__AverageFPS_k__BackingField() const;

 int16_t __declspec(property(get=__get__OnePercentFPS_k__BackingField, put=__set__OnePercentFPS_k__BackingField))  _OnePercentFPS_k__BackingField;

constexpr void __set__OnePercentFPS_k__BackingField(int16_t value) ;

constexpr int16_t __get__OnePercentFPS_k__BackingField() const;

 int16_t __declspec(property(get=__get__Zero1PercentFps_k__BackingField, put=__set__Zero1PercentFps_k__BackingField))  _Zero1PercentFps_k__BackingField;

constexpr void __set__Zero1PercentFps_k__BackingField(int16_t value) ;

constexpr int16_t __get__Zero1PercentFps_k__BackingField() const;


// Properties

 int16_t __declspec(property(get=get_CurrentFPS, put=set_CurrentFPS))  CurrentFPS;

 int16_t __declspec(property(get=get_AverageFPS, put=set_AverageFPS))  AverageFPS;

 int16_t __declspec(property(get=get_OnePercentFPS, put=set_OnePercentFPS))  OnePercentFPS;

 int16_t __declspec(property(get=get_Zero1PercentFps, put=set_Zero1PercentFps))  Zero1PercentFps;


// Methods

/// @brief Method get_CurrentFPS addr 0x2875db4 size 0x8 virtual false final false
 int16_t get_CurrentFPS() ;

/// @brief Method set_CurrentFPS addr 0x2875dbc size 0x8 virtual false final false
 void set_CurrentFPS(int16_t value) ;

/// @brief Method get_AverageFPS addr 0x2875dc4 size 0x8 virtual false final false
 int16_t get_AverageFPS() ;

/// @brief Method set_AverageFPS addr 0x2875dcc size 0x8 virtual false final false
 void set_AverageFPS(int16_t value) ;

/// @brief Method get_OnePercentFPS addr 0x2875dd4 size 0x8 virtual false final false
 int16_t get_OnePercentFPS() ;

/// @brief Method set_OnePercentFPS addr 0x2875ddc size 0x8 virtual false final false
 void set_OnePercentFPS(int16_t value) ;

/// @brief Method get_Zero1PercentFps addr 0x2875de4 size 0x8 virtual false final false
 int16_t get_Zero1PercentFps() ;

/// @brief Method set_Zero1PercentFps addr 0x2875dec size 0x8 virtual false final false
 void set_Zero1PercentFps(int16_t value) ;

/// @brief Method Awake addr 0x2875df4 size 0x4 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x2875e94 size 0x390 virtual false final false
 void Update() ;

/// @brief Method UpdateParameters addr 0x2875c70 size 0x40 virtual false final false
 void UpdateParameters() ;

/// @brief Method Init addr 0x2875df8 size 0x9c virtual false final false
 void Init() ;

// Ctor Parameters []
explicit G_FpsMonitor() ;

/// @brief Method .ctor addr 0x2876224 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Fps
NEED_NO_BOX(Tayx::Graphy::Fps::G_FpsMonitor);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Fps::G_FpsMonitor, "Tayx.Graphy.Fps", "G_FpsMonitor");
NEED_NO_BOX(Tayx::Graphy::Fps::Tayx__Graphy__Fps__G_FpsMonitor____c);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Fps::Tayx__Graphy__Fps__G_FpsMonitor____c, "Tayx.Graphy.Fps", "G_FpsMonitor/<>c");
