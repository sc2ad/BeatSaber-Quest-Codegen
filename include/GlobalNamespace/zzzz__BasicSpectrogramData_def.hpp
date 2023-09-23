#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicSpectrogramData;
}
// Type: ::BasicSpectrogramData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5098))
// CS Name: BasicSpectrogramData
class CORDL_TYPE BasicSpectrogramData : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BasicSpectrogramData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicSpectrogramData", modifiers: " const&", def_value: None }]
constexpr BasicSpectrogramData(BasicSpectrogramData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicSpectrogramData", modifiers: "&&", def_value: None }]
constexpr BasicSpectrogramData(BasicSpectrogramData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicSpectrogramData(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BasicSpectrogramData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicSpectrogramData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicSpectrogramData& operator=(BasicSpectrogramData&& o) noexcept = default;
  constexpr BasicSpectrogramData& operator=(BasicSpectrogramData const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get__audioSource() const;

 float_t __declspec(property(get=__get__instantChangeThreshold, put=__set__instantChangeThreshold))  _instantChangeThreshold;

constexpr void __set__instantChangeThreshold(float_t value) ;

constexpr float_t __get__instantChangeThreshold() const;

/// @brief Field kNumberOfSamples offset 0
static constexpr int32_t  kNumberOfSamples{64};

 bool __declspec(property(get=__get__hasData, put=__set__hasData))  _hasData;

constexpr void __set__hasData(bool value) ;

constexpr bool __get__hasData() const;

 bool __declspec(property(get=__get__hasProcessedData, put=__set__hasProcessedData))  _hasProcessedData;

constexpr void __set__hasProcessedData(bool value) ;

constexpr bool __get__hasProcessedData() const;

 ::ArrayW<float_t> __declspec(property(get=__get__samples, put=__set__samples))  _samples;

constexpr void __set__samples(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__samples() const;

 System::Collections::Generic::List_1<float_t> __declspec(property(get=__get__processedSamples, put=__set__processedSamples))  _processedSamples;

constexpr void __set__processedSamples(System::Collections::Generic::List_1<float_t> value) ;

constexpr System::Collections::Generic::List_1<float_t> __get__processedSamples() const;


// Properties

 ::ArrayW<float_t> __declspec(property(get=get_Samples))  Samples;

 System::Collections::Generic::List_1<float_t> __declspec(property(get=get_ProcessedSamples))  ProcessedSamples;


// Methods

/// @brief Method get_Samples addr 0x226b94c size 0x98 virtual false final false
 ::ArrayW<float_t> get_Samples() ;

/// @brief Method get_ProcessedSamples addr 0x226b9e4 size 0x3c virtual false final false
 System::Collections::Generic::List_1<float_t> get_ProcessedSamples() ;

/// @brief Method Awake addr 0x226bbb0 size 0xb0 virtual false final false
 void Awake() ;

/// @brief Method LateUpdate addr 0x226bc60 size 0x8 virtual false final false
 void LateUpdate() ;

/// @brief Method ProcessSamples addr 0x226ba20 size 0x190 virtual false final false
 void ProcessSamples(::ArrayW<float_t> sourceSamples, System::Collections::Generic::List_1<float_t> processedSamples) ;

// Ctor Parameters []
explicit BasicSpectrogramData() ;

/// @brief Method .ctor addr 0x226bc68 size 0xb8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BasicSpectrogramData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicSpectrogramData, "", "BasicSpectrogramData");
