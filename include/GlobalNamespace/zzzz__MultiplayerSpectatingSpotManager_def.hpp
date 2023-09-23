#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace GlobalNamespace {
class IMultiplayerSpectatingSpot;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerSpectatingSpotManager____c;
}
namespace GlobalNamespace {
class MultiplayerSpectatingSpotManager;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5351))
// CS Name: MultiplayerSpectatingSpotManager::<>c
class CORDL_TYPE GlobalNamespace__MultiplayerSpectatingSpotManager____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__MultiplayerSpectatingSpotManager____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerSpectatingSpotManager____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerSpectatingSpotManager____c(GlobalNamespace__MultiplayerSpectatingSpotManager____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerSpectatingSpotManager____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerSpectatingSpotManager____c(GlobalNamespace__MultiplayerSpectatingSpotManager____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerSpectatingSpotManager____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerSpectatingSpotManager____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerSpectatingSpotManager____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerSpectatingSpotManager____c& operator=(GlobalNamespace__MultiplayerSpectatingSpotManager____c&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerSpectatingSpotManager____c& operator=(GlobalNamespace__MultiplayerSpectatingSpotManager____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__MultiplayerSpectatingSpotManager____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__MultiplayerSpectatingSpotManager____c value) ;

static GlobalNamespace::GlobalNamespace__MultiplayerSpectatingSpotManager____c __get___9() ;

static System::Func_2<GlobalNamespace::IMultiplayerSpectatingSpot,bool> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(System::Func_2<GlobalNamespace::IMultiplayerSpectatingSpot,bool> value) ;

static System::Func_2<GlobalNamespace::IMultiplayerSpectatingSpot,bool> __get___9__3_0() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MultiplayerSpectatingSpotManager____c() ;

/// @brief Method .ctor addr 0x2106884 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_defaultSpot>b__3_0 addr 0x210688c size 0xa0 virtual false final false
 bool _get_defaultSpot_b__3_0(GlobalNamespace::IMultiplayerSpectatingSpot s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerSpectatingSpotManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5352))
// CS Name: MultiplayerSpectatingSpotManager
class CORDL_TYPE MultiplayerSpectatingSpotManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__MultiplayerSpectatingSpotManager____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MultiplayerSpectatingSpotManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatingSpotManager", modifiers: " const&", def_value: None }]
constexpr MultiplayerSpectatingSpotManager(MultiplayerSpectatingSpotManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatingSpotManager", modifiers: "&&", def_value: None }]
constexpr MultiplayerSpectatingSpotManager(MultiplayerSpectatingSpotManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerSpectatingSpotManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerSpectatingSpotManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerSpectatingSpotManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerSpectatingSpotManager& operator=(MultiplayerSpectatingSpotManager&& o) noexcept = default;
  constexpr MultiplayerSpectatingSpotManager& operator=(MultiplayerSpectatingSpotManager const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::IMultiplayerSpectatingSpot> __declspec(property(get=__get__spectatingSpots, put=__set__spectatingSpots))  _spectatingSpots;

constexpr void __set__spectatingSpots(System::Collections::Generic::List_1<GlobalNamespace::IMultiplayerSpectatingSpot> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::IMultiplayerSpectatingSpot> __get__spectatingSpots() const;

 System::Collections::Generic::Dictionary_2<GlobalNamespace::IMultiplayerSpectatingSpot,int32_t> __declspec(property(get=__get__spotIndexBySpot, put=__set__spotIndexBySpot))  _spotIndexBySpot;

constexpr void __set__spotIndexBySpot(System::Collections::Generic::Dictionary_2<GlobalNamespace::IMultiplayerSpectatingSpot,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::IMultiplayerSpectatingSpot,int32_t> __get__spotIndexBySpot() const;


// Properties

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IMultiplayerSpectatingSpot> __declspec(property(get=get_spectatingSpots))  spectatingSpots;

 GlobalNamespace::IMultiplayerSpectatingSpot __declspec(property(get=get_defaultSpot))  defaultSpot;


// Methods

/// @brief Method get_spectatingSpots addr 0x2106234 size 0x8 virtual false final false
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IMultiplayerSpectatingSpot> get_spectatingSpots() ;

/// @brief Method get_defaultSpot addr 0x210623c size 0x158 virtual false final false
 GlobalNamespace::IMultiplayerSpectatingSpot get_defaultSpot() ;

/// @brief Method RegisterSpectatingSpot addr 0x2105b04 size 0x164 virtual false final false
 void RegisterSpectatingSpot(GlobalNamespace::IMultiplayerSpectatingSpot spectatingSpot) ;

/// @brief Method GetAdjacentSpot addr 0x2106508 size 0xb4 virtual false final false
 GlobalNamespace::IMultiplayerSpectatingSpot GetAdjacentSpot(GlobalNamespace::IMultiplayerSpectatingSpot spectatingSpot, int32_t offset) ;

/// @brief Method GetIndexBySpot addr 0x21065bc size 0x84 virtual false final false
 int32_t GetIndexBySpot(GlobalNamespace::IMultiplayerSpectatingSpot spectatingSpot) ;

/// @brief Method UpdateIndexBySpotDictionary addr 0x2106394 size 0x174 virtual false final false
 void UpdateIndexBySpotDictionary() ;

/// @brief Method SpotOnHasBeenRemoved addr 0x2106640 size 0x120 virtual false final false
 void SpotOnHasBeenRemoved(GlobalNamespace::IMultiplayerSpectatingSpot spectatingSpot) ;

// Ctor Parameters []
explicit MultiplayerSpectatingSpotManager() ;

/// @brief Method .ctor addr 0x2106760 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerSpectatingSpotManager____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerSpectatingSpotManager____c, "", "MultiplayerSpectatingSpotManager/<>c");
NEED_NO_BOX(GlobalNamespace::MultiplayerSpectatingSpotManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerSpectatingSpotManager, "", "MultiplayerSpectatingSpotManager");
