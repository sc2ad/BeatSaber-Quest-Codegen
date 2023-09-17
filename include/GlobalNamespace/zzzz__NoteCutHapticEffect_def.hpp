#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__NoteCutHapticEffect__Type;
}
namespace GlobalNamespace {
class NoteCutHapticEffect;
}
// Type: ::Type
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4982))
// CS Name: NoteCutHapticEffect::Type
struct CORDL_TYPE ____GlobalNamespace__NoteCutHapticEffect__Type : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__NoteCutHapticEffect__Type(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__NoteCutHapticEffect__Type(____GlobalNamespace__NoteCutHapticEffect__Type const&) = default;
                    constexpr ____GlobalNamespace__NoteCutHapticEffect__Type(____GlobalNamespace__NoteCutHapticEffect__Type&&) = default;
                    constexpr ____GlobalNamespace__NoteCutHapticEffect__Type& operator=(____GlobalNamespace__NoteCutHapticEffect__Type const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__NoteCutHapticEffect__Type& operator=(____GlobalNamespace__NoteCutHapticEffect__Type&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__NoteCutHapticEffect__Type(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__NoteCutHapticEffect__Type_Unwrapped : int32_t {
__Normal = 0,
__ShortNormal = 1,
__ShortWeak = 2,
__Bomb = 3,
__BadCut = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__NoteCutHapticEffect__Type_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__NoteCutHapticEffect__Type_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static ::GlobalNamespace::____GlobalNamespace__NoteCutHapticEffect__Type const Normal;

/// @brief Field ShortNormal offset 0
static ::GlobalNamespace::____GlobalNamespace__NoteCutHapticEffect__Type const ShortNormal;

/// @brief Field ShortWeak offset 0
static ::GlobalNamespace::____GlobalNamespace__NoteCutHapticEffect__Type const ShortWeak;

/// @brief Field Bomb offset 0
static ::GlobalNamespace::____GlobalNamespace__NoteCutHapticEffect__Type const Bomb;

/// @brief Field BadCut offset 0
static ::GlobalNamespace::____GlobalNamespace__NoteCutHapticEffect__Type const BadCut;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteCutHapticEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4983))
// CS Name: NoteCutHapticEffect
class CORDL_TYPE NoteCutHapticEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Type = ::GlobalNamespace::____GlobalNamespace__NoteCutHapticEffect__Type;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~NoteCutHapticEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutHapticEffect", modifiers: " const&", def_value: None }]
constexpr NoteCutHapticEffect(NoteCutHapticEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutHapticEffect", modifiers: "&&", def_value: None }]
constexpr NoteCutHapticEffect(NoteCutHapticEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteCutHapticEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteCutHapticEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteCutHapticEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteCutHapticEffect& operator=(NoteCutHapticEffect&& o) noexcept = default;
  constexpr NoteCutHapticEffect& operator=(NoteCutHapticEffect const& o) noexcept = default;
                


// Fields

 ::Libraries::HM::HMLib::VR::HapticPresetSO __declspec(property(get=__get__normalPreset, put=__set__normalPreset))  _normalPreset;

constexpr void __set__normalPreset(::Libraries::HM::HMLib::VR::HapticPresetSO value) ;

constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO __get__normalPreset() const;

 ::Libraries::HM::HMLib::VR::HapticPresetSO __declspec(property(get=__get__shortNormalPreset, put=__set__shortNormalPreset))  _shortNormalPreset;

constexpr void __set__shortNormalPreset(::Libraries::HM::HMLib::VR::HapticPresetSO value) ;

constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO __get__shortNormalPreset() const;

 ::Libraries::HM::HMLib::VR::HapticPresetSO __declspec(property(get=__get__shortWeakPreset, put=__set__shortWeakPreset))  _shortWeakPreset;

constexpr void __set__shortWeakPreset(::Libraries::HM::HMLib::VR::HapticPresetSO value) ;

constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO __get__shortWeakPreset() const;

 ::Libraries::HM::HMLib::VR::HapticPresetSO __declspec(property(get=__get__bombPreset, put=__set__bombPreset))  _bombPreset;

constexpr void __set__bombPreset(::Libraries::HM::HMLib::VR::HapticPresetSO value) ;

constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO __get__bombPreset() const;

 ::Libraries::HM::HMLib::VR::HapticPresetSO __declspec(property(get=__get__badCutPreset, put=__set__badCutPreset))  _badCutPreset;

constexpr void __set__badCutPreset(::Libraries::HM::HMLib::VR::HapticPresetSO value) ;

constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO __get__badCutPreset() const;

 ::GlobalNamespace::HapticFeedbackManager __declspec(property(get=__get__hapticFeedbackManager, put=__set__hapticFeedbackManager))  _hapticFeedbackManager;

constexpr void __set__hapticFeedbackManager(::GlobalNamespace::HapticFeedbackManager value) ;

constexpr ::GlobalNamespace::HapticFeedbackManager __get__hapticFeedbackManager() const;


// Methods

/// @brief Method HitNote addr 0x2252700 size 0x88 virtual false final false
 void HitNote(::GlobalNamespace::SaberType saberType, ::GlobalNamespace::____GlobalNamespace__NoteCutHapticEffect__Type type) ;

// Ctor Parameters []
explicit NoteCutHapticEffect() ;

/// @brief Method .ctor addr 0x2252788 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__NoteCutHapticEffect__Type, "", "NoteCutHapticEffect/Type");
NEED_NO_BOX(::GlobalNamespace::NoteCutHapticEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutHapticEffect, "", "NoteCutHapticEffect");
