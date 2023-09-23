#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplierValuesRecorder;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplierValuesRecorder__MultiplierValue;
}
// Type: ::MultiplierValue
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5360))
// CS Name: MultiplierValuesRecorder::MultiplierValue
struct CORDL_TYPE GlobalNamespace__MultiplierValuesRecorder__MultiplierValue : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "multiplier", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MultiplierValuesRecorder__MultiplierValue(int32_t multiplier, float_t time) noexcept;


                    constexpr GlobalNamespace__MultiplierValuesRecorder__MultiplierValue(GlobalNamespace__MultiplierValuesRecorder__MultiplierValue const&) = default;
                    constexpr GlobalNamespace__MultiplierValuesRecorder__MultiplierValue(GlobalNamespace__MultiplierValuesRecorder__MultiplierValue&&) = default;
                    constexpr GlobalNamespace__MultiplierValuesRecorder__MultiplierValue& operator=(GlobalNamespace__MultiplierValuesRecorder__MultiplierValue const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MultiplierValuesRecorder__MultiplierValue& operator=(GlobalNamespace__MultiplierValuesRecorder__MultiplierValue&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplierValuesRecorder__MultiplierValue(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_multiplier, put=__set_multiplier))  multiplier;

constexpr void __set_multiplier(int32_t value) ;

constexpr int32_t __get_multiplier() const;

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;


// Methods

/// @brief Method .ctor addr 0x21082fc size 0xc virtual false final false
 void _ctor(int32_t multiplier, float_t time) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplierValuesRecorder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5361))
// CS Name: MultiplierValuesRecorder
class CORDL_TYPE MultiplierValuesRecorder : public UnityEngine::MonoBehaviour {
public:
// Declarations
using MultiplierValue = GlobalNamespace::GlobalNamespace__MultiplierValuesRecorder__MultiplierValue;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MultiplierValuesRecorder() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplierValuesRecorder", modifiers: " const&", def_value: None }]
constexpr MultiplierValuesRecorder(MultiplierValuesRecorder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplierValuesRecorder", modifiers: "&&", def_value: None }]
constexpr MultiplierValuesRecorder(MultiplierValuesRecorder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplierValuesRecorder(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplierValuesRecorder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplierValuesRecorder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplierValuesRecorder& operator=(MultiplierValuesRecorder&& o) noexcept = default;
  constexpr MultiplierValuesRecorder& operator=(MultiplierValuesRecorder const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IScoreController __declspec(property(get=__get__scoreController, put=__set__scoreController))  _scoreController;

constexpr void __set__scoreController(GlobalNamespace::IScoreController value) ;

constexpr GlobalNamespace::IScoreController __get__scoreController() const;

 GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value) ;

constexpr GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__MultiplierValuesRecorder__MultiplierValue> __declspec(property(get=__get__multiplierValues, put=__set__multiplierValues))  _multiplierValues;

constexpr void __set__multiplierValues(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__MultiplierValuesRecorder__MultiplierValue> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__MultiplierValuesRecorder__MultiplierValue> __get__multiplierValues() const;


// Properties

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__MultiplierValuesRecorder__MultiplierValue> __declspec(property(get=get_multiplierValues))  multiplierValues;


// Methods

/// @brief Method get_multiplierValues addr 0x2108000 size 0x8 virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__MultiplierValuesRecorder__MultiplierValue> get_multiplierValues() ;

/// @brief Method Start addr 0x2108008 size 0xf0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x21080f8 size 0x108 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleScoreControllerMultiplierDidChange addr 0x2108200 size 0xfc virtual false final false
 void HandleScoreControllerMultiplierDidChange(int32_t multiplier, float_t multiplierProgress) ;

// Ctor Parameters []
explicit MultiplierValuesRecorder() ;

/// @brief Method .ctor addr 0x2108308 size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplierValuesRecorder);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplierValuesRecorder, "", "MultiplierValuesRecorder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplierValuesRecorder__MultiplierValue, "", "MultiplierValuesRecorder/MultiplierValue");
