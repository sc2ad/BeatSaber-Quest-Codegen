#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace Tweening {
class Tween;
}
// Forward declare root types
namespace Tweening {
class TweeningManager;
}
// Type: Tweening::TweeningManager
namespace Tweening {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15938))
// CS Name: Tweening.TweeningManager
class CORDL_TYPE TweeningManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TweeningManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "TweeningManager", modifiers: " const&", def_value: None }]
constexpr TweeningManager(TweeningManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TweeningManager", modifiers: "&&", def_value: None }]
constexpr TweeningManager(TweeningManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TweeningManager(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TweeningManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TweeningManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TweeningManager& operator=(TweeningManager&& o) noexcept = default;
  constexpr TweeningManager& operator=(TweeningManager const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::Tweening::Tween> __declspec(property(get=__get__activeTweens, put=__set__activeTweens))  _activeTweens;

constexpr void __set__activeTweens(::System::Collections::Generic::List_1<::Tweening::Tween> value) ;

constexpr ::System::Collections::Generic::List_1<::Tweening::Tween> __get__activeTweens() const;

 ::System::Collections::Generic::HashSet_1<::Tweening::Tween> __declspec(property(get=__get__activeTweensSet, put=__set__activeTweensSet))  _activeTweensSet;

constexpr void __set__activeTweensSet(::System::Collections::Generic::HashSet_1<::Tweening::Tween> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::Tweening::Tween> __get__activeTweensSet() const;

 ::System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::System::Collections::Generic::HashSet_1<::Tweening::Tween>> __declspec(property(get=__get__tweensByOwner, put=__set__tweensByOwner))  _tweensByOwner;

constexpr void __set__tweensByOwner(::System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::System::Collections::Generic::HashSet_1<::Tweening::Tween>> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::System::Collections::Generic::HashSet_1<::Tweening::Tween>> __get__tweensByOwner() const;

 ::System::Collections::Generic::Dictionary_2<::Tweening::Tween,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__ownerByTween, put=__set__ownerByTween))  _ownerByTween;

constexpr void __set__ownerByTween(::System::Collections::Generic::Dictionary_2<::Tweening::Tween,::bs_hook::Il2CppWrapperType> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::Tweening::Tween,::bs_hook::Il2CppWrapperType> __get__ownerByTween() const;

 ::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween>> __declspec(property(get=__get__reusableTweenHashSets, put=__set__reusableTweenHashSets))  _reusableTweenHashSets;

constexpr void __set__reusableTweenHashSets(::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween>> value) ;

constexpr ::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween>> __get__reusableTweenHashSets() const;


// Methods

/// @brief Method Start addr 0x287aaa4 size 0x64 virtual false final false
 void Start() ;

/// @brief Method LateUpdate addr 0x287ab08 size 0x1ec virtual false final false
 void LateUpdate() ;

/// @brief Method GetTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t GetTime() ;

/// @brief Method AddTween addr 0x287aeb8 size 0x4c virtual false final false
 ::Tweening::Tween AddTween(::Tweening::Tween tween, ::bs_hook::Il2CppWrapperType owner) ;

/// @brief Method RestartTween addr 0x287b038 size 0x58 virtual false final false
 ::Tweening::Tween RestartTween(::Tweening::Tween tween, ::bs_hook::Il2CppWrapperType owner) ;

/// @brief Method ResumeTween addr 0x287b090 size 0x24 virtual false final false
 ::Tweening::Tween ResumeTween(::Tweening::Tween tween, ::bs_hook::Il2CppWrapperType owner) ;

/// @brief Method KillAllTweens addr 0x287b0b4 size 0x17c virtual false final false
 void KillAllTweens(::bs_hook::Il2CppWrapperType owner) ;

/// @brief Method RemoveTweenFromOwnerDictionary addr 0x287acf4 size 0x1c4 virtual false final false
 void RemoveTweenFromOwnerDictionary(::Tweening::Tween tween) ;

/// @brief Method AddTweenToDataStructures addr 0x287af04 size 0x134 virtual false final false
 bool AddTweenToDataStructures(::Tweening::Tween tween, ::bs_hook::Il2CppWrapperType owner) ;

/// @brief Method AddTweenToOwnerDictionary addr 0x287b230 size 0x198 virtual false final false
 void AddTweenToOwnerDictionary(::Tweening::Tween tween, ::bs_hook::Il2CppWrapperType owner) ;

// Ctor Parameters []
explicit TweeningManager() ;

/// @brief Method .ctor addr 0x287a830 size 0x18c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
} // end anonymous namespace
NEED_NO_BOX(::Tweening::TweeningManager);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::TweeningManager, "Tweening", "TweeningManager");
