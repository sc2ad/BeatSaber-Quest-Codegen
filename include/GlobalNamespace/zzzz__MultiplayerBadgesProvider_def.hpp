#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class MultiplayerBadgesModelSO;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerBadgesProvider____c;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerBadgesProvider____c;
}
namespace GlobalNamespace {
class MultiplayerBadgesProvider;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5212))
// CS Name: MultiplayerBadgesProvider::<>c
class CORDL_TYPE GlobalNamespace__MultiplayerBadgesProvider____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__MultiplayerBadgesProvider____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerBadgesProvider____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerBadgesProvider____c(GlobalNamespace__MultiplayerBadgesProvider____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerBadgesProvider____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerBadgesProvider____c(GlobalNamespace__MultiplayerBadgesProvider____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerBadgesProvider____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerBadgesProvider____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerBadgesProvider____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerBadgesProvider____c& operator=(GlobalNamespace__MultiplayerBadgesProvider____c&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerBadgesProvider____c& operator=(GlobalNamespace__MultiplayerBadgesProvider____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__MultiplayerBadgesProvider____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__MultiplayerBadgesProvider____c value) ;

static GlobalNamespace::GlobalNamespace__MultiplayerBadgesProvider____c __get___9() ;

static System::Func_2<GlobalNamespace::MultiplayerPlayerResultsData,bool> __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(System::Func_2<GlobalNamespace::MultiplayerPlayerResultsData,bool> value) ;

static System::Func_2<GlobalNamespace::MultiplayerPlayerResultsData,bool> __get___9__7_0() ;

static System::Func_2<GlobalNamespace::MultiplayerPlayerResultsData,int32_t> __declspec(property(get=__get___9__7_1, put=__set___9__7_1))  __9__7_1;

static void __set___9__7_1(System::Func_2<GlobalNamespace::MultiplayerPlayerResultsData,int32_t> value) ;

static System::Func_2<GlobalNamespace::MultiplayerPlayerResultsData,int32_t> __get___9__7_1() ;


// Methods

static GlobalNamespace::GlobalNamespace__MultiplayerBadgesProvider____c New_ctor() ;

/// @brief Method .ctor addr 0x20db940 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SelectBadgesAndPutThemIntoResults>b__7_0 addr 0x20db948 size 0x20 virtual false final false
 bool _SelectBadgesAndPutThemIntoResults_b__7_0(GlobalNamespace::MultiplayerPlayerResultsData result) ;

/// @brief Method <SelectBadgesAndPutThemIntoResults>b__7_1 addr 0x20db968 size 0x28 virtual false final false
 int32_t _SelectBadgesAndPutThemIntoResults_b__7_1(GlobalNamespace::MultiplayerPlayerResultsData p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerBadgesProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5213))
// CS Name: MultiplayerBadgesProvider
class CORDL_TYPE MultiplayerBadgesProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__MultiplayerBadgesProvider____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerBadgesProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgesProvider", modifiers: " const&", def_value: None }]
constexpr MultiplayerBadgesProvider(MultiplayerBadgesProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgesProvider", modifiers: "&&", def_value: None }]
constexpr MultiplayerBadgesProvider(MultiplayerBadgesProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerBadgesProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerBadgesProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerBadgesProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerBadgesProvider& operator=(MultiplayerBadgesProvider&& o) noexcept = default;
  constexpr MultiplayerBadgesProvider& operator=(MultiplayerBadgesProvider const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get__difficultyBeatmap, put=__set__difficultyBeatmap))  _difficultyBeatmap;

constexpr void __set__difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value) ;

constexpr GlobalNamespace::IDifficultyBeatmap __get__difficultyBeatmap() const;

 GlobalNamespace::MultiplayerBadgesModelSO __declspec(property(get=__get__multiplayerBadgesModel, put=__set__multiplayerBadgesModel))  _multiplayerBadgesModel;

constexpr void __set__multiplayerBadgesModel(GlobalNamespace::MultiplayerBadgesModelSO value) ;

constexpr GlobalNamespace::MultiplayerBadgesModelSO __get__multiplayerBadgesModel() const;

/// @brief Field kTargetPositiveBadgesCount offset 0
static constexpr int32_t  kTargetPositiveBadgesCount{2};

/// @brief Field kTargetNegativeBadgesCount offset 0
static constexpr int32_t  kTargetNegativeBadgesCount{1};

/// @brief Field kMinRandomMultiplierAmount offset 0
static constexpr float_t  kMinRandomMultiplierAmount{0.8};

/// @brief Field kMaxRandomMultiplierAmount offset 0
static constexpr float_t  kMaxRandomMultiplierAmount{1.2};


// Methods

/// @brief Method SelectBadgesAndPutThemIntoResults addr 0x20da430 size 0x14a4 virtual false final false
 void SelectBadgesAndPutThemIntoResults(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData> playerResults) ;

static GlobalNamespace::MultiplayerBadgesProvider New_ctor() ;

/// @brief Method .ctor addr 0x20db8d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerBadgesProvider____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerBadgesProvider____c, "", "MultiplayerBadgesProvider/<>c");
NEED_NO_BOX(GlobalNamespace::MultiplayerBadgesProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBadgesProvider, "", "MultiplayerBadgesProvider");
