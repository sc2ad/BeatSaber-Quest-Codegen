#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class MockPlayersModel;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData;
}
// Type: ::AppInitOverrideStartType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6114))
// CS Name: AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType
struct CORDL_TYPE ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType(____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType const&) = default;
                    constexpr ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType(____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType&&) = default;
                    constexpr ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType& operator=(____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType& operator=(____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType_Unwrapped : int32_t {
__DoNotOverride = 0,
__AppStart = 1,
__AppRestart = 2,
__MultiSceneEditor = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DoNotOverride offset 0
static ::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType const DoNotOverride;

/// @brief Field AppStart offset 0
static ::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType const AppStart;

/// @brief Field AppRestart offset 0
static ::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType const AppRestart;

/// @brief Field MultiSceneEditor offset 0
static ::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType const MultiSceneEditor;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AppInitSceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6115))
// CS Name: AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData
class CORDL_TYPE ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData(____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData(____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData(void* ptr) noexcept : ::GlobalNamespace::SceneSetupData(ptr) {
}


  constexpr ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData& operator=(____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData&& o) noexcept = default;
  constexpr ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData& operator=(____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType __declspec(property(get=__get__appInitOverrideStartType_k__BackingField, put=__set__appInitOverrideStartType_k__BackingField))  _appInitOverrideStartType_k__BackingField;

constexpr void __set__appInitOverrideStartType_k__BackingField(::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType __get__appInitOverrideStartType_k__BackingField() const;

 ::GlobalNamespace::MockPlayersModel __declspec(property(get=__get__overrideMockPlayersModel_k__BackingField, put=__set__overrideMockPlayersModel_k__BackingField))  _overrideMockPlayersModel_k__BackingField;

constexpr void __set__overrideMockPlayersModel_k__BackingField(::GlobalNamespace::MockPlayersModel value) ;

constexpr ::GlobalNamespace::MockPlayersModel __get__overrideMockPlayersModel_k__BackingField() const;


// Properties

 ::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType __declspec(property(get=get_appInitOverrideStartType, put=set_appInitOverrideStartType))  appInitOverrideStartType;

 ::GlobalNamespace::MockPlayersModel __declspec(property(get=get_overrideMockPlayersModel, put=set_overrideMockPlayersModel))  overrideMockPlayersModel;


// Methods

/// @brief Method get_appInitOverrideStartType addr 0x21cfc9c size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType get_appInitOverrideStartType() ;

/// @brief Method set_appInitOverrideStartType addr 0x21cfca4 size 0x8 virtual false final false
 void set_appInitOverrideStartType(::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType value) ;

/// @brief Method get_overrideMockPlayersModel addr 0x21cfcac size 0x8 virtual false final false
 ::GlobalNamespace::MockPlayersModel get_overrideMockPlayersModel() ;

/// @brief Method set_overrideMockPlayersModel addr 0x21cfcb4 size 0x8 virtual false final false
 void set_overrideMockPlayersModel(::GlobalNamespace::MockPlayersModel value) ;

// Ctor Parameters [CppParam { name: "appInitOverrideStartType", ty: "::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType", modifiers: "", def_value: None }, CppParam { name: "overrideMockPlayersModel", ty: "::GlobalNamespace::MockPlayersModel", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData(::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType appInitOverrideStartType, ::GlobalNamespace::MockPlayersModel overrideMockPlayersModel) ;

/// @brief Method .ctor addr 0x21cfb70 size 0x30 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType appInitOverrideStartType, ::GlobalNamespace::MockPlayersModel overrideMockPlayersModel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AppInitScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6116))
// CS Name: AppInitScenesTransitionSetupDataSO
class CORDL_TYPE AppInitScenesTransitionSetupDataSO : public ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
public:
// Declarations
using AppInitSceneSetupData = ::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData;

using AppInitOverrideStartType = ::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~AppInitScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr AppInitScenesTransitionSetupDataSO(AppInitScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr AppInitScenesTransitionSetupDataSO(AppInitScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AppInitScenesTransitionSetupDataSO(void* ptr) noexcept : ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO(ptr) {
}


  constexpr AppInitScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AppInitScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AppInitScenesTransitionSetupDataSO& operator=(AppInitScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr AppInitScenesTransitionSetupDataSO& operator=(AppInitScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x21cfafc size 0x74 virtual false final false
 void Init() ;

/// @brief Method InitAsAppStart addr 0x21cfba0 size 0x74 virtual false final false
 void InitAsAppStart() ;

/// @brief Method __Init addr 0x21cfc14 size 0x80 virtual false final false
 void __Init(::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType appInitOverrideStartType, ::GlobalNamespace::MockPlayersModel mockPlayersModel) ;

// Ctor Parameters []
explicit AppInitScenesTransitionSetupDataSO() ;

/// @brief Method .ctor addr 0x21cfc94 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType, "", "AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType");
NEED_NO_BOX(::GlobalNamespace::AppInitScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInitScenesTransitionSetupDataSO, "", "AppInitScenesTransitionSetupDataSO");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData, "", "AppInitScenesTransitionSetupDataSO/AppInitSceneSetupData");
