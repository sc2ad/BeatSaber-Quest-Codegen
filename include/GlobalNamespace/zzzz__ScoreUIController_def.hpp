#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace TMPro {
class TextMeshProUGUI;
}
namespace System::Text {
class StringBuilder;
}
namespace GlobalNamespace {
class IScoreController;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__ScoreUIController__ScoreDisplayType;
}
namespace GlobalNamespace {
class GlobalNamespace__ScoreUIController__InitData;
}
namespace GlobalNamespace {
class ScoreUIController;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5144))
// CS Name: ScoreUIController::InitData
class CORDL_TYPE GlobalNamespace__ScoreUIController__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__ScoreUIController__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ScoreUIController__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ScoreUIController__InitData(GlobalNamespace__ScoreUIController__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ScoreUIController__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ScoreUIController__InitData(GlobalNamespace__ScoreUIController__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ScoreUIController__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ScoreUIController__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ScoreUIController__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ScoreUIController__InitData& operator=(GlobalNamespace__ScoreUIController__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__ScoreUIController__InitData& operator=(GlobalNamespace__ScoreUIController__InitData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__ScoreUIController__ScoreDisplayType __declspec(property(get=__get_scoreDisplayType, put=__set_scoreDisplayType))  scoreDisplayType;

constexpr void __set_scoreDisplayType(GlobalNamespace::GlobalNamespace__ScoreUIController__ScoreDisplayType value) ;

constexpr GlobalNamespace::GlobalNamespace__ScoreUIController__ScoreDisplayType __get_scoreDisplayType() const;


// Methods

// Ctor Parameters [CppParam { name: "scoreDisplayType", ty: "GlobalNamespace::GlobalNamespace__ScoreUIController__ScoreDisplayType", modifiers: "", def_value: None }]
explicit GlobalNamespace__ScoreUIController__InitData(GlobalNamespace::GlobalNamespace__ScoreUIController__ScoreDisplayType scoreDisplayType) ;

/// @brief Method .ctor addr 0x20cd8c0 size 0x28 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__ScoreUIController__ScoreDisplayType scoreDisplayType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ScoreDisplayType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5145))
// CS Name: ScoreUIController::ScoreDisplayType
struct CORDL_TYPE GlobalNamespace__ScoreUIController__ScoreDisplayType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__ScoreUIController__ScoreDisplayType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__ScoreUIController__ScoreDisplayType(GlobalNamespace__ScoreUIController__ScoreDisplayType const&) = default;
                    constexpr GlobalNamespace__ScoreUIController__ScoreDisplayType(GlobalNamespace__ScoreUIController__ScoreDisplayType&&) = default;
                    constexpr GlobalNamespace__ScoreUIController__ScoreDisplayType& operator=(GlobalNamespace__ScoreUIController__ScoreDisplayType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__ScoreUIController__ScoreDisplayType& operator=(GlobalNamespace__ScoreUIController__ScoreDisplayType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ScoreUIController__ScoreDisplayType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__ScoreUIController__ScoreDisplayType_Unwrapped : int32_t {
__MultipliedScore = 0,
__ModifiedScore = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__ScoreUIController__ScoreDisplayType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__ScoreUIController__ScoreDisplayType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MultipliedScore offset 0
static GlobalNamespace::GlobalNamespace__ScoreUIController__ScoreDisplayType const MultipliedScore;

/// @brief Field ModifiedScore offset 0
static GlobalNamespace::GlobalNamespace__ScoreUIController__ScoreDisplayType const ModifiedScore;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ScoreUIController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5146))
// CS Name: ScoreUIController
class CORDL_TYPE ScoreUIController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using ScoreDisplayType = GlobalNamespace::GlobalNamespace__ScoreUIController__ScoreDisplayType;

using InitData = GlobalNamespace::GlobalNamespace__ScoreUIController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ScoreUIController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreUIController", modifiers: " const&", def_value: None }]
constexpr ScoreUIController(ScoreUIController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreUIController", modifiers: "&&", def_value: None }]
constexpr ScoreUIController(ScoreUIController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScoreUIController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ScoreUIController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScoreUIController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScoreUIController& operator=(ScoreUIController&& o) noexcept = default;
  constexpr ScoreUIController& operator=(ScoreUIController const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__scoreText, put=__set__scoreText))  _scoreText;

constexpr void __set__scoreText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__scoreText() const;

 GlobalNamespace::GlobalNamespace__ScoreUIController__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__ScoreUIController__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__ScoreUIController__InitData __get__initData() const;

 GlobalNamespace::IScoreController __declspec(property(get=__get__scoreController, put=__set__scoreController))  _scoreController;

constexpr void __set__scoreController(GlobalNamespace::IScoreController value) ;

constexpr GlobalNamespace::IScoreController __get__scoreController() const;

 System::Text::StringBuilder __declspec(property(get=__get__stringBuilder, put=__set__stringBuilder))  _stringBuilder;

constexpr void __set__stringBuilder(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get__stringBuilder() const;

/// @brief Field kMaxNumberOfDigits offset 0
static constexpr int32_t  kMaxNumberOfDigits{9};


// Methods

/// @brief Method Start addr 0x20cd2b4 size 0x78 virtual false final false
 void Start() ;

/// @brief Method OnEnable addr 0x20cd6a4 size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x20cd6a8 size 0x4 virtual false final false
 void OnDisable() ;

/// @brief Method RegisterForEvents addr 0x20cd32c size 0x198 virtual false final false
 void RegisterForEvents() ;

/// @brief Method UnregisterFromEvents addr 0x20cd6ac size 0x108 virtual false final false
 void UnregisterFromEvents() ;

/// @brief Method HandleScoreDidChangeRealtime addr 0x20cd7b4 size 0x4 virtual false final false
 void HandleScoreDidChangeRealtime(int32_t multipliedScore, int32_t modifiedScore) ;

/// @brief Method UpdateScore addr 0x20cd4c4 size 0x1e0 virtual false final false
 void UpdateScore(int32_t multipliedScore, int32_t modifiedScore) ;

/// @brief Method Append000Number addr 0x20cd7b8 size 0x98 virtual false final false
static void Append000Number(System::Text::StringBuilder stringBuilder, int32_t number) ;

// Ctor Parameters []
explicit ScoreUIController() ;

/// @brief Method .ctor addr 0x20cd850 size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ScoreUIController__ScoreDisplayType, "", "ScoreUIController/ScoreDisplayType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ScoreUIController__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ScoreUIController__InitData, "", "ScoreUIController/InitData");
NEED_NO_BOX(GlobalNamespace::ScoreUIController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreUIController, "", "ScoreUIController");
